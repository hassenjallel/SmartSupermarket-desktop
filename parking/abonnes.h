#ifndef ABONNES_H
#define ABONNES_H
#include "abonne.h"
#include <QDialog>

namespace Ui {
class Abonnes;
}

class Abonnes : public QDialog
{
    Q_OBJECT

public:
    explicit Abonnes(QWidget *parent = nullptr);
    ~Abonnes();
    void Refresh();
    void Refresh2();
    void Refresh3();

private slots:


    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_tableView_3_activated(const QModelIndex &index);

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_lineEdit_9_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_9_textChanged(const QString &arg1);

private:
    Ui::Abonnes *ui;
    abonne tmpabonne;
};

#endif // ABONNES_H
