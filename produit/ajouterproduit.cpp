#include "ajouterproduit.h"
#include "ui_ajouterproduit.h"
#include "produit.h"
#include <QMessageBox>
#include<QPixmap>
#include<QtWidgets>
#include"notification.h"
#include"accueil.h"
ajouterproduit::ajouterproduit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterproduit)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
}

ajouterproduit::~ajouterproduit()
{
    delete ui;
}


void ajouterproduit::on_pushButton_clicked()
{
    //notification n;
    int prix = ui->prix->text().toInt();
    QString code= ui->code->text();
    QString ref= ui->ref->text();
    QString type= ui->type->text();
QDate date=ui->date->date();
  produit p(ref,code,type,prix,date);

  bool test=p.ajouter();
  if(test){
      //n.notification_ajout(ref);
      /////////////////////
      QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
      notifyIcon->show();
      notifyIcon->setIcon(QIcon("icone.png"));

      notifyIcon->showMessage("Ajout Stock","Un nouveau Stock de  N° ID a été ajoutée",QSystemTrayIcon::Information,15000);
///////////////////////
QMessageBox::information(nullptr, QObject::tr("Ajouter un produit"),
                  QObject::tr("produit ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else{
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un produit"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}
}


void ajouterproduit::on_pushButton_5_clicked()
{

    accueil a;
    a.setModal(true);
    this->hide();
    a.exec();
}
