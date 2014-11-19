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
    for(int i = 0; i < 10; i++) {
        ui->listWidget->addItem(QString::number(i) + " item!");
    }
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
    QListWidgetItem *itm = ui->listWidget->currentItem();
    QMessageBox::information(this, "Title here", itm->text());
}
