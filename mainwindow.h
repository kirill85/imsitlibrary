#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void on_publishButton_clicked();
    void on_eLibraryButton_clicked();
    void on_bookInfoButton_clicked();
    void on_aboutReaderButton_clicked();
};

#endif // MAINWINDOW_H
