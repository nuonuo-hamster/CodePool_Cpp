#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QTcpSocket; // create Tcp object
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_connectButton_clicked()
{
    //get addr
    QString IP = ui->ipLineEdit->text();
    QString port = ui->portLineEdit->text();
    qDebug() << IP << port;

    //connect server
    socket->connectToHost(QHostAddress(IP), port.toShort());

    //detect whether connect or not
    connect(socket, &QTcpSocket::connected, [this]()
    {
        QMessageBox::information(this, "Connect Info", "connect sucess");

        this->hide();
        Chat *c = new Chat(socket); //heap pointer
        c->show();
    }
    );

    //if disconnect
    connect(socket, &QTcpSocket::disconnected, [this]()
    {
        QMessageBox::information(this, "Connect Info", "disconnected");
    }
    );
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}
