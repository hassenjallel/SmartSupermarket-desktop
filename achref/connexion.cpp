#include "connexion.h"
#include <QMessageBox>

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("3a");
    db.setUserName("admin");//inserer nom de l'utilisateur
    db.setPassword("test");//inserer mot de passe de cet utilisateur
if (db.open())
    test=true;
QMessageBox::information(nullptr, QObject::tr("connexion etablit"),
                  QObject::tr("connexion.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
return  test;
}
void Connexion::fermerConnexion()
{db.close();}
