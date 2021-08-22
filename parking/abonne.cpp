#include "abonne.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
abonne::abonne()
{

}
abonne::abonne(QString a,QString b,QString c)
{
    id=a;
    nom=b;
    prenom=c;
}
void abonne::setid(QString a)
{id=a;}
void abonne::setnom(QString a)
{nom=a;}
void abonne::setprenom(QString a)
{prenom=a;}
QString abonne::getid()
{return id;}
QString abonne::getnom()
{return nom;}
QString abonne::getprenom()
{return prenom;}
bool abonne::ajouter()
{
    QSqlQuery query;
    QString type;
    query.prepare("INSERT INTO  Abonne(ID,NOM,PRENOM) VALUES (:id,:nom,:prenom)");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    return query.exec();

}

bool abonne::supprimer()
{
QSqlQuery query;

    query.prepare("Delete from abonne where id= :id");
    query.bindValue(":id",id);
return    query.exec();
}
