#ifndef PARKING_H
#define PARKING_H

#include <QDialog>
#include "vehicule.h"

namespace Ui {
class Parking;
}

class Parking : public QDialog
{
    Q_OBJECT

public:

    explicit Parking(QWidget *parent = nullptr);
    ~Parking();

private slots:
    void on_pushButton_clicked();
    void Refresh(int);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_ADD_clicked();

    void on_DELETE_clicked();

    void on_EDIT_clicked();

    void on_pushButton_6_clicked();

    void on_SHOW_clicked();

    void on_pushButton_7_clicked();
    int getChoix();
    void setChoix(int);
    int getChoixzone();
    void setChoixzone(int);
    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_lineEdit_9_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_9_textChanged(const QString &arg1);

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Parking *ui;
    vehicule tmpvehicule;
    int choixzone;
    int choix;
};

#endif // PARKING_H
