#include "utilisateurs.h"
#include <QDebug>
utilisateurs::utilisateurs()
{
id=0;
nom="";
prenom="";
mdp="";
}
utilisateurs::utilisateurs(int id,QString nom,QString prenom,QString mdp)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->mdp=mdp;
}
QString utilisateurs::get_nom(){return  nom;}
QString utilisateurs::get_prenom(){return prenom;}
int utilisateurs::get_id(){return  id;}
QString utilisateurs::get_mdp(){return mdp;}

bool utilisateurs::ajouter()
{
QSqlQuery query;
QString res= QString::number(id);

query.prepare("INSERT INTO UTILISATEURS (IDUSER, NOMUSER, PRENOMUSER,MDPUSER) "
 "VALUES (:id, :nom, :prenom, :mdp)");
query.bindValue(":id", res);
query.bindValue(":nom", nom);
query.bindValue(":prenom",prenom);
query.bindValue(":mdp",mdp);
return    query.exec();
}

QSqlQueryModel * utilisateurs::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from UTILISATEURS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("Mdp"));
    return model;
}

bool utilisateurs::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("DELETE FROM UTILISATEURS WHERE IDUSER= :idd ");
query.bindValue(":idd", res);
return    query.exec();

}

QSqlQueryModel * utilisateurs::recherche(const int &id)
 {
     QString res= QString::number(id);
 QSqlQueryModel * model= new QSqlQueryModel();
 model->setQuery("select * from UTILISATEURS where (IDUSER LIKE '"+res+"%')");

 model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
 model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
 model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
 model->setHeaderData(6, Qt::Horizontal, QObject::tr("Mdp"));
     return model;
 }

