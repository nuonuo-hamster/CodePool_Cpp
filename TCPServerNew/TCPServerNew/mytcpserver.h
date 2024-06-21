#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>

class MyTcpServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);

protected:
    void incomingConnection(qintptr sockedtDescriptor);

signals:
    void signal_to_thread();
};
#endif // MYTCPSERVER_H
