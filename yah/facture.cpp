#include "facture.h"
#include <QDebug>
#include "fact.h"
#include "ui_fact.h"

facture::facture()
{

}

void facture::Ajouter(QTableWidget *t,QString type)
{
    int m=0;
    QDateTime moment=QDateTime::currentDateTime();
    QString Sys=moment.toString();


    QString nom="";
     QString prixProd="";
      QString nombre="";
      double total=0;
        for (int i=0; i<t->rowCount(); i++)
        {
           nom=t->item(i, 0)->text()+":";
           prixProd=t->item(i, 1)->text()+":";
           nombre=t->item(i, 2)->text()+":";
           total+=t->item(i, 1)->text().toFloat()*t->item(i, 2)->text().toInt();
        }
         QSqlQuery query,x;
          x.exec("select * from facture ");
          while (x.next())
          {
                m++;
                qDebug()<<"id :"<<m;
          }
           qDebug()<<"nom :"<<nom;
           qDebug()<<"prixProduit :"<<prixProd;
           qDebug()<<"NombreProduit :"<<nombre;
           qDebug()<<"total :"<<total;
           qDebug()<<"dateP :"<<Sys;
           qDebug()<<"type :"<<type;
           query.prepare("Insert INTO facture (ID,NOM,PRIXPRODUIT,NOMBREPRODUIT,DATEP,TYPE,total) VALUES(?,?,?,?,?,?,?)");
             query.addBindValue(m);
             query.addBindValue(nom);
             query.addBindValue(prixProd);
             query.addBindValue(nombre);
             query.addBindValue(Sys);
             query.addBindValue(type);
             query.addBindValue(total);
             qDebug()<<query.exec();
}

void facture::Afficher(Ui::fact *t)
{int j=0;
    int i=1;
    QSqlQuery qry;
    qry.prepare("select * from facture where id="+t->comboBox_idFactCon->currentText()+"");
    qry.exec();
    while (qry.next())
    {
        j++;
    }
    qry.prepare("select * from facture where id="+t->comboBox_idFactCon->currentText()+"");
    qry.exec();
    while (qry.next())
    {
        t->tableWidget_ProduitC->setRowCount(j);
        t->tableWidget_ProduitC->setColumnCount(3);
        t->tableWidget_ProduitC->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        t->tableWidget_ProduitC->setHorizontalHeaderLabels(QString("Produits;     PRIX     ;  NOMBRES ").split(";"));

                   t->tableWidget_ProduitC->setItem(i-1,0,new QTableWidgetItem(qry.value(1).toString()));
                   t->tableWidget_ProduitC->setItem(i-1,1,new QTableWidgetItem(qry.value(2).toString()));
                   t->tableWidget_ProduitC->setItem(i-1,2,new QTableWidgetItem(qry.value(3).toString()));


                       t->lineEdit_totaleC->setText(qry.value(6).toString());
                       t->lineEdit_DateC->setText(qry.value(4).toString());
                       t->lineEdit_typeC->setText(qry.value(5).toString());
                       (i)++;
       }

}




void facture::Modifier(QString total,QString id)
{
    QSqlQuery query;
      query.prepare("update facture set total=:total where id=:id");
      query.bindValue(":total",total);
      query.bindValue(":id",id);
      query.exec();
}

void facture::Supprimer(Ui::fact *t)
{ QSqlQuery query;
    query.prepare("Delete from facture where id="+t->comboBox_IDFactureS->currentText()+"");
    qDebug()<<"Produit supprimer ";
    query.exec();

}
