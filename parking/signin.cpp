#include "signin.h"
#include "choix.h"
#include "ui_signin.h"
#include "parking.h"
#include <QSqlQuery>
#include <QMessageBox>
#include<QMediaPlayer>
#include<QPixmap>
#include<QtWidgets>

signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
    ui->label_4->setMask((new QPixmap("annim.gif"))->mask());
    QMovie *movie=new   QMovie("annim.gif");
    ui->label_4->setMovie(movie);
    movie->start();
}

signin::~signin()
{
    delete ui;
}

void signin::on_login_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM LOGIN WHERE USERNAME=\'"+ui->lineEdit_username->text()+"\' AND PASSWORD=\'"+ui->lineEdit_password->text()+"\'");
     query.exec();

     QMediaPlayer * music = new QMediaPlayer();
     music->setMedia(QUrl("qrc:/img/img/button16.wav"));
     music->play();

       if(query.next())
       {

       /*QMessageBox::information(nullptr, QObject::tr("Login correcte"),
           QObject::tr("connection successful.\n"
                       "Click Cancel to exit."), QMessageBox::Cancel);*/
    choix g;
    g.setModal(this);
    g.exec();


   }
       else
           QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                       QObject::tr("connection failed\n\nusername or password incorrect.\n\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
}

void signin::on_logincancel_clicked()
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();
close();
}
