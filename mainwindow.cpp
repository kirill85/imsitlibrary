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
    schema = new TSqlSchema(parent);
    publisher_info = new Publisher(parent);
    book_info = new BookInfo(parent);
    user_info = new UserInfo(parent);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_publishButton_clicked()
{
    connect(publisher_info, SIGNAL(accepted()), this, SLOT(show()));
    connect(publisher_info, SIGNAL(rejected()), this, SLOT(show()));
    publisher_info->show();
    hide();
}

void MainWindow::on_eLibraryButton_clicked()
{
    connect(book_info, SIGNAL(accepted()), this, SLOT(show()));
    connect(user_info, SIGNAL(rejected()), this, SLOT(show()));
    book_info->show();
    user_info->show();
    this->hide();
}

void MainWindow::on_bookInfoButton_clicked()
{
    connect(book_info, SIGNAL(accepted()), this, SLOT(show()));
    connect(book_info, SIGNAL(rejected()), this, SLOT(show()));
    book_info->show();
    this->hide();
}

void MainWindow::on_aboutReaderButton_clicked()
{
    connect(user_info, SIGNAL(accepted()), this, SLOT(show()));
    connect(user_info, SIGNAL(rejected()), this, SLOT(show()));
    user_info->show();
    this->hide();
}
