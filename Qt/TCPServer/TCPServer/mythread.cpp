#include "mythread.h"

mythread::mythread(QTcpSocket *s)
{
    socket = s;
}

void mythread::run()
{
    //any tread content must run in here
    connect(socket, &QTcpSocket::readyRead, this, &mythread::clientInfoSlot);
}

// ***** not good this run in the main, not thread. ******
// cannot use ui in other .cpp that not widget.cpp, so sent signal to widget.cpp
void mythread::clientInfoSlot()
{
    // qDebug() << socket->readAll();
    QByteArray ba = socket->readAll();

    //send message
    emit sendToWidget(ba);
}
