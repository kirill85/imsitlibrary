#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}

void MainWindow::on_eLibraryButton_clicked()
{

}

void MainWindow::on_bookInfoButton_clicked()
{

}

void MainWindow::on_aboutReaderButton_clicked()
{

}
