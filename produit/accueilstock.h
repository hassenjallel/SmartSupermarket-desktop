#ifndef ACCUEILSTOCK_H
#define ACCUEILSTOCK_H
#include"stock.h"
#include <QDialog>
#include<QMediaPlayer>
namespace Ui {
class accueilstock;
}

class accueilstock : public QDialog
{
    Q_OBJECT

public:
    explicit accueilstock(QWidget *parent = nullptr);
    ~accueilstock();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::accueilstock *ui;
    stock tempstock;
    QMediaPlayer *player;

};

#endif // ACCUEILSTOCK_H
