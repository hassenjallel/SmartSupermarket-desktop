#include "choix.h"
#include "ui_choix.h"
#include "abonnes.h"
#include "parking.h"
#include<QBitmap>
#include<QtWidgets>
#include<QMediaPlayer>
#include"notification.h"
choix::choix(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choix)
{
    ui->setupUi(this);
    ui->label->setMask((new QPixmap("annim.gif"))->mask());
        QMovie *movie=new QMovie("annim.gif");
        ui->label->setMovie(movie);
        movie->start();
}

choix::~choix()
{
    delete ui;
}

void choix::on_pushButton_clicked()
{
    Parking x;
    x.setModal(this);
    x.exec();
}

void choix::on_pushButton_2_clicked()
{
    Abonnes x;
    x.setModal(this);
    x.exec();
}

void choix::on_pushButton_3_clicked()
{
     //notification n;

     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
     notifyIcon->show();
     notifyIcon->setIcon(QIcon("icone.png"));

     notifyIcon->showMessage("parking","GOODBYE",QSystemTrayIcon::Information,15000);
}
