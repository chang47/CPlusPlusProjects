#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString word1 = ui->lineEdit->text();
    int val1 = word1.toInt();
    int val2 = ui->lineEdit_2->text().toInt();
    int total  = val1 + val2;
    ui->label->setText("" + val1);
}
