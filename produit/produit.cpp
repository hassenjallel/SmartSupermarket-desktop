#include "produit.h"
#include<QVariant>
#include <QString>
#include <QSqlQueryModel>
#include "connexion.h"
#include <QDebug>

produit::produit()
{
prix=0;
ref="";
code="";
type="";

}
produit::produit( QString ref,QString code,QString type,int prix,QDate date)
{
  this->prix=prix;
  this->type=type;
  this->code=code;
  this->ref=ref;
    this->date=date;
}
QString produit::get_type(){return  type;}
QString produit::get_ref(){return ref;}
QString produit::get_code(){return code;}
QDate produit::get_date(){return date;}

int produit::get_prix(){return  prix;}

bool produit::ajouter()
{
QSqlQuery query;
QString res= QString::number(prix);
query.prepare("INSERT INTO PRODUIT (ref, code, type,prix,datte) VALUES (:ref, :code, :type, :prix,:datte)");
query.bindValue(":ref", ref);
query.bindValue(":code", code);
query.bindValue(":type", type);
query.bindValue(":prix", res);
query.bindValue(":datte", date);




return    query.exec();
}
bool produit::supprimer(QString ref){
QSqlQuery query;
query.prepare("Delete from PRODUIT where ref = :ref ");
query.bindValue(":ref", ref);
return    query.exec();
}
bool produit:: modifier()
{
    //connexion *c=new connexion();
    //c->ouvrirconnexion();
    QSqlQuery query;
    query.prepare("UPDATE PRODUIT set code=:code,type=:type,prix=:prix,datte=:datte where (ref=:ref)");
    query.bindValue(":ref", ref);
    query.bindValue(":code", code);
    query.bindValue(":type", type);
    query.bindValue(":prix", prix);
    query.bindValue(":datte", date);

return query.exec();

}

QSqlQueryModel * produit::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PRODUIT ORDER BY REF");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("CODE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATTE"));

    return model;
}
QSqlQueryModel* produit::rechercher(QString nom)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

        QString str="select * from PRODUIT where nom = '"+nom+"'";

        model->setQuery(str);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("CODE "));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATTE"));



        return model;
    }

