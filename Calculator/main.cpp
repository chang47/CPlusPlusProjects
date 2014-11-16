#include <QApplication>
#include <QtWidgets>
#include <QtCore>
#include <QDir>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
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

    //playing with directories
    QDir mDir;
    QString mPath = "C:/test/sadasd";
    if(!mDir.exists(mPath)) {
        mDir.mkpath(mPath);
        qDebug() << "Success!";
    } else {
        qDebug() << "Already exists";
    }

    return app.exec();
}

