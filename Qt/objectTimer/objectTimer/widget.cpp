#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    picId = 1;

    // qDebug() << "App path : " << QCoreApplication::applicationDirPath();
    QString path = QString(QCoreApplication::applicationDirPath() + "//..//..//img//1.jpg");
    QPixmap pix(path);
    ui->label->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    myTimerId = this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() != myTimerId)
        return;

    QString path = QString(QCoreApplication::applicationDirPath() + "//..//..//img//");
    picId++;
    path += QString::number(picId);
    path += ".jpg";

    QPixmap pix(path);
    ui->label->setPixmap(pix);

    if (picId == 13)
        picId = 1;
}

void Widget::on_pushButton_clicked()
{
    this->killTimer(myTimerId);
}

