/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *ipLineEdit;
    QPushButton *connectButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QLabel *label_3;
    QPushButton *cancelButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(496, 402);
        ipLineEdit = new QLineEdit(Widget);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setGeometry(QRect(140, 100, 221, 51));
        connectButton = new QPushButton(Widget);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(90, 290, 111, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        connectButton->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 121, 71));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 121, 71));
        portLineEdit = new QLineEdit(Widget);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setGeometry(QRect(140, 170, 111, 41));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 150, 121, 71));
        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(260, 290, 111, 51));
        cancelButton->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "connect", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Client Addr</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">ip:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">port:</span></p></body></html>", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
