#include <QApplication>
#include <QtWidgets>
#include <QtCore>
#include <QDir>
#include <QString>
#include "mainwindow.h"
#include "mydialog.h"


void Write(QString Filename) {
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "could not open file for writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello world";
    mFile.flush();
    mFile.close();
}

void Read(QString Filename) {
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "could not open file for reading";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << mText;
    mFile.close();
}

void makeWindow() {
    QWidget *window = new QWidget;


    //Gui layouts
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("name:");
    QLineEdit *txtName = new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    window->setLayout(layout);
    window->show();
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();
    MyDialog m;
    m.show();
    //makeWindow();

    //playing with directories
    QDir mDir;
    QString mPath = "C:/test/sadasd";
    if(!mDir.exists(mPath)) {
        mDir.mkpath(mPath);
        qDebug() << "Success!";
    } else {
        qDebug() << "Already exists";
    }

    //read and write
    QString text = "C:/test/text.txt";
    Write(text);
    //Read(text);

    //read Resource files
    Read(":/MyFiles/Calculator.pro");

    return app.exec();
}

