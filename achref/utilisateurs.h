#ifndef UTILISATEURS_H
#define UTILISATEURS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class utilisateurs
{
public:
    utilisateurs();
    utilisateurs(int,QString,QString,QString);
    int get_id();
    QString get_nom();
    QString get_prenom();
    QString get_mdp();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel * recherche(const int &id);
private:
     QString nom,prenom,mdp;
     int id;
};

#endif // UTILISATEURS_H
