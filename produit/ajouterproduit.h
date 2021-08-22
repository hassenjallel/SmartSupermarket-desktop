#ifndef AJOUTERPRODUIT_H
#define AJOUTERPRODUIT_H
#include "produit.h"
#include <QDialog>
#include<QMediaPlayer>

namespace Ui {
class ajouterproduit;
}

class ajouterproduit : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterproduit(QWidget *parent = nullptr);
    ~ajouterproduit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ajouterproduit *ui;
    QMediaPlayer *player;

};

#endif // AJOUTERPRODUIT_H
