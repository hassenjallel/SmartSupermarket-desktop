#ifndef PRODUIT_H
#define PRODUIT_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include<QMediaPlayer>

class produit
{
public:
    produit();
    produit (QString,QString,QString,int,QDate);
    QString get_code();
    QString get_ref();
    QString get_type();
    QDate get_date();

    int get_prix();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel* rechercher(QString nom);

private:
    QString code,ref,type;
    int prix;
    QDate date;
    QMediaPlayer *player;

};
#endif // PRODUIT_H
