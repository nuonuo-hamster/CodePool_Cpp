/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QPushButton *sendpush;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(400, 300);
        label = new QLabel(Chat);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 121, 61));
        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 110, 291, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        lineEdit->setFont(font);
        clearButton = new QPushButton(Chat);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(70, 200, 93, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        clearButton->setFont(font1);
        sendpush = new QPushButton(Chat);
        sendpush->setObjectName("sendpush");
        sendpush->setGeometry(QRect(240, 200, 93, 41));
        sendpush->setFont(font1);

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        label->setText(QCoreApplication::translate("Chat", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">input text:</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        clearButton->setText(QCoreApplication::translate("Chat", "clear", nullptr));
        sendpush->setText(QCoreApplication::translate("Chat", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
