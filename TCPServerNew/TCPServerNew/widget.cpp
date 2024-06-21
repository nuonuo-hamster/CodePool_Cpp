#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    server = new MyTcpServer;

    server->listen(QHostAddress::AnyIPv4, PORT);
}

Widget::~Widget()
{
    delete ui;
}

// void Widget::newClientHandler()
// {
//     ui->ipLineEdit->setText(socket->peerAddress().toString());
//     ui->portLineEdit->setText(QString::number(socket->peerPort()));
// }

// void Widget::clientInfoSlot()
// {
//     // know who client send the mesg
//     QTcpSocket *s = (QTcpSocket *) sender();
//     ui->mainLineEdit->setText(QString(s->readAll()));
// }

void Widget::threadSlot(QByteArray b)
{
    ui->mainLineEdit->setText(QString (b));
}
