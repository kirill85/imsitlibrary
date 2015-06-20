#include "bookinfo.h"
#include "ui_bookinfo.h"

BookInfo::BookInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookInfo)
{
    ui->setupUi(this);
    setWindowTitle(tr("Информация о книге"));
}

BookInfo::~BookInfo()
{
    delete ui;
}


void BookInfo::on_code_returnPressed()
{

}

void BookInfo::on_author_returnPressed()
{

}

void BookInfo::on_genre_returnPressed()
{

}

void BookInfo::on_info_returnPressed()
{

}

void BookInfo::on_pages_returnPressed()
{

}

void BookInfo::on_publisher_returnPressed()
{

}

void BookInfo::on_publishing_returnPressed()
{

}

void BookInfo::on_storage_returnPressed()
{

}

void BookInfo::on_userid_returnPressed()
{

}

void BookInfo::on_year_returnPressed()
{

}
