#include "modifier.h"
#include "ui_modifier.h"
#include <QMessageBox>
#include<QPixmap>
#include<QtWidgets>
#include"accueil.h"
modifier::modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
}

modifier::~modifier()
{
    delete ui;
}

void modifier::on_pushButton_clicked()
{
     QString ref= ui->ref->text();                
     QString code= ui->code->text();
     int prix= ui->prix->text().toInt();
     QString type= ui->type->text();
     QDate date=ui->date->date();
     produit p(ref,code,type,prix,date);
  bool test=p.modifier();

  if (test){
       QMessageBox::information(nullptr, QObject::tr("modifier un produit"),
                   QObject::tr("produit modifié.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

   }
   else
       QMessageBox::critical(nullptr, QObject::tr("modifier un produit"),
                   QObject::tr("Erreur !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
   }


/*void modifier::on_pushButton_2_clicked()
{
    QSqlQueryModel md;
    QString ref=ui->ref->text();
    produit rech();
    rech.Rechercheragence()
}*/



void modifier::on_pushButton_3_clicked()
{

    accueil a;
    a.setModal(true);
    this->hide();
    a.exec();
}


