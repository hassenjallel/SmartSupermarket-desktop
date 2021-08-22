#include "accueil.h"
#include "ui_accueil.h"
#include"ajouterproduit.h"
#include"suprimer.h"
#include "modifier.h"
#include"affichage.h"
#include<QPixmap>
#include<QtWidgets>
#include"menu.h"
accueil::accueil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accueil)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
}

accueil::~accueil()
{
    delete ui;
}

void accueil::on_pushButton_clicked()
{

  ajouterproduit ajouter;
 ajouter.setModal(true);
 this->hide();
 ajouter.exec();

}

void accueil::on_pushButton_2_clicked()
{

    modifier mod;
   mod.setModal(true); this->hide();

   mod.exec();
}

void accueil::on_pushButton_3_clicked()
{

    suprimer supr;
   supr.setModal(true); this->hide();

   supr.exec();
}

void accueil::on_pushButton_4_clicked()
{

    affichage aff;
    aff.setModal(true); this->hide();

    aff.exec();
}



void accueil::on_pushButton_6_clicked()
{

    menu m;
    m.setModal(true);
    this->hide();
    m.exec();
}
