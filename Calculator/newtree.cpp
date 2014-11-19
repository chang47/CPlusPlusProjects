#include "newtree.h"
#include "ui_newtree.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>


NewTree::NewTree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewTree)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    AddRoot("hello", "world");
}

NewTree::~NewTree()
{
    delete ui;
}

void NewTree::AddRoot(QString name, QString Description) {
   QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
   itm->setText(0, name);
   itm->setText(1, Description);
   ui->treeWidget->addTopLevelItem(itm);
   AddChild(itm,"one","hello");
   AddChild(itm,"two","hello");
}

void NewTree::AddChild(QTreeWidgetItem *parent, QString name, QString Description) {
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}
