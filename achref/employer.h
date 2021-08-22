#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class employer
{public:
    employer();
    employer(int,QString,QString,QString,int,QString,QString);
    QString get_nom();
    QString get_prenom();
    int get_id();
    QString get_date();
    int get_salaire();
    QString get_adresse();
    QString get_tache();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel * recherche(const int &id);
private:
    QString nom,prenom,date,adresse,tache;
    int id,salaire;
};

#endif // EMPLOYER_H
