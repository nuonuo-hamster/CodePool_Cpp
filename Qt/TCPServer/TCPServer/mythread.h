#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QTcpSocket *s);
    void run();   //thread pre-created function

signals:
    void sendToWidget(QByteArray b);

public slots:
    void clientInfoSlot();

private:
    QTcpSocket *socket;
};

#endif // MYTHREAD_H
