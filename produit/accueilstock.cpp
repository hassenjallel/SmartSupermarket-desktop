#include "accueilstock.h"
#include "ui_accueilstock.h"
//#include"ajouterstock.h"
#include"stock.h"
#include<QMessageBox>
#include<QSqlQuery>
#include<QDebug>
#include<QtWidgets>
#include<QPixmap>
#include "notification.h"
#include"menu.h"
accueilstock::accueilstock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accueilstock)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    ui->label_2->setMask((new QPixmap("annim.gif"))->mask());
    ui->label_3->setMask((new QPixmap("annim.gif"))->mask());
    ui->label_4->setMask((new QPixmap("annim.gif"))->mask());
    ui->label_5->setMask((new QPixmap("annim.gif"))->mask());



    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    ui->label_2->setMovie(movie);
    ui->label_3->setMovie(movie);
    ui->label_4->setMovie(movie);
    ui->label_5->setMovie(movie);

    movie->start();
    ui->af->setModel(tempstock.afficher());

}

accueilstock::~accueilstock()
{
    delete ui;
}
 /**************************ajouter*****************************/
bool stock::ajouter()
{
QSqlQuery query;
query.prepare("INSERT INTO STOCK (id, nom, quantiter) VALUES (:id, :nom, :quantite)");
query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":quantite", quantite);



return    query.exec();
}
 /*********************affichage************************/
QSqlQueryModel * stock::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from STOCK");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("QUANTITE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));

    return model;
}
 /**************************supprimer***************************************/
bool stock::supprimer(QString id){
QSqlQuery query;
query.prepare("Delete from STOCK where id = :id ");
query.bindValue(":id", id);
return    query.exec();
}
/***************************modifier***********************************************/
bool stock:: modifier()
{

    QSqlQuery query;
    query.prepare("UPDATE STOCK set nom=:nom,quantiter=:quantite where (id=:id)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":quantite", quantite);

return query.exec();

}
/*******************************rechercher***************************************************/
QSqlQueryModel* stock::rechercher(QString id)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

        QString str="select * from STOCK where id = '"+id+"'";

        model->setQuery(str);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("QUANTITE "));



        return model;
    }
/*************************************************************************************************/
void accueilstock::on_pushButton_clicked()
{
    QString id = ui->id->text();
    QString nom= ui->nom->text();
    int quantite= ui->quantite->text().toInt();
//notification n;
 stock st (id,nom,quantite);

  bool test=st.ajouter();

  if(test){    ui->af->setModel(tempstock.afficher());
      //n.notification_ajout(id);

QMessageBox::information(nullptr, QObject::tr("stock un produit"),
                  QObject::tr("stock ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else{
      QMessageBox::critical(nullptr, QObject::tr("stock un produit"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}
}
/*********************************************/
void accueilstock::on_pushButton_2_clicked()
{
    QString ref= ui->idsup->text();

    bool test=tempstock.supprimer(ref);
    if(test)
   {    ui->af->setModel(tempstock.afficher());

        QMessageBox::information(nullptr, QObject::tr("Supprimer un produit"),
                    QObject::tr("produit supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un produit"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
/************************************************************/
void accueilstock::on_pushButton_3_clicked()
{

    QString id= ui->idmod->text();
    QString nom= ui->nom_mod->text();
    int quantite= ui->quantite_mod->text().toInt();

    stock p(id,nom,quantite);
 bool test=p.modifier();

 if (test){ui->af->setModel(tempstock.afficher());
      QMessageBox::information(nullptr, QObject::tr("modifier un produit"),
                  QObject::tr("produit modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

  }
  else
      QMessageBox::critical(nullptr, QObject::tr("modifier un produit"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void accueilstock::on_pushButton_4_clicked()
{
    QString ref=ui->idmod->text();
            ui->idmod->clear();
            QSqlQueryModel *model;
            stock *a=new stock();

                  QString id;
                  QString nom ;

                  int qnt;

                    QSqlQuery  *q  = new QSqlQuery();
                    q->prepare("SELECT* FROM STOCK WHERE ID=?");
                    q->addBindValue(ref);
                    if(q->exec())
                    {
                        while(q->next())
                        {

                            ref=q->value(0).toString();
                             nom=q->value(1).toString();
                            qnt=q->value(2).toString().toInt();


                        }
                    }

                    ui->idmod->setText(ref);
                    ui->nom_mod->setText(nom);
                    ui->quantite_mod->setText(QString::number(qnt));

}

void accueilstock::on_pushButton_5_clicked()
{
   /* player->setMedia(QUrl::fromLocalFile("C:/Users/ASUS/Desktop/integra/ComputerMouse.aif"));
    player->play();
    qDebug()<<player->errorString();*/
    menu m;
    m.setModal(true);
    this->hide();
    m.exec();
}
