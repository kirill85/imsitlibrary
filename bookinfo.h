#ifndef BOOKINFO_H
#define BOOKINFO_H

#include <QDialog>

namespace Ui {
class BookInfo;
}

class BookInfo : public QDialog
{
    Q_OBJECT

public:
    explicit BookInfo(QWidget *parent = 0);
    ~BookInfo();

private:
    Ui::BookInfo *ui;

public slots:
    void on_code_returnPressed();
    void on_author_returnPressed();
    void on_genre_returnPressed();
    void on_info_returnPressed();
    void on_pages_returnPressed();
    void on_publisher_returnPressed();
    void on_publishing_returnPressed();
    void on_storage_returnPressed();
    void on_userid_returnPressed();
    void on_year_returnPressed();
};

#endif // BOOKINFO_H
