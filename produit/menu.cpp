#include "menu.h"
#include "ui_menu.h"
#include "accueil.h"
#include"accueilstock.h"
#include<QPixmap>
#include<QtWidgets>
#include<QDateTime>
#include<QDate>
#include<QSqlQuery>
#include"notification.h"
#include <QSystemTrayIcon>
#include<QString>
#include"mainwindow.h"
//#include"statis.h"
#include"statis.h"

//#include"ajouterstock.h"
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label->setMovie(movie);
    movie->start();
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_2_clicked()
{
   /* player->setMedia(QUrl::fromLocalFile("C:/Users/Negra Aymen/Desktop/integra/ComputerMouse.aif"));
    player->play();
    qDebug()<<player->errorString();*/
 accueil a;
 a.setModal(true);
 this->hide();
 a.exec();
}

void menu::on_pushButton_clicked()
{
    /*player->setMedia(QUrl::fromLocalFile("C:/Users/Negra Aymen/Desktop/integra/ComputerMouse.aif"));
    player->play();
    qDebug()<<player->errorString();*/
   accueilstock stock;
   stock.setModal(true);
   this->hide();
   stock.exec();
}

void menu::on_pushButton_3_clicked()
{

            //stock *a=new stock();
//notification b;

//QTime time=QTime::currentTime();
QDate date =QDate::currentDate();
                    QSqlQuery  *q  = new QSqlQuery();
                    q->prepare("SELECT* FROM PRODUIT WHERE DATEDIFF(day,DATTE,@date)<=7 ");
                    if(q->exec())
                    {
           QString ref=q->value(0).toString();
//b.notification_ajout(ref);
                    }

                   }



void menu::on_pushButton_4_clicked()
{
    MainWindow w;
    //this->hide();
  w.show();
}

void menu::on_pushButton_5_clicked()
{
 statis s;
 s.setModal(true);
 s.exec();
}
