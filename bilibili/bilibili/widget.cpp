#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->cmdLineEdit, SIGNAL(returnPressed()), this, SLOT(on_commitButton_clicked()));

    connect(ui->cancelButton, &QPushButton::clicked, this, &Widget::on_cancelButton_clicked);

    connect(ui->browseButton, &QPushButton::clicked, [this]()
    {
        QMessageBox::information(this, "message", "click browse");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_commitButton_clicked()
{
    //get lineedit object
    QString program = ui->cmdLineEdit->text();
    //create process object
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}

void Widget::on_cancelButton_clicked()
{
    this->close();
}

