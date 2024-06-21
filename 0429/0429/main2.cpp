// #include "widget.h"

// #include <QApplication>
// #include <QHBoxLayout> // 新標頭檔
// #include <QPushButton> // 新標頭檔
// #include <cstdlib>

// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);
//     Widget w;

//     QHBoxLayout* layout = new QHBoxLayout;
//     w.setLayout(layout);

//     QPushButton* button = new QPushButton("產生亂數");
//     layout->addWidget(button);
//     QObject::connect(button, &QPushButton::clicked, [=]
//                      {
//                          button->setText(QString::number(rand() % 100));
//                      });

//     w.show();
//     return a.exec();
// }
