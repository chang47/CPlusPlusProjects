#ifndef NEWTREE_H
#define NEWTREE_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

namespace Ui {
class NewTree;
}

class NewTree : public QDialog
{
    Q_OBJECT
    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString Description);

public:
    explicit NewTree(QWidget *parent = 0);
    ~NewTree();

private:
    Ui::NewTree *ui;
};

#endif // NEWTREE_H
