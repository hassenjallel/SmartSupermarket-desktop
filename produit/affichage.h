#ifndef AFFICHAGE_H
#define AFFICHAGE_H
#include"produit.h"
#include <QDialog>

namespace Ui {
class affichage;
}

class affichage : public QDialog
{
    Q_OBJECT

public:
    explicit affichage(QWidget *parent = nullptr);
    ~affichage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::affichage *ui;
    produit tempproduit;
};

#endif // AFFICHAGE_H
