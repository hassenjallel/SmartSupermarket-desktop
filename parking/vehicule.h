#ifndef VEHICULE_H
#define VEHICULE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class vehicule
{
public:
    vehicule();
    vehicule(QString,QString,QString);
    QString get_matricule();
     QString get_couleur();
    QString get_marque();
    void Refresh();
    bool ajouter(int);
    QSqlQueryModel *afficher();
    bool supprimer(QString);

private:
    QString matricule,marque,couleur;

};

#endif // VEHICULE_H
