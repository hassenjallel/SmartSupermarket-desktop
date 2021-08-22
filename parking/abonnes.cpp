#include "abonnes.h"
#include "ui_abonnes.h"
#include <QMediaPlayer>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlQueryModel>
#include "abonne.h"
#include<QPixmap>
#include<QtWidgets>

Abonnes::Abonnes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Abonnes)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_8->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label_8->setMovie(movie);
    movie->start();
}

Abonnes::~Abonnes()
{
    delete ui;
}
void Abonnes::Refresh2()
{
    QSqlQueryModel *model= new QSqlQueryModel();
         QSqlQuery   *query= new QSqlQuery();
                  query->prepare("SELECT * FROM ABONNE");
             query->exec();
                 model->setQuery(*query);
             ui->tableView_2->setModel(model);
}
void Abonnes::Refresh3()
{
    QSqlQueryModel *model= new QSqlQueryModel();
         QSqlQuery   *query= new QSqlQuery();
                  query->prepare("SELECT * FROM ABONNE");
             query->exec();
                 model->setQuery(*query);
             ui->tableView_3->setModel(model);
}
void Abonnes::Refresh()
{
    QSqlQueryModel *model= new QSqlQueryModel();
         QSqlQuery   *query= new QSqlQuery();
                  query->prepare("SELECT * FROM ABONNE");
             query->exec();
                 model->setQuery(*query);
             ui->tableView->setModel(model);
}


void Abonnes::on_pushButton_clicked()
{
    QString id = ui->lineEdit->text();
    QString nom = ui->lineEdit_2->text();
    QString prenom = ui->lineEdit_3->text();
    abonne e(id,nom,prenom);

QMediaPlayer * music = new QMediaPlayer();
music->setMedia(QUrl("qrc:/img/img/button16.wav"));
music->play();


    bool test=e.ajouter();
    if(test)
    {Abonnes::Refresh();//refresh
    QMessageBox::information(nullptr, QObject::tr("ajouter vehicule"),
                          QObject::tr("vehicule ajouté./n"
                             "click cancel to exit."),QMessageBox::Cancel);
    }

    else
        QMessageBox::critical(nullptr, QObject::tr("ajouter vehicule"),
                              QObject::tr("Erreur !./n"
                                 "click cancel to exit."),QMessageBox::Cancel);
}



void Abonnes::on_pushButton_3_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();


    QString ID = ui->lineEdit_4->text();
    bool test=tmpabonne.supprimer();
    if(test)
    {Abonnes::Refresh();//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une véhicule"),
                    QObject::tr("véhicule supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une véhicule"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Abonnes::on_tableView_2_activated(const QModelIndex &index)
{
    QString val = ui->tableView_2->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("SELECT * FROM ABONNE WHERE ID='"+val+"' or NOM='"+val+"' or PRENOM='"+val+"'");
    if(query.exec())
    {
        while(query.next())
        {
            tmpabonne.setid(query.value(0).toString());
            tmpabonne.setnom(query.value(1).toString());
            tmpabonne.setprenom(query.value(2).toString());
        }
    }
    ui->lineEdit_4->setText(tmpabonne.getid());
}

void Abonnes::on_tableView_3_activated(const QModelIndex &index)
{
    QString val = ui->tableView_3->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("SELECT * FROM ABONNE WHERE ID='"+val+"' or NOM='"+val+"' or PRENOM='"+val+"'");
    if(query.exec())
    {
        while(query.next())
        {
            tmpabonne.setid(query.value(0).toString());
            tmpabonne.setnom(query.value(1).toString());
            tmpabonne.setprenom(query.value(2).toString());
        }
    }
    ui->lineEdit_5->setText(tmpabonne.getid());
    ui->lineEdit_6->setText(tmpabonne.getnom());
    ui->lineEdit_7->setText(tmpabonne.getprenom());
}

void Abonnes::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Abonnes::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    Abonnes::Refresh2();
}

void Abonnes::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    Abonnes::Refresh3();
}

void Abonnes::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    Abonnes::Refresh();
}


void Abonnes::on_pushButton_4_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();


    QString id = ui->lineEdit_5->text();
    QString nom = ui->lineEdit_6->text();
    QString prenom = ui->lineEdit_7->text();

    QSqlQuery query;
    query.prepare("UPDATE ABONNE SET ID =:id,NOM = :nom,PRENOM = :prenom where ID = :id");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    bool test = query.exec();
    if(test)
    {

        Abonnes::Refresh();
        QMessageBox::information(nullptr, QObject::tr("Modifier abonné"),
                    QObject::tr("véhicule Modifier.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer abonné"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }

    ui->lineEdit_7->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_5->clear();

}

void Abonnes::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Abonnes::on_pushButton_7_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Abonnes::on_pushButton_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void Abonnes::on_pushButton_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}



void Abonnes::on_lineEdit_9_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
            QSqlQuery   *query= new QSqlQuery();

            query->prepare("SELECT * FROM Abonne WHERE NOM LIKE'"+arg1+"%'order by nom");//+tri
    query->exec();
        model->setQuery(*query);
    ui->tableView->setModel(model);
}
