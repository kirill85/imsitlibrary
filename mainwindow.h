#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "schema/TSqlSchema.h"
#include "publisher.h"
#include "bookinfo.h"
#include "userinfo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Publisher *publisher_info;
    BookInfo *book_info;
    UserInfo *user_info;
    TSqlSchema *schema;

public slots:
    void on_publishButton_clicked();
    void on_eLibraryButton_clicked();
    void on_bookInfoButton_clicked();
    void on_aboutReaderButton_clicked();
};

#endif // MAINWINDOW_H
