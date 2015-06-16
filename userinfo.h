#ifndef USERINFO_H
#define USERINFO_H

#include <QDialog>

namespace Ui {
class UserInfo;
}

class UserInfo : public QDialog
{
    Q_OBJECT

public:
    explicit UserInfo(QWidget *parent = 0);
    ~UserInfo();

private:
    Ui::UserInfo *ui;

public slots:
    void on_userid_returnPressed();
    void on_firstname_returnPressed();
    void on_middlename_returnPressed();
    void on_lastname_returnPressed();
    void on_deanery_returnPressed();
    void on_faculty_returnPressed();
    void on_group_returnPressed();
    void on_misc_returnPressed();
};

#endif // USERINFO_H
