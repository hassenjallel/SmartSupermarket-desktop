#include "caisse.h"
#include <QDebug>
caisse::caisse()
{
nom_caisse="";
disponibilite="";
}
caisse::caisse(QString nom_caisse,QString disponibilite)
{
  this->nom_caisse=nom_caisse;
  this->disponibilite=disponibilite;
}

QString caisse::get_nom_caisse(){return  nom_caisse;}
QString caisse::get_disponibilite(){return  disponibilite;}


bool caisse::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO CAISSE (NOM_CAISSE,DISPONIBILITE) "
                    "VALUES (:nom_caisse, :disponibilite)");

query.bindValue(":nom_caisse", nom_caisse);
query.bindValue(":disponibilite", disponibilite);

return    query.exec();
}



QSqlQueryModel *  caisse::afficher()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from CAISSE order by NOM_CAISSE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("caisse"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("disponibilite"));


    return model;
}


bool caisse::supprimer(QString nom_caisse)
{
QSqlQuery query;
query.prepare("Delete from CAISSE where NOM_CAISSE= :nom_caisse ");
query.bindValue(":nom_caisse", nom_caisse);
return    query.exec();
}


bool caisse::modifier()
{
QSqlQuery query;
query.prepare("UPDATE CAISSE SET NOM_CAISSE=:nom_caisse,DISPONIBILITE=:disponibilite where NOM_CAISSE = :nom_caisse");
query.bindValue(":nom_caisse", nom_caisse);
query.bindValue(":disponibilite",disponibilite);

return    query.exec();
}
