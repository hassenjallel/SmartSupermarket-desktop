#include "bien.h"
#include "ui_bien.h"
#include "employer.h"
#include <QMessageBox>
#include "utilisateurs.h"
bien::bien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bien)
{
    ui->setupUi(this);
    ui->tabpersonnels->setModel(tmpemployer.afficher());

}

bien::~bien()
{
    delete ui;
}
void bien::on_pb_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString prenom= ui->lineEdit_prenom->text();
    QString date= ui->dateEdit->text();
    int salaire= ui->lineEdit_salaire->text().toInt();
    QString adresse= ui->lineEdit_adresse->text();
    QString tache= ui->lineEdit_tache->text();
  employer e(id,nom,prenom,date,salaire,adresse,tache);
  bool test=e.ajouter();
  if(test)
{ui->tabpersonnels->setModel(tmpemployer.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un employer"),
                  QObject::tr("employer ajouté.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un employer"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void bien::on_pb_supprimer_clicked()
{
int id = ui->lineEdit_id_2->text().toInt();
bool test=tmpemployer.supprimer(id);
if(test)
{ui->tabpersonnels->setModel(tmpemployer.afficher());//refresh
    QMessageBox::information(nullptr, QObject::tr("Supprimer un employer"),
                QObject::tr("employer supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un employer"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


}

void bien::on_pushButton_clicked()
{
    QSqlQuery q;
    q.prepare("UPDATE PERSONNELS SET SALAIRE=:sal , TACHE=:tach WHERE ID= :id");
    q.bindValue(":id",ui->lineEdit->text());
    q.bindValue(":sal",ui->lineEditsalaire->text());
    q.bindValue(":tach",ui->lineEdittach->text());
    bool test=q.exec();
    if(test)
    {ui->tabpersonnels->setModel(tmpemployer.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un employer"),
                    QObject::tr("employer modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un employer"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void bien::on_pushButton_2_clicked()
{
    ui->tabpersonnels->setModel(tmpemployer.afficher());
}

void bien::on_pushButton_5_clicked()
{
    int id = ui->lineEditIDUSER->text().toInt();
    QString nom= ui->lineEditNOMUSER->text();
    QString prenom= ui->lineEditPRENOMUSER->text();
    QString mdp= ui->lineEditMDPUSER->text();

  utilisateurs u(id,nom,prenom,mdp);
  bool test=u.ajouter();
  if(test)
{ui->tableViewUTILISATEURS->setModel(tmputilisateur.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un utilisateur"),
                  QObject::tr("Utilisateur ajouté.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Utilisateur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}

void bien::on_pushButton_3_clicked()
{
  ui->tableViewUTILISATEURS->setModel(tmputilisateur.afficher());
}

void bien::on_pushButton_4_clicked()
{
    int id = ui->lineEditIDUSERSS->text().toInt();
    bool test=tmputilisateur.supprimer(id);
    if(test)
    {  ui->tableViewUTILISATEURS->setModel(tmputilisateur.afficher());

        QMessageBox::information(nullptr, QObject::tr("Supprimer un Utilisateurr"),
                    QObject::tr("Utilisateur supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Utilisateur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void bien::on_pushButton_6_clicked()
{
    QSqlQuery q;
    q.prepare("UPDATE UTILISATEURS SET MDPUSER=:mdp WHERE IDUSER= :id");
    q.bindValue(":id",ui->lineEditIDUSERMM->text());
    q.bindValue(":mdp",ui->lineEditMDPMM->text());
    bool test=q.exec();
    if(test)
    {ui->tableViewUTILISATEURS->setModel(tmputilisateur.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un Utilisateur"),
                    QObject::tr("Utilisateur modifié.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un Utilisateur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void bien::on_lineEdit_2_textChanged(const QString &arg1)
{
    utilisateurs p;
        int id = ui->lineEdit_2->text().toInt();
        ui->tableView_2->setModel(p.recherche(id));
}


void bien::on_lineEdit_4_textChanged(const QString &arg1)
{
    employer p;
        int id = ui->lineEdit_4->text().toInt();
        ui->tableView->setModel(p.recherche(id));
}
