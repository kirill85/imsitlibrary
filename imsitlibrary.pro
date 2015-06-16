#-------------------------------------------------
#
# Project created by QtCreator 2015-06-10T21:08:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = imsitlibrary
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../publisherform.cpp \
    publisher.cpp \
    bookinfo.cpp \
    userinfo.cpp

HEADERS  += mainwindow.h \
    ../publisherform.h \
    publisher.h \
    bookinfo.h \
    userinfo.h

FORMS    += mainwindow.ui \
    ../publisherform.ui \
    publisher.ui \
    bookinfo.ui \
    userinfo.ui
