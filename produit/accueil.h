#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QDialog>
#include<QGraphicsScene>
#include<QMediaPlayer>

namespace Ui {
class accueil;
}

class accueil : public QDialog
{
    Q_OBJECT

public:
    explicit accueil(QWidget *parent = nullptr);
    ~accueil();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::accueil *ui;
    QMediaPlayer *player;
};

#endif // ACCUEIL_H
