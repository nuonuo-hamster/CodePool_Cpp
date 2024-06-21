#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{

    ui->textEdit->clear();
    this->setWindowTitle("new_file.txt");
}

void MainWindow::openActionSlot()
{
    QString path = QCoreApplication::applicationFilePath();
    QString fileName = QFileDialog::getOpenFileName(this
                                ,tr("Open File")
                                ,path,tr("*.cpp"));
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "warning", "please choose a file");
    }
    else
    {
        //print in terminal
        qDebug() << fileName;

        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::saveActionSlot()
{
    QString path = QCoreApplication::applicationFilePath();
    QString fileName = QFileDialog::getSaveFileName(this
                                                    ,tr("Choose a file")
                                                    ,path);
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "warning", "please choose a file");
    }
    else
    {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba = (ui->textEdit->toPlainText()).toUtf8();
        file.write(ba);
        file.close();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        saveActionSlot();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *m)
{
    QPoint pt = m->pos();
    qDebug() << pt;

    if(m->button() == Qt::LeftButton)
    {
        qDebug() << "Left mouse button pressed.";
    }
    else if(m->button() == Qt::RightButton)
    {
        qDebug() << "Right mouse button pressed.";
    }
}
