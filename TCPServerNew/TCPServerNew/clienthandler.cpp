#include "clienthandler.h"

ClientHandler::ClientHandler(int sockfd, QObject *parent)
    : QObject{parent}
{
    this->socketDescriptor = sockfd;
}

void ClientHandler::working()
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);

    connect(socket, &QTcpSocket::readyRead, this, &ClientHandler::recvInfo);
}
void ClientHandler::recvInfo()
{
    qDebug() << socket->readAll();
}
