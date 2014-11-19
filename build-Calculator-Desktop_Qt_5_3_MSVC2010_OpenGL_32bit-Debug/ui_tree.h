/********************************************************************************
** Form generated from reading UI file 'tree.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREE_H
#define UI_TREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_tree
{
public:

    void setupUi(QDialog *tree)
    {
        if (tree->objectName().isEmpty())
            tree->setObjectName(QStringLiteral("tree"));
        tree->resize(400, 300);

        retranslateUi(tree);

        QMetaObject::connectSlotsByName(tree);
    } // setupUi

    void retranslateUi(QDialog *tree)
    {
        tree->setWindowTitle(QApplication::translate("tree", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class tree: public Ui_tree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREE_H
