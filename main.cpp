#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    codec->setCodecForCStrings(codec);
    codec->setCodecForLocale(codec);
    codec->setCodecForTr(codec);
    MainWindow w;
    w.show();

    return a.exec();
}
