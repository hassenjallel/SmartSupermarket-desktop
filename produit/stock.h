#ifndef STOCK_H
#define STOCK_H
#include <QDialog>

#include<QString>
#include<QSqlQueryModel>
#include<QMediaPlayer>
class stock
{
public:
    stock();
    stock (QString ,QString,int);




    QString get_id();
    QString get_nom();
    int get_quantite();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel* rechercher(QString nom);
       private:
    QString id,nom;
    int quantite;
    QMediaPlayer *player;

};







#endif // STOCK_H

