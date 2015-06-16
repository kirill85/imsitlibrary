#include "publisher.h"
#include "ui_publisher.h"

Publisher::Publisher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Publisher)
{
    ui->setupUi(this);
}

Publisher::~Publisher()
{
    delete ui;
}

void Publisher::on_code_returnPressed()
{

}

void Publisher::on_name_returnPressed()
{

}

void Publisher::on_address_returnPressed()
{

}

void Publisher::on_phone_returnPressed()
{

}

void Publisher::on_fax_returnPressed()
{

}
