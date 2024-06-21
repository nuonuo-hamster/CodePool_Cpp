#ifndef CLIENTHANDLER_H
#define CLIENTHANDLER_H

#include <QObject>
#include <QTcpSocket>

class ClientHandler : public QObject
{
    Q_OBJECT
public:
    explicit ClientHandler(int sockfd, QObject *parent = nullptr);

public slots:
    void working();

signals:

private:
    qintptr socketDescriptor;
    QTcpSocket *socket;

private slots:
    void recvInfo();


};

#endif // CLIENTHANDLER_H
