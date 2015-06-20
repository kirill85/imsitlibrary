#include "TSqlSchema.h"
#include <QDebug>
#include <QSqlRecord>
#include <QSqlField>
#include <QtSql>

TSqlSchema::TSqlSchema(QObject *parent) : QObject(parent)
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("imsit.sqlite");
    if(!database.open())
    {
        currentErrorCode = database.lastError();
        qDebug() << "Error code = " << currentErrorCode.text()
                 << endl;
    }
    QString genre = "select * from genre";
    QSqlQuery currentQuery(genre);
    if(!currentQuery.exec())
    {
        currentErrorCode = currentQuery.lastError();
        qDebug() << "Error code = " << currentErrorCode.text()
             << endl;
    }
    else
        while(currentQuery.next())
        {
            const QSqlRecord currentRecord = currentQuery.record();
            QSqlField genre = currentRecord.field("genre");
            qDebug() << genre.value().toString();
        }
}

TSqlSchema::~TSqlSchema()
{
    database.close();
}

QSqlQuery TSqlSchema::bookQuery() const
{
    QString textQuery = "select * from book";
}

