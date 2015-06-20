#include "publisher.h"
#include "ui_publisher.h"
#include <QDebug>
#include <QSqlQuery>

Publisher::Publisher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Publisher)
{
    ui->setupUi(this);
    setWindowTitle(tr("Сведения об издательствах"));
    database = QSqlDatabase::addDatabase("QSQLITE");
    if(database.lastError().number() != QSqlError::NoError)
    {
        error = database.lastError();
        qDebug() << error.text() << endl;
    }
    database.setDatabaseName("imsit.sqlite");
    if(database.lastError().number() != QSqlError::NoError)
    {
        error = database.lastError();
        qDebug() << error.text() << endl;
    }
    if(!database.open())
    {
        error = database.lastError();
        qDebug() << error.text() << endl;
    }
    model = new QSqlQueryModel(parent);
    QSqlQuery query("select * from publishing");
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Название"));
    model->setHeaderData(2, Qt::Horizontal, tr("Адрес"));
    model->setHeaderData(3, Qt::Horizontal, tr("Телефон"));
    model->setHeaderData(4, Qt::Horizontal, tr("Факс"));
    ui->publisherView->setModel(model);
    ui->publisherView->show();
}

Publisher::~Publisher()
{
    database.close();
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
