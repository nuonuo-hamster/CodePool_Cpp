#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImageReader>
#include <QImage>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_imageLabel = new QLabel(this);
    setCentralWidget(m_imageLabel);

    QString fileName = "D:\\MyCode\\CodePool_Cpp\\Qt\\objectTimer\\img\\1.jpg"; // 請換成你喜歡的圖片路徑
    QImageReader reader(fileName);   // 設定檔案路徑
    reader.setAutoTransform(true);   // 根據EXIF自動轉換方向
    const QImage newImage = reader.read(); // 讀取圖片
    Q_ASSERT(!newImage.isNull());    // 檢查圖片讀取是否成功 (失敗的話圖片為空)

    m_imageLabel->setPixmap(QPixmap::fromImage(newImage)); // 設定顯示圖片
}

MainWindow::~MainWindow()
{
    delete ui;
}
