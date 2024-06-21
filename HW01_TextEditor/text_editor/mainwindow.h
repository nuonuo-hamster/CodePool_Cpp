#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QLabel>

#define TIMEOUT 1*1000

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

    void keyPressEvent(QKeyEvent *k) override;
    void mousePressEvent(QMouseEvent *m) override;

    // 跟滑鼠拖拉有關的函數
    void dragEnterEvent(QDragEnterEvent* event) override;
    void dropEvent(QDropEvent* event) override;

    void timerEvent(QTimerEvent *event) override;

private slots:
    void newActionSlot();
    void openActionSlot();
    void saveActionSlot();
    void saveAsActionSlot();
    void closeActionSlot();

private:
    Ui::MainWindow *ui;
    QString filePath = "";
    int myTimerId;
    QLabel* m_statusLabel = new QLabel(this);
};
#endif // MAINWINDOW_H
