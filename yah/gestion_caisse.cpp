#include "gestion_caisse.h"
#include "ui_gestion_caisse.h"
#include <QMessageBox>
gestion_caisse::gestion_caisse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_caisse)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmpcaisse.afficher());
}

gestion_caisse::~gestion_caisse()
{
    delete ui;
}

void gestion_caisse::on_pushButton_clicked()
{
    QString nom_caisse= ui->lineEdit->text();
    QString disponibilite= ui->lineEdit_2->text();
      caisse c(nom_caisse,disponibilite);
      bool test=c.ajouter();
      if(test)
    {ui->tableView->setModel(tmpcaisse.afficher());//refresh

    QMessageBox::information(nullptr, QObject::tr("Ajouter un étudiant"),
                      QObject::tr("Caisse ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void gestion_caisse::on_pushButton_2_clicked()
{
    QString nom_caisse=ui->lineEdit_3->text();
        bool test=tmpcaisse.supprimer(nom_caisse);
        if(test)
        { ui->tableView->setModel(tmpcaisse.afficher());//refresh

            QMessageBox::information(nullptr, QObject::tr("Supprimer un étudiant"),
                        QObject::tr("Caisse supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_caisse::on_pushButton_3_clicked()
{
    QString nom_caisse= ui->lineEdit_4->text();
   QString disponibilite= ui->lineEdit_5->text();
      caisse c(nom_caisse,disponibilite);
      bool test=c.modifier();
      if(test)
    {ui->tableView->setModel(tmpcaisse.afficher());//refresh

    QMessageBox::information(nullptr, QObject::tr("Modifier un étudiant"),
                      QObject::tr("Caisse Modifié.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    }
      else
          QMessageBox::critical(nullptr, QObject::tr("Modifier un étudiant"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_caisse::on_lineEdit_6_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
        QSqlQuery   *query= new QSqlQuery();

         query->prepare("SELECT * FROM CAISSE WHERE NOM_CAISSE LIKE'"+arg1+"%'");
         query->exec();
         model->setQuery(*query);
         ui->tableView_2->setModel(model);
}
