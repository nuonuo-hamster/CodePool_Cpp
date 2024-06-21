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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *cmdLineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *commitButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *browseButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(686, 320);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 141, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 120, 63, 19));
        cmdLineEdit = new QLineEdit(Widget);
        cmdLineEdit->setObjectName("cmdLineEdit");
        cmdLineEdit->setGeometry(QRect(240, 120, 211, 31));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 230, 451, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commitButton = new QPushButton(layoutWidget);
        commitButton->setObjectName("commitButton");

        horizontalLayout->addWidget(commitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        browseButton = new QPushButton(layoutWidget);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">command</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "open:", nullptr));
        commitButton->setText(QCoreApplication::translate("Widget", "enter", nullptr));
        cancelButton->setText(QCoreApplication::translate("Widget", "cancel", nullptr));
        browseButton->setText(QCoreApplication::translate("Widget", "browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
