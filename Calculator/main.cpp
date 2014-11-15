#include <QApplication>
#include <QtWidgets>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("name:");
    QLineEdit *txtName = new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    window->setLayout(layout);
    //window->show();
    return app.exec();
}

