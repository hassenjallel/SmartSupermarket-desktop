#include "connexion.h"

connexion::connexion()
{}

bool connexion::ouvrirconnexion()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("gestionproduit");
    db.setUserName("jalleli");
    db.setPassword("esprit18");
    if(db.open()){
        test=true;
        return test;
}

}
void connexion::fermerconnexion(){
    db.close();
}

