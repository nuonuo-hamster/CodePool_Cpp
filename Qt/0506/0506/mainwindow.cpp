#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_activated(int index)
{
    QString bankName = ui->comboBox->currentText();
    QString bankCode = ui->comboBox->currentData().toString(); //??
    QString text = " ";
    switch (index){
        case(0):
            text = ":000";
            break;
        case(1):
            text = ":001";
            break;
        case(2):
            text = ":002";
            break;
        case(3):
            text = ":003";
            break;

    }


    ui->label->setText(bankName + "的轉帳代號是" + bankCode + text);
}

