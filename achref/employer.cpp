#include "employer.h"
#include <QDebug>
employer::employer()
{
id=0;
nom="";
prenom="";
date="";
salaire=0;
adresse="";
tache="";
}
employer::employer(int id,QString nom,QString prenom,QString date,int salaire,QString adresse,QString tache)
{
  this->id=id;
  this->nom=nom;
  this->prenom=prenom;
  this->date=date;
  this->salaire=salaire;
  this->adresse=adresse;
  this->tache=tache;
}
QString employer::get_nom(){return  nom;}
QString employer::get_prenom(){return prenom;}
int employer::get_id(){return  id;}
int employer::get_salaire(){return salaire;}
QString employer::get_date(){return date;}
QString employer::get_adresse(){return adresse;}
QString employer::get_tache(){return tache;}

bool employer::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);
QString res1= QString::number(salaire);

query.prepare("INSERT INTO PERSONNELS ( ID, NOM, PRENOM, DATE_, SALAIRE, ADRESSE, TACHE)"
 "VALUES (:id, :nom, :prenom, :date, :salaire, :adresse, :tache)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom",prenom);
query.bindValue(":date",date);
query.bindValue(":salaire",res1);
query.bindValue(":adresse",adresse);
query.bindValue(":tache",tache);
return    query.exec();
}

QSqlQueryModel * employer::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PERSONNELS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Adresse"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("Tache"));
    return model;
}

bool employer::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete FROM PERSONNELS where ID = :idd ");
query.bindValue(":idd", res);
return    query.exec();
}

QSqlQueryModel * employer::recherche(const int &id)
 {
     QString res= QString::number(id);
 QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from PERSONNELS where (ID LIKE '"+res+"%')");
 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
 model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
 model->setHeaderData(5, Qt::Horizontal, QObject::tr("Adresse"));
 model->setHeaderData(6, Qt::Horizontal, QObject::tr("Tache"));
     return model;
 }
