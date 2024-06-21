#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStatusBar>
#include <QMimeData>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("new_file.txt"); //視窗名

    setAcceptDrops(true);  // 啟動滑鼠拖拉功能
    ui->textEdit->setAcceptDrops(false);

    QStatusBar *myStatusBar = new QStatusBar(this); // 創建狀態列
    setStatusBar(myStatusBar);
    statusBar()->addWidget(m_statusLabel);
    myTimerId = this->startTimer(TIMEOUT); // 隨時監控狀態列


    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);
    connect(ui->saveAsAction, &QAction::triggered, this, &MainWindow::saveAsActionSlot);
    connect(ui->closeAction, &QAction::triggered, this, &MainWindow::closeActionSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newActionSlot()
{
    ui->textEdit->clear(); //清屏
    this->setWindowTitle("new_file.txt"); //視窗名
    filePath = QString(""); //拿到附檔名
}

void MainWindow::openActionSlot()
{
    QString path = QCoreApplication::applicationDirPath() + "\\..\\..\\file_space";
    path = QDir::cleanPath(path);
    QString fileName = QFileDialog::getOpenFileName(this
                                ,tr("Open File")
                                ,path,"text(*.txt *.md);;code(*.c *.cpp *.h *.hpp *.py)");

    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "warning", "please choose a file");
    }
    else
    {
        QFile file(fileName);
        QFileInfo fileInfo(fileName);

        this->setWindowTitle(fileInfo.fileName()); //視窗名改成檔名
        filePath = fileName; //拿到檔案位置

        //把FileText放入視窗
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::saveActionSlot()
{
    // 更新已有的檔案
    if(filePath != ""){
        QFile file(filePath);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba = (ui->textEdit->toPlainText()).toUtf8();
        file.write(ba);
        file.close();

        QMessageBox::information(this, "saved", "save successed");
    }
    // 保存新空白檔
    else{
        QString path = QCoreApplication::applicationDirPath() + "\\..\\..\\file_space";
        path = QDir::cleanPath(path);
        QString fileName = QFileDialog::getSaveFileName(this
                                                        ,tr("Choose a folder")
                                                        ,path, "text(*.txt);;source code(*.c);;source code(*.cpp);;header(*.h);;header(*.hpp);;python(*.py);;markdown(*.md)");

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

            QMessageBox::information(this, "saved", "save successed");

            QFileInfo fileInfo(fileName);
            this->setWindowTitle(fileInfo.fileName()); //視窗名改成檔名
            filePath = fileName; //拿到檔案位置
        }
    }
}

void MainWindow::saveAsActionSlot()
{
    // 空白檔案
    if(filePath == ""){
        QString path = QCoreApplication::applicationDirPath() + "\\..\\..\\file_space";
        path = QDir::cleanPath(path);
        QString fileName = QFileDialog::getSaveFileName(this
                                                        ,tr("Choose a folder")
                                                        ,path, "text(*.txt);;source code(*.c);;source code(*.cpp);;header(*.h);;header(*.hpp);;python(*.py);;markdown(*.md)");

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

            QMessageBox::information(this, "saved", "save successed");

            QFileInfo fileInfo(fileName);
            this->setWindowTitle(fileInfo.fileName()); //視窗名改成檔名
            filePath = fileName; //拿到檔案位置
        }
    }
    else //既有的檔案
    {
        QFileInfo fileInfo(filePath);
        QString fileExtension = fileInfo.suffix(); //拿到附檔名

        QString path = QCoreApplication::applicationDirPath() + "\\..\\..\\file_space";
        path = QDir::cleanPath(path);
        QString fileType = "fileType(*." + fileExtension + ")";
        QString fileName = QFileDialog::getSaveFileName(this
                                                        ,tr("Choose a folder")
                                                        ,path, fileType);

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

            QMessageBox::information(this, "saved", "save successed");

            QFileInfo fileInfo(fileName);
            this->setWindowTitle(fileInfo.fileName()); //視窗名改成檔名
            filePath = fileName; //拿到檔案位置
        }
    }
}

void MainWindow::closeActionSlot()
{
    this->close();
}

void MainWindow::keyPressEvent(QKeyEvent *k)
{
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_N)
    {
        newActionSlot();
    }

    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_O)
    {
        openActionSlot();
    }

    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        saveActionSlot();
    }

    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_K)
    {
        saveAsActionSlot();
    }

    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_Q)
    {
        closeActionSlot();
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

void MainWindow::dragEnterEvent(QDragEnterEvent* event)
{
    if (event->mimeData()->hasUrls())
    {
        event->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent* event)
{
    const QUrl url = event->mimeData()->urls().first();
    const QString dragfilePath = url.toLocalFile();

    QFile file(dragfilePath);
    QFileInfo fileInfo(dragfilePath);

    this->setWindowTitle(fileInfo.fileName()); //視窗名改成檔名
    filePath = dragfilePath; //拿到檔案位置

    //把FileText放入視窗
    file.open(QIODevice::ReadOnly);
    QByteArray ba = file.readAll();
    ui->textEdit->setText(QString(ba));
    file.close();
    event->acceptProposedAction();
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if(event->timerId() != myTimerId)
        return;

    QString byteAndAddrInfo = "";
    if (filePath!=""){

        QFileInfo fileInfo(filePath);
        int byteSize = fileInfo.size();
        byteAndAddrInfo = QString(", 檔案大小: %1 bytes, 位置: %2")
                                 .arg(byteSize)
                                 .arg(filePath);
    }

    QString textAmount =  QString(" 字數: %1 個字")
                             .arg(ui->textEdit->toPlainText().length());

    QString statusInfo = textAmount + byteAndAddrInfo;

    m_statusLabel->setText(statusInfo);
}
