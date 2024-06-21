#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImageReader>
#include <QImage>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QStatusBar>
#include <QFileInfo>
#include <QMenuBar>
#include <QMenu>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_imageLabel = new v;
    setCentralWidget(m_imageLabel);
    setAcceptDrops(true);  // 啟動滑鼠拖拉功能！

    // QString fileName = "D:\\MyCode\\CodePool_Cpp\\Qt\\objectTimer\\img\\1.jpg"; // 請換成你喜歡的圖片路徑

    QStatusBar *statusBar = new QStatusBar(this); // 創建狀態列
    setStatusBar(statusBar);

    // 創建 QMenuBar 選單列物件
    QMenuBar* menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    // 呼叫 addMenu() 新建選單
    QMenu* fileMenu = menuBar->addMenu("檔案");
    QMenu* aboutMenu = menuBar->addMenu("關於");

    QAction* openAction = new QAction("開啟圖片");
    QAction* exitAction = new QAction("離開程式");
    QAction* aboutQtAction = new QAction("關於Qt");

    fileMenu->addAction(openAction);
    fileMenu->addAction(exitAction);
    aboutMenu->addAction(aboutQtAction);

    connect(openAction, &QAction::triggered, this, &MainWindow::openFile);
    connect(exitAction, &QAction::triggered, this, &MainWindow::exitApp);

    // QDir dir("D:/MyCode/CodePool_Cpp/Qt/objectTimer/img"); // 建立 QDir 物件，建構子傳入目錄路徑

    // // 用副檔名篩選檔案
    // QStringList nameFilter{"*.jpg", "*.png"};
    // // 呼叫entryInfoList()獲取檔案清單
    // QFileInfoList list = dir.entryInfoList(nameFilter);

    // // 迴圈走訪所有檔案並印出檔名
    // for (int i = 0; i < list.size(); ++i) {
    //     QFileInfo fileInfo = list.at(i);
    //     qDebug() << QString("%1").arg(fileInfo.fileName());
    // }

    QMenu* viewMenu = menuBar->addMenu("瀏覽");

    QAction* prevImgAction = new QAction("上一張");
    QAction* nextImgAction = new QAction("下一張");
    viewMenu->addAction(prevImgAction);
    viewMenu->addAction(nextImgAction);

    connect(prevImgAction, &QAction::triggered,
            this, &MainWindow::prevImage);
    connect(nextImgAction, &QAction::triggered,
            this, &MainWindow::nextImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 函數內容跟昨天完全一致，只是變成獨立函數
void MainWindow::loadImage(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    const QImage newImage = reader.read();
    Q_ASSERT(!newImage.isNull());
    m_imageLabel->setPixmap(QPixmap::fromImage(newImage));

    // 獲取圖片的寬高
    int width = newImage.width();
    int height = newImage.height();

    // 獲取圖片的檔案大小
    QFileInfo fileInfo(fileName);
    int byteSize = fileInfo.size();

    QString statusInfo = QString("寬高: %1x%2, 檔案大小: %3 bytes")
                             .arg(width)
                             .arg(height)
                             .arg(byteSize);
    statusBar()->showMessage(statusInfo);

    m_currentImageName = fileInfo.fileName(); // 抓取當前圖片的檔名
    m_currentDir = fileInfo.dir(); // 抓取圖片所在的當前目錄！
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
    const QString filePath = url.toLocalFile();

    loadImage(filePath);
    event->acceptProposedAction();
}

void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "開啟圖片", "", "Images (*.png *.jpg)");
    if (!fileName.isEmpty())
        loadImage(fileName);
}

void MainWindow::exitApp()
{
    close(); // 關閉主視窗
}

void MainWindow::prevImage()
{
    QStringList nameFilter{"*.jpg", "*.png"};
    QFileInfoList files = m_currentDir.entryInfoList(nameFilter);
    int currentImgIndex = -1;
    for (int i = 0; i < files.size(); ++i)
    {
        if (files[i].fileName() == m_currentImageName)
        {
            currentImgIndex = i;
            break;
        }
    }
    int prevImgIndex = currentImgIndex - 1;
    if (prevImgIndex < 0)
        return;
    loadImage(files[prevImgIndex].absoluteFilePath());
}

void MainWindow::nextImage(){

    QStringList nameFilter{"*.jpg", "*.png"};
    QFileInfoList files = m_currentDir.entryInfoList(nameFilter);
    int currentImgIndex = -1;
    for (int i = 0; i < files.size(); ++i)
    {
        if (files[i].fileName() == m_currentImageName)
        {
            currentImgIndex = i;
            break;
        }
    }
    int nextImgIndex = currentImgIndex + 1;
    if (nextImgIndex < 0)
        return;
    loadImage(files[nextImgIndex].absoluteFilePath());
}
