#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4, PORT);

    // client connect in, server signaled
    connect(server, &QTcpServer::newConnection, this, &Widget::newClientHandler);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newClientHandler()
{
    //create connection
    QTcpSocket *socket = server->nextPendingConnection();

    //get client addr
    // socket->peerAddress();
    // socket->peerPort();

    ui->ipLineEdit->setText(socket->peerAddress().toString());
    ui->portLineEdit->setText(QString::number(socket->peerPort()));

    //server get mesg from client, socket send "ready to read"
    // connect(socket, &QTcpSocket::readyRead, this, &Widget::clientInfoSlot);

    //launch thread
    mythread *t = new mythread(socket);
    t->start();

    //catch message
    connect(t, &mythread::sendToWidget, this, &Widget::threadSlot);
}

void Widget::clientInfoSlot()
{
    // know who client send the mesg
    QTcpSocket *s = (QTcpSocket *) sender();
    ui->mainLineEdit->setText(QString(s->readAll()));
}

void Widget::threadSlot(QByteArray b)
{
    ui->mainLineEdit->setText(QString (b));
}
