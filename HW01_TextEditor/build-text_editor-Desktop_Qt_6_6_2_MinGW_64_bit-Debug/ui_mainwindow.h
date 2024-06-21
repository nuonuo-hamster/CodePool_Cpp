/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *closeAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menufile_F;
    QMenu *menucompile;
    QMenu *menucontruct_B;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(686, 485);
        newAction = new QAction(MainWindow);
        newAction->setObjectName("newAction");
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName("saveAsAction");
        closeAction = new QAction(MainWindow);
        closeAction->setObjectName("closeAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font;
        font.setPointSize(12);
        textEdit->setFont(font);

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 686, 25));
        menufile_F = new QMenu(menubar);
        menufile_F->setObjectName("menufile_F");
        menucompile = new QMenu(menubar);
        menucompile->setObjectName("menucompile");
        menucontruct_B = new QMenu(menubar);
        menucontruct_B->setObjectName("menucontruct_B");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile_F->menuAction());
        menubar->addAction(menucompile->menuAction());
        menubar->addAction(menucontruct_B->menuAction());
        menufile_F->addAction(newAction);
        menufile_F->addAction(openAction);
        menufile_F->addAction(saveAction);
        menufile_F->addAction(saveAsAction);
        menufile_F->addAction(closeAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\346\226\260\346\252\224(N)", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237\350\210\212\346\252\224(O)", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(S)", nullptr));
        saveAsAction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\260\346\252\224(K)", nullptr));
        closeAction->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(Q)", nullptr));
        menufile_F->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210(F)", nullptr));
        menucompile->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\255\257(E)", nullptr));
        menucontruct_B->setTitle(QCoreApplication::translate("MainWindow", "\345\273\272\346\247\213(B)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
