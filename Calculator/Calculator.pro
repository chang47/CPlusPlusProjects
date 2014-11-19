#-------------------------------------------------
#
# Project created by QtCreator 2014-11-14T18:33:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mydialog.cpp \
    tree.cpp \
    newtree.cpp

HEADERS  += mainwindow.h \
    mydialog.h \
    tree.h \
    newtree.h

FORMS    += mainwindow.ui \
    mydialog.ui \
    tree.ui \
    newtree.ui

RESOURCES += \
    MyResource.qrc
