#ifndef PUBLISHER_H
#define PUBLISHER_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDialog>

namespace Ui {
class Publisher;
}

class Publisher : public QDialog
{
    Q_OBJECT
private:
    QSqlDatabase database;
    QSqlError error;
    QSqlQueryModel *model;
public:
    explicit Publisher(QWidget *parent = 0);
    ~Publisher();

private:
    Ui::Publisher *ui;

public slots:
    void on_code_returnPressed();
    void on_name_returnPressed();
    void on_address_returnPressed();
    void on_phone_returnPressed();
    void on_fax_returnPressed();
};

#endif // PUBLISHER_H
