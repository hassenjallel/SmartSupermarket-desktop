#include "mainwindow.h"
#include "securite/access.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QMediaPlayer>
#include <QPixmap>
#include"produit/menu.h"
#include"parking/choix.h"
#include"achref/bien.h"
#include"yah/menu2.h"
//#include"yahyaoui/menuyah.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer (this);
    ui->label_3->setMask((new QPixmap("annim.gif"))->mask());
        QMovie *movie=new QMovie("annim.gif");
        ui->label_3->setMovie(movie);
        movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
    QString id=ui->lineEdit->text();
    QString mdp=ui->mdp->text();
    if (id=="hassen"&& mdp=="jalleli"){
        menu e;
        e.setModal(true);
        this->hide();

        e.exec();
    }else if(id=="negra"&& mdp=="negra"){
        player->setMedia(QUrl::fromLocalFile("C:/Users/Negra Aymen/Desktop/integra/ComputerMouse.aif"));
        player->play();
        qDebug()<<player->errorString();
        access afficher;
        afficher.setModal(true);
        this->hide();
        afficher.exec();
    }else if (id=="iyadh"&& mdp=="iyadh")
    {
        choix c;
        c.setModal(true);
        this->hide();
        c.exec();
    }
    else if (id=="achref"&& mdp=="achref")
        {
            bien b;
            b.setModal(true);
            this->hide();
            b.exec();
        }
    else if (id=="yah"&& mdp=="yah")
        {
            menu2 m;

            m.setModal(true);
            m.exec();
          /*  b.setModal(true);
            this->hide();
            b.exec();*/
        }

}
