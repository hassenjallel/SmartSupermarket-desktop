#include "affichage.h"
#include "ui_affichage.h"
#include"produit.h"
#include"mainwindow.h"
#include<QPixmap>
#include<QtWidgets>
#include"accueil.h"
affichage::affichage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
    ui->af->setModel(tempproduit.afficher());

}

affichage::~affichage()
{
    delete ui;
}

/*void affichage::on_pushButton_clicked()
{
    ui->af->setModel(tempproduit.afficher());
}
*/

void affichage::on_pushButton_5_clicked()
{

    accueil a;
    a.setModal(true);
    this->hide();
    a.exec();
}
