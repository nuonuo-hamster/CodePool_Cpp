#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void loadImage(const QString &fileName);
    // 增加這兩個跟滑鼠拖拉有關的函數
    void dragEnterEvent(QDragEnterEvent* event) override;
    void dropEvent(QDropEvent* event) override;

    void openFile();
    void exitApp();

    void prevImage();
    void nextImage();

private:
    Ui::MainWindow *ui;
    QLabel* m_imageLabel = nullptr;

    QDir m_currentDir;          // 表示當前圖片所在的目錄
    QString m_currentImageName; // 當前圖片的路徑
};
#endif // MAINWINDOW_H
