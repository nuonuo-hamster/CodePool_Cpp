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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *subButton;
    QPushButton *rightButton;
    QPushButton *clearButton;
    QPushButton *sevenButton;
    QPushButton *fourButton;
    QPushButton *zeroButton;
    QPushButton *oneButton;
    QPushButton *threeButton;
    QPushButton *equalButton;
    QPushButton *leftButton;
    QPushButton *nightButton;
    QPushButton *divButton;
    QPushButton *eightButton;
    QPushButton *addButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *deletButton;
    QPushButton *twoButton;
    QPushButton *mulButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(548, 430);
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(10, 10, 181, 41));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 181, 230));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        subButton = new QPushButton(widget);
        subButton->setObjectName("subButton");
        subButton->setMinimumSize(QSize(40, 40));
        subButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(14);
        subButton->setFont(font);

        gridLayout->addWidget(subButton, 0, 2, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 90));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        nightButton = new QPushButton(widget);
        nightButton->setObjectName("nightButton");
        nightButton->setMinimumSize(QSize(40, 40));
        nightButton->setMaximumSize(QSize(40, 40));
        nightButton->setFont(font);

        gridLayout->addWidget(nightButton, 1, 2, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 2, 3, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        deletButton = new QPushButton(widget);
        deletButton->setObjectName("deletButton");
        deletButton->setMinimumSize(QSize(40, 40));
        deletButton->setMaximumSize(QSize(40, 40));
        deletButton->setFont(font);
        deletButton->setIconSize(QSize(35, 45));

        gridLayout->addWidget(deletButton, 0, 3, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName("twoButton");
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName("mulButton");
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));
        mulButton->setFont(font);

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        mainLineEdit->setText(QString());
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "c", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        nightButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        deletButton->setText(QString());
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
