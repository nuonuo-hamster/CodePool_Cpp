// #include "widget.h"

// #include <QApplication>
// #include <QHBoxLayout> // 新標頭檔
// #include <QPushButton> // 新標頭檔

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     Widget w;

//     QVBoxLayout* vLayout = new QVBoxLayout; // 垂直排版
//     w.setLayout(vLayout);

//     QHBoxLayout* hLayout1 = new QHBoxLayout; // 建立排版元件!
//     hLayout1->addWidget(new QPushButton("紅茶"));
//     hLayout1->addWidget(new QPushButton("綠茶"));
//     hLayout1->addWidget(new QPushButton("烏龍茶"));

//     QHBoxLayout* hLayout2 = new QHBoxLayout; // 水平排版二號
//     hLayout2->addWidget(new QPushButton("無糖"));
//     hLayout2->addWidget(new QPushButton("少糖"));
//     hLayout2->addWidget(new QPushButton("半糖"));

//     // 把水平排版放進垂直排版裡
//     vLayout->addLayout(hLayout1);
//     vLayout->addLayout(hLayout2);

//     w.show();
//     return a.exec();
// }
