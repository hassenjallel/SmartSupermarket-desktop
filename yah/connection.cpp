#include "connection.h"
#include <QDebug>

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet_yah");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("asus");//inserer mot de passe de cet utilisateur

if (db.open())
{
 test=true;
 qDebug()<<"Done";
}



    return  test;
}
