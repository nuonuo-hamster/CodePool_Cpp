#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer;

    QImage img;
    picID = 1;
    QString path = QString(QCoreApplication::applicationDirPath() + "//..//..//img//1.jpg");
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));

    //TIMEOUT function trigger
    connect(timer, &QTimer::timeout, this, &Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    timer->start(TIMEOUT);
}

void Widget::timeoutSlot()
{
    QString path = QString(QCoreApplication::applicationDirPath() + "//..//..//img//");
    picID ++;
    path += QString::number(picID);
    path += ".jpg";

    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));

    if(picID == 13)
        picID = 0;
}

void Widget::on_stopButton_clicked()
{
    timer->stop();
}


void Widget::on_nextButton_clicked()
{
    //run once (waitTime, this, slot)
    QTimer::singleShot(100, this, SLOT(timeoutSlot()));
}

