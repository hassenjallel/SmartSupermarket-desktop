#ifndef CAMERA_H
#define CAMERA_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class camera
{
public:
    camera();
    camera(int,QString);
    int get_refcam();
    QString get_empcam();
    bool ajouter();
    QSqlQueryModel * afficher ();
    QSqlQueryModel *rechercher(int refcam);
    QSqlQueryModel* Affichercam_trie(int index);
    QSqlQueryModel* Recherchercam(int refcam);
    bool camExsite(int);






    bool supprimer(int);
    bool modifier();
private:
    int refcam;
    QString empcam;

};

#endif // CAMERA_H
