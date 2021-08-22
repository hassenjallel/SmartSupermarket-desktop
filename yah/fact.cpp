#include "fact.h"
#include "ui_fact.h"
#include <QSqlQuery>
#include "facture.h"
#include <QDebug>

fact::fact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fact)
{
    ui->setupUi(this);
    QSqlQuery q;
ui->comboBox_IDM->clear();
    q.exec("select *from facture");
    while(q.next())
    {
            ui->comboBox_IDM->addItem(q.value(0).toString(),k);
            ui->lineEdit_dateM->setText(q.value(4).toString());
            ui->lineEdit_totalM->setText(q.value(6).toString());
            k++;
    }

k=0;
ui->comboBox_IDFactureS->clear();
        q.exec("select *from facture");
        while(q.next())
        {
            ui->comboBox_idFactCon->addItem(q.value(0).toString(),k);
                ui->comboBox_IDFactureS->addItem(q.value(0).toString(),k);
                ui->lineEdit_DateAjoutS->setText(q.value(4).toString());
                ui->lineEdit_PrixS->setText(q.value(6).toString());
                k++;
        }
        k=0;
}

fact::~fact()
{
    delete ui;
}


void fact::on_pushButton_AjouterProd_clicked()
{

        j++;
   QTableWidget *t;
           t=ui->tableWidget_FactAjou;
    t->setRowCount(j);
    t->setColumnCount(3);
    t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    t->setHorizontalHeaderLabels(QString("Produit;     PRIX     ;  NOMBRE ").split(";"));

               t->setItem(i-1,0,new QTableWidgetItem(ui->lineEdit_NomProd->text()));
               t->setItem(i-1,1,new QTableWidgetItem(ui->lineEdit_PrixProd->text()));
               t->setItem(i-1,2,new QTableWidgetItem(ui->lineEdit_Nombre->text()));
    (i)++;
    ui->lineEdit_NomProd->clear();
    ui->lineEdit_PrixProd->clear();
    ui->lineEdit_Nombre->clear();
}

void fact::on_commandLinkButton_AjouterFac_2_clicked()
{    QTableWidget *t;
         t=ui->tableWidget_FactAjou;
         facture F;
          F.Ajouter(t,ui->comboBox->currentText());
}

void fact::on_lineEdit_RechercheFac_cursorPositionChanged(int arg1, int arg2)
{
   /* facture F;
    F.Afficher(ui);*/
}

void fact::on_commandLinkButton_SupprimerFact_clicked()
{facture F;
    F.Supprimer(ui);
}



void fact::on_comboBox_idFactCon_currentIndexChanged(int index)
{
    facture F;
           F.Afficher(ui);
}

void fact::on_comboBox_IDFactureS_currentIndexChanged(int index)
{
    QSqlQuery q;
    q.prepare("select *from facture where id="+ui->comboBox_IDFactureS->currentText()+"");
    q.exec();
    while(q.next())
    {
        qDebug()<<"date :"<<ui->lineEdit_dateM->text();

            ui->lineEdit_DateAjoutS->setText(q.value(4).toString());
            ui->lineEdit_PrixS->setText(q.value(6).toString());
    }
}

void fact::on_comboBox_IDM_currentIndexChanged(int index)
{
    QSqlQuery q;
    j=0;
    q.prepare("select * from facture where id="+ui->comboBox_IDM->currentText()+"");
    q.exec();
    while (q.next())
    {
        j++;
}
    q.prepare("select *from facture where id="+ui->comboBox_IDM->currentText()+"");
    q.exec();
    while(q.next())
    {
        qDebug()<<"date :"<<ui->lineEdit_dateM->text();

            ui->lineEdit_dateM->setText(q.value(4).toString());
            ui->lineEdit_totalM->setText(q.value(6).toString());
            /////////////////////////////

                j++;
                ui->tableView_ModifierProd->setRowCount(j);
                ui->tableView_ModifierProd->setColumnCount(3);
                ui->tableView_ModifierProd->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
                ui->tableView_ModifierProd->setHorizontalHeaderLabels(QString("Produits;     PRIX     ;  NOMBRES ").split(";"));
                    i=1;
                ui->tableView_ModifierProd->setItem(i-1,0,new QTableWidgetItem(q.value(1).toString()));
                ui->tableView_ModifierProd->setItem(i-1,1,new QTableWidgetItem(q.value(2).toString()));
                ui->tableView_ModifierProd->setItem(i-1,2,new QTableWidgetItem(q.value(3).toString()));
                i++;
            ////////////////////////////
    }

}


void fact::on_commandLinkButton_ModifierFact_clicked()
{
    facture F;
    F.Modifier(ui->lineEdit_totalM->text(),ui->comboBox_IDM->currentText());
}




