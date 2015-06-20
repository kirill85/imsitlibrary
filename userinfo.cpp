#include "userinfo.h"
#include "ui_userinfo.h"

UserInfo::UserInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfo)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    error = database.lastError();
    if(error.number() != QSqlError::NoError)
    {
        qDebug() << error.text() << endl;
    }
    database.setDatabaseName("imsit.sqlite");
    error = database.lastError();
    if(error.number() != QSqlError::NoError)
    {
        qDebug() << error.text() << endl;
    }
    if(!database.open())
    {
        qDebug() << error.text() << endl;
    }
    QSqlQuery query("select * from user");
    model = new QSqlTableModel(parent, database);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable("user");
    ui->userView->setModel(model);
}

UserInfo::~UserInfo()
{
    database.close();
    delete ui;
}

void UserInfo::on_userid_returnPressed()
{

}

void UserInfo::on_firstname_returnPressed()
{

}

void UserInfo::on_middlename_returnPressed()
{

}

void UserInfo::on_lastname_returnPressed()
{

}

void UserInfo::on_deanery_returnPressed()
{

}

void UserInfo::on_faculty_returnPressed()
{

}

void UserInfo::on_group_returnPressed()
{

}

void UserInfo::on_misc_returnPressed()
{

}
