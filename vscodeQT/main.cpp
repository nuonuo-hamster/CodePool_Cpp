#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    QLabel *infoLabel = new QLabel; //1
    QLabel *openLabel = new QLabel; //2.1
    QLineEdit *cmdLineEdit = new QLineEdit; //2.2
    QPushButton *commitButton = new QPushButton; //3.1
    QPushButton *cancelButton = new QPushButton; //3.2
    QPushButton *browseButton = new QPushButton; //3.3

    infoLabel->setText("input cmd:");
    openLabel->setText("open");
    // cmdLineEdit->setText("");
    commitButton->setText("commit");
    cancelButton->setText("cancel");
    browseButton->setText("cancel");
    
    QHBoxLayout *cmdLayout = new QHBoxLayout; //2
    cmdLayout->addWidget(openLabel);
    cmdLayout->addWidget(cmdLineEdit);
    
    QHBoxLayout *buttonLayout = new QHBoxLayout; //3
    buttonLayout->addWidget(commitButton);
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(browseButton);
    
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(infoLabel); //1
    mainLayout->addLayout(cmdLayout); //2
    mainLayout->addLayout(buttonLayout); //3
    
    QWidget w;
    w.setLayout(mainLayout);
    w.show();

    return app.exec();
}