#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  "QSqlQuery"
#include <QSystemTrayIcon>
#include <QSqlQueryModel>
#include "signin.h"
#include "vehicule.h"
#include "parking.h"

#include <QMessageBox>
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow( parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   QSqlQuery * query = new QSqlQuery();
   QSqlQueryModel * model = new QSqlQueryModel();


    query->prepare("SELECT MATRICULE FROM ZONEC");
    query->exec();
    model->setQuery(*query);


    if(model->rowCount()<10)
    {
         ui->etatzoneC->setText("Disponible");
    }
    else
    {

        ui->etatzoneC->setText("Plein");
    }


    query->prepare("SELECT MATRICULE FROM ZONET");
    query->exec();
    model->setQuery(*query);
    if(model->rowCount()<10)
    {
        ui->etatzoneT->setText("Disponible");
    }
    else
    {
        ui->etatzoneT->setText("Plein");

    }
    query->prepare("SELECT MATRICULE FROM ZONEV");
    query->exec();
    model->setQuery(*query);
    if(model->rowCount()<10)
    {
          ui->etatzoneV->setText("Disponible");
    }
    else
    {
        ui->etatzoneV->setText("Plein");

    }

    //ui->tabvehicule->setModel(tmpvehicule.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()//ajouter
{
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/img/img/button16.wav"));
    music->play();
    signin x;
    x.setModal(this);
    x.exec();
}




void MainWindow::on_LOL_clicked()
{
        notifier = new QSystemTrayIcon(this);
        notifier->setIcon(QIcon("notification.png"));
        notifier->show();
        notifier->showMessage("Au revoir","Le programme fut fermée",QSystemTrayIcon::Information,10000);
}


