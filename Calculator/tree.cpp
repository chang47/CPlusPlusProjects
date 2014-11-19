#include "tree.h"
#include "ui_tree.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

tree::tree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tree)
{
    ui->setupUi(this);
}

tree::~tree()
{
    delete ui;
}

void tree::AddRoot(QString name, QString Description) {
   // QTreeWidgetItem
}

void tree::AddChild(QTreeWidgetItem *parent, QString name, QString Description) {

}
