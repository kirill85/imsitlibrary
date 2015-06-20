#ifndef TSQLSCHEMA_H
#define TSQLSCHEMA_H

#include <QtCore/QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

class TSqlSchema : public QObject
{
    Q_OBJECT
private:
    QSqlDatabase database;
    QSqlError currentErrorCode;
public:
    explicit TSqlSchema(QObject *parent = 0);
    virtual ~TSqlSchema();
    QSqlQuery bookQuery() const;
signals:

public slots:
};

#endif // TSQLSCHEMA_H
