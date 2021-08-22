#include "suprimer.h"
#include "produit.h"
#include "ui_suprimer.h"
#include<QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlError>
#include <QMessageBox>
#include "mainwindow.h"
#include "produit.cpp"
#include<QPixmap>
#include<QtWidgets>
#include"accueil.h"
suprimer::suprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suprimer)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
}

suprimer::~suprimer()
{
    delete ui;
}

void suprimer::on_pushButton_clicked()
{

    QString ref= ui->reff->text();

    bool test=tmpproduit.supprimer(ref);
    if(test)
   {
        QMessageBox::information(nullptr, QObject::tr("Supprimer un produit"),
                    QObject::tr("produit supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un produit"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }



void suprimer::on_pushButton_5_clicked()
{

    accueil a;
    a.setModal(true);
    this->hide();
    a.exec();
}
