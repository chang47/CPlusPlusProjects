/********************************************************************************
** Form generated from reading UI file 'newtree.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTREE_H
#define UI_NEWTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTree
{
public:
    QPushButton *pushButton;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *NewTree)
    {
        if (NewTree->objectName().isEmpty())
            NewTree->setObjectName(QStringLiteral("NewTree"));
        NewTree->resize(400, 300);
        pushButton = new QPushButton(NewTree);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 230, 75, 23));
        treeWidget = new QTreeWidget(NewTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(70, 20, 256, 192));

        retranslateUi(NewTree);

        QMetaObject::connectSlotsByName(NewTree);
    } // setupUi

    void retranslateUi(QDialog *NewTree)
    {
        NewTree->setWindowTitle(QApplication::translate("NewTree", "Dialog", 0));
        pushButton->setText(QApplication::translate("NewTree", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class NewTree: public Ui_NewTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTREE_H
