#ifndef TSQLSCHEMA_H
#define TSQLSCHEMA_H

#include <QtCore/QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>

class TSqlSchema : public QObject
{
    Q_OBJECT
public:
    explicit TSqlSchema(QObject *parent = 0);

signals:

public slots:
};

#endif // TSQLSCHEMA_H
