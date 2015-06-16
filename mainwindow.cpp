#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "publisher.h"
#include "bookinfo.h"
#include "userinfo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_publishButton_clicked()
{
    Publisher publisher_info = new Publisher(parent);
    publisher_info.show();
    this->hide();
}

void MainWindow::on_eLibraryButton_clicked()
{
    BookInfo book_info = new BookInfo(parent);
    book_info.show();

    UserInfo user_info = new UserInfo(parent);
    user_info.show();
    this->hide();
}

void MainWindow::on_bookInfoButton_clicked()
{
    BookInfo book_info = new BookInfo(parent);
    book_info.show();
    this->hide();
}

void MainWindow::on_aboutReaderButton_clicked()
{
    UserInfo user_info = new UserInfo(parent);
    user_info.show();
    this->hide();
}
