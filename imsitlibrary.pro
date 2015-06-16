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
    schema/TSqlSchema.cpp

HEADERS  += mainwindow.h \
    schema/TSqlSchema.h

FORMS    += mainwindow.ui

DISTFILES += \
    schema/publishing.sql \
    schema/imsit.sql \
    schema/book.sql \
    schema/user.sql
