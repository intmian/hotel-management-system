#-------------------------------------------------
#
# Project created by QtCreator 2018-12-05T11:13:16
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hotel-management-system
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
SOURCES += \
        main.cpp \
        mainwindow.cpp \
    password-verify.cpp \
    user_form.cpp \
    sql_tool.cpp \
    tip.cpp

HEADERS += \
        mainwindow.h \
    sql_tool.h \
    password-verify.h \
    user_form.h \
    tip.h

FORMS += \
        mainwindow.ui \
    user_form.ui \
    tip.ui

RESOURCES += \
    res.qrc
