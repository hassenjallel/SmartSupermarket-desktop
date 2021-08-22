#ifndef FACTURE_H
#define FACTURE_H
#include <QDateTime>
#include <QTableWidget>
#include <QSqlQuery>
#include "fact.h"
#include "ui_fact.h"
#include <QSqlQueryModel>

class facture
{
public:
    facture();
   void Ajouter(QTableWidget *t,QString type);
   void Afficher(Ui::fact *t);
   void Modifier(QString total,QString id);
   void Supprimer(Ui::fact *t);
};

#endif // FACTURE_H
