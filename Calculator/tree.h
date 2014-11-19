#ifndef TREE_H
#define TREE_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

namespace Ui {
class tree;
}

class tree : public QDialog
{
    Q_OBJECT

    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString Description);

public:
    explicit tree(QWidget *parent = 0);
    ~tree();

private:
    Ui::tree *ui;
};

#endif // TREE_H
