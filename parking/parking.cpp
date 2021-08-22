#include "parking.h"
#include "ui_parking.h"
#include "vehicule.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlQueryModel>
#include<QMediaPlayer>
#include<QPixmap>
#include<QtWidgets>

Parking::Parking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Parking)
{
    ui->setupUi(this);
    ui->label_9->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label_9->setMovie(movie);
    movie->start();
}

Parking::~Parking()
{
    delete ui;
}
int Parking::getChoixzone()
{
    return choixzone;
}
void Parking::setChoixzone(int a)
{
    choixzone=a;
}
int Parking::getChoix()
{
    return choix;
}
void Parking::setChoix(int a)
{
    choix=a;
}
void   Parking::Refresh(int choixzone)
{
   QSqlQueryModel *model= new QSqlQueryModel();
        QSqlQuery   *query= new QSqlQuery();
        QString type;
        if(choixzone==1)
        {
            type="voiture";
        }
        else if(choixzone==2)
        {
            type="taxi";
        }
        else if(choixzone==3)
        {
            type="camion";
        }
                 query->prepare("SELECT * FROM VEHICULE WHERE TYPE=:type");
                 query->bindValue(":type",type);
            query->exec();
                model->setQuery(*query);
            ui->tableView->setModel(model);
}

void Parking::on_pushButton_clicked()//ajouter
{
    QString couleur = ui->lineEdit->text();
    QString marque= ui->lineEdit_2->text();
    QString matricule= ui->lineEdit_3->text();
vehicule e(couleur,marque,matricule);

QMediaPlayer * music = new QMediaPlayer();
music->setMedia(QUrl("qrc:/img/img/button16.wav"));
music->play();


    bool test=e.ajouter(choixzone);
    if(test)
    {Parking::Refresh(choixzone);//refresh
    QMessageBox::information(nullptr, QObject::tr("ajouter vehicule"),
                          QObject::tr("vehicule ajouté./n"
                             "click cancel to exit."),QMessageBox::Cancel);
    }

    else
        QMessageBox::critical(nullptr, QObject::tr("ajouter vehicule"),
                              QObject::tr("Erreur !./n"
                                 "click cancel to exit."),QMessageBox::Cancel);
}

void Parking::on_pushButton_2_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();


    ui->stackedWidget->setCurrentIndex(0);
}

void Parking::on_pushButton_3_clicked()//supprimer
{


    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();


    QString matricule = ui->lineEdit_4->text();
    bool test=tmpvehicule.supprimer(matricule);
    if(test)
    {Parking::Refresh(choixzone);//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une véhicule"),
                    QObject::tr("véhicule supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une véhicule"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Parking::on_pushButton_5_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    ui->stackedWidget->setCurrentIndex(0);
}

void Parking::on_pushButton_4_clicked()//modifier
{


    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    QString matricule = ui->lineEdit_8->text();
    QString nouvmatricule = ui->lineEdit_5->text();
    QString couleur = ui->lineEdit_7->text();
    QString marque = ui->lineEdit_6->text();

    QSqlQuery query;
    query.prepare("UPDATE VEHICULE SET MATRICULE=:nouvmatricule,MARQUE=:marque,COULEUR=:couleur where MATRICULE = :matricule");
    query.bindValue(":couleur",couleur);
    query.bindValue(":marque",marque);
    query.bindValue(":matricule",matricule);
    query.bindValue(":nouvmatricule",nouvmatricule);
    bool test = query.exec();
    if(test)
    {

        Parking::Refresh(choixzone);

        QMessageBox::information(nullptr, QObject::tr("Modifier véhicule"),
                    QObject::tr("véhicule Modifier.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer véhicule"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    ui->lineEdit_8->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_5->clear();


}

void Parking::on_ADD_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoix(1);
    ui->stackedWidget->setCurrentIndex(5);

}

void Parking::on_DELETE_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoix(2);
    ui->stackedWidget->setCurrentIndex(5);

}

void Parking::on_EDIT_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoix(3);
    ui->stackedWidget->setCurrentIndex(5);

}

void Parking::on_SHOW_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoix(4);
    ui->stackedWidget->setCurrentIndex(5);
}

void Parking::on_pushButton_6_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    ui->stackedWidget->setCurrentIndex(0);
}

void Parking::on_pushButton_7_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();


    ui->stackedWidget->setCurrentIndex(0);
}

void Parking::on_pushButton_8_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

     setChoixzone(1);
     Parking::Refresh(choixzone);
     ui->stackedWidget->setCurrentIndex(choix);
}

void Parking::on_pushButton_9_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoixzone(2);
    Parking::Refresh(choixzone);
    ui->stackedWidget->setCurrentIndex(choix);
}

void Parking::on_pushButton_10_clicked()
{

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();

    setChoixzone(3);
    Parking::Refresh(choixzone);
    ui->stackedWidget->setCurrentIndex(choix);
}



void Parking::on_lineEdit_9_textChanged(const QString &arg1)//filtre
{

    QSqlQueryModel *model= new QSqlQueryModel();
            QSqlQuery   *query= new QSqlQuery();
            QString type;
            if(choixzone==1)
            {
                type="voiture";
            }
            else if(choixzone==2)
            {
                type="taxi";
            }
            else if(choixzone==3)
            {
                type="camion";
            }
            query->prepare("SELECT * FROM VEHICULE WHERE TYPE=:type AND MATRICULE LIKE'"+arg1+"%'order by marque");//+tri
            query->bindValue(":type",type);
    query->exec();
        model->setQuery(*query);
    ui->tableView->setModel(model);
}
