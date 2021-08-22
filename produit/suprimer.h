#ifndef SUPRIMER_H
#define SUPRIMER_H
#include"produit.h"
#include <QDialog>
#include<QMediaPlayer>
namespace Ui {
class suprimer;
}

class suprimer : public QDialog
{
    Q_OBJECT

public:
    explicit suprimer(QWidget *parent = nullptr);
    ~suprimer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::suprimer *ui;
    produit tmpproduit;
    QMediaPlayer *player;

};

#endif // SUPRIMER_H
