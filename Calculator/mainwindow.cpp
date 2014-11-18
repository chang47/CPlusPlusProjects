#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    mDialog = new MyDialog(this);
    mDialog->show();

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title here", ui->lineEdit->text());

}
