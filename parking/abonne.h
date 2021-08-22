#ifndef ABONNE_H
#define ABONNE_H

#include<QString>

class abonne
{
private:
    QString nom,id,prenom;
public:
    abonne();
    abonne(QString,QString,QString);
    QString getnom();
    QString getprenom();
    QString getid();
    void setnom(QString);
    void setprenom(QString);
    void setid(QString);
    void Refresh();
    bool ajouter();
    bool supprimer();
};

#endif // ABONNE_H
