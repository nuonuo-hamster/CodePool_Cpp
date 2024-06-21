#include "mytcpserver.h"
#include "clienthandler.h"
#include <QThread>

MyTcpServer::MyTcpServer(QObject *parent)
    : QTcpServer{parent}
{

}

// when client connect, this function triggered
void MyTcpServer::incomingConnection(qintptr sockedtDescriptor)
{
    //launch thread
    QThread *subThread = new QThread;               //thread object
    //socket cannot use across thread
    ClientHandler* myClient = new ClientHandler(sockedtDescriptor);    //event object

    myClient->moveToThread(subThread);

    subThread->start();

    connect(this, &MyTcpServer::signal_to_thread, myClient, &ClientHandler::working);
    emit signal_to_thread();
}
