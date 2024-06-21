#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QTcpSocket *s, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chat)
{
    ui->setupUi(this);
    socket = s;
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_clearButton_clicked()
{
    ui->lineEdit->clear();
}


void Chat::on_sendpush_clicked()
{
    QByteArray ba = (ui->lineEdit->text()).toUtf8();

    socket->write(ba);
}

