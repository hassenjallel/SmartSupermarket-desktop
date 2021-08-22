#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSystemTrayIcon>
#include "vehicule.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void Refresh();

    void on_tabvehicule_currentChanged(int index);

    void on_LOL_clicked();

    void on_start_here_clicked();

    void on_on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    vehicule tmpvehicule;
    QSystemTrayIcon * notifier;
};

#endif // MAINWINDOW_H
