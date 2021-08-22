/*#ifndef STOCKK_H
#define STOCKK_H
#include<QString>
#include<QSqlQueryModel>
class stock
{
public:
    stock();
    stock (QString,QString,int);
    QString get_code();
    QString get_ref();
    QString get_type();
    int get_prix();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel *Rechercheragence(QString ID_Agence);

private:
    QString id,nom;
    int quantite;

};
#endif // STOCKK_H*/
