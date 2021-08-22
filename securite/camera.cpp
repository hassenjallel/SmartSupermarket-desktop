#include "camera.h"
#include "connection.h"
#include <QDebug>

camera::camera()
{
    refcam=0;
    empcam="";
    }
    camera::camera(int refcam,QString empcam)
    {
      this->refcam=refcam;
      this->empcam=empcam;
    }
    int camera::get_refcam(){return  refcam;}
    QString camera::get_empcam(){return  empcam;}

    /********************ajout*************************/
    bool camera::ajouter()
    {
    QSqlQuery query;
    query.prepare("INSERT INTO CAMERA (REFCAM, EMPCAM ) VALUES (:refcam, :empcam)");
    query.bindValue(":refcam", refcam);
    query.bindValue(":empcam", empcam);


    return    query.exec();
    }
    /********************afficher*********************/
    QSqlQueryModel * camera::afficher()
    {QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CAMERA ORDER BY REFCAM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFCAM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("EMPCAM"));
        return model;
    }
    /*********************supprimer*******************/

    bool camera::supprimer(int refcam){
        QSqlQuery query;
        query.prepare("Delete from CAMERA where refcam = :refcam ");
        query.bindValue(":refcam", refcam);
        return    query.exec();
    }
    /*********************modifier*******************/
    bool camera::modifier()
    {
        QSqlQuery query;
        query.prepare("UPDATE CAMERA set refcam=:refcam,empcam=:empcam where (refcam=:refcam)");
        query.bindValue(":refcam", refcam);
        query.bindValue(":empcam", empcam);
return query.exec();

    }
    /**************trie**************/

    QSqlQueryModel* camera::Affichercam_trie(int index)
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        if(index == 0)
        {
            model->setQuery("select *FROM CAMERA ORDER BY REFCAM ASC");
        }
        else
        {
            model->setQuery("select *FROM CAMERA ORDER BY EMPCAM ASC ");
        }

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFCAM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("EMPCAM "));

        return model;
    }
    /********************existe*********************/

    bool camera::camExsite(int refcam)
    {
        int i=0;
        QSqlQuery query;
        query.prepare("SELECT * FROM CAMERA WHERE refcam = ? ");
        query.addBindValue(refcam);
        if(query.exec())
        {
            while(query.next())
            {
                i++;
            }
        }
        if(i != 0)
            return true;
        else
            return false;
    }
    /********************rechercher*********************/

    QSqlQueryModel* camera::Recherchercam(int refcam)
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("select *FROM CAMERA WHERE refcam= ? ");
        query.addBindValue(refcam);
        query.exec();
        model->setQuery(query);

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFCAM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("EMPCAM "));

        return model;
    }


