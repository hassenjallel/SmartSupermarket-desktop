#ifndef CAISSE_H
#define CAISSE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class caisse
{
public:
    caisse();
    caisse(QString,QString);
    QString get_nom_caisse();
    QString get_disponibilite();
    bool ajouter();
    bool modifier();
    QSqlQueryModel * afficher();
    bool supprimer(QString nom_caisse);

private:
    QString nom_caisse,disponibilite;

};

#endif // CAISSE_H
