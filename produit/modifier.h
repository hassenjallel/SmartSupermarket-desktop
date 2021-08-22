#ifndef MODIFIER_H
#define MODIFIER_H
#include"produit.h"
#include <QDialog>
#include<QMediaPlayer>

namespace Ui {
class modifier;
}

class modifier : public QDialog
{
    Q_OBJECT

public:
    explicit modifier(QWidget *parent = nullptr);
    ~modifier();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::modifier *ui;
    QMediaPlayer *player;

};

#endif // MODIFIER_H
