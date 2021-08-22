#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QTableWidget>
#include <QDateTime>
#include <QDebug>
#include "facture.h"
#include <QMediaPlayer>
#include "gestion_caisse.h"
#include "fact.h"
#include "ui_fact.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player= new QMediaPlayer;
    connect(player,&QMediaPlayer::positionChanged,[&](qint64 pos) {ui->avance->setValue(pos);} ) ;
    connect(player,&QMediaPlayer::durationChanged,[&](qint64 dur) {ui->avance->setMaximum(dur);});
    /*ui->commandLinkButton_AjouterFac->setToolTip ("Ajouter une factures avec tous ses produits");
    ui->commandLinkButton_AjouterFac->setToolTip("Ajouter une factures avec tous ses produits");
    ui->commandLinkButton_ConsulterFac->setToolTip("Consulter les factures existant avec tous ses produits");
    ui->commandLinkButton_SupprimerFac->setToolTip("Supprimer les factures existant avec tous ses produits");
    ui->commandLinkButton_ModifieFac->setToolTip("Modifier les factures existant avec tous ses produits");*/
    ui->commandLinkButton_ImprimerFac_2->setToolTip("Options musiques");
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_commandLinkButton_gotoIns_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_lineEdit_RechercheFac_cursorPositionChanged(int arg1, int arg2)
{
   /* facture F;
    F.Afficher(ui);*/
}

void MainWindow::on_play_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Yahyaoui/Desktop/C.mp3"));
    player->play();
}

void MainWindow::on_pause_clicked()
{
       player->pause();
}

void MainWindow::on_SliderVolume_sliderMoved(int position)
{
player->setVolume(position);
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
        QSqlQuery   *query= new QSqlQuery();

         query->prepare("SELECT * FROM FACTURE WHERE NOM LIKE'"+arg1+"%'");
         query->exec();
         model->setQuery(*query);
         ui->tableView->setModel(model);
}

void MainWindow::on_return_9_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_commandLinkButton_ImprimerFac_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(8);
}

/*void MainWindow::on_pushButton_clicked()
{
    notifier = new QSystemTrayIcon(this);
                notifier->setIcon(QIcon("notification.png"));
                notifier->show();
                notifier->showMessage("Au revoir","Application fermée ",QSystemTrayIcon::Information,10000);
}
*/
void MainWindow::on_pushButton_2_clicked()
{
   gestion_caisse afficher;
   afficher.setModal(true);
   afficher.exec();

}

void MainWindow::on_commandLinkButton_2_clicked()
{fact f;
    f.setModal(true);
    f.exec();
}



void MainWindow::on_pushButton_clicked()
{
    notifier = new QSystemTrayIcon(this);
                notifier->setIcon(QIcon("notification.png"));
                notifier->show();
                notifier->showMessage("Au revoir","Application fermée ",QSystemTrayIcon::Information,10000);
}



void MainWindow::on_return_7_clicked()
{
         ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_label_15_linkActivated(const QString &link)
{

}
