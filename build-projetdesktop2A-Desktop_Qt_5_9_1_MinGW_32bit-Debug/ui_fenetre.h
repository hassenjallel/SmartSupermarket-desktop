/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *ref;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *nom;
    QLabel *label_7;
    QLineEdit *type;
    QLineEdit *emplacement;
    QLineEdit *etat;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_15;
    QWidget *tab_2;
    QLabel *label_10;
    QLineEdit *modifref;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *modifnom;
    QLineEdit *modiftype;
    QLineEdit *modifemp;
    QLineEdit *modifetat;
    QPushButton *pushButton_2;
    QLabel *label_21;
    QLabel *label_23;
    QLineEdit *nomrech_2;
    QPushButton *rechercherref;
    QLabel *label_24;
    QLabel *label_16;
    QWidget *tab_3;
    QLabel *reffffff;
    QPushButton *suppref;
    QLineEdit *reff;
    QLabel *label_20;
    QLabel *label_18;
    QWidget *tab_4;
    QTableView *tableView;
    QLabel *label_19;
    QPushButton *pushButton_4;
    QLabel *label_22;
    QLabel *ptannim;

    void setupUi(QDialog *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QStringLiteral("Fenetre"));
        Fenetre->resize(1373, 767);
        tabWidget = new QTabWidget(Fenetre);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(240, 160, 841, 491));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        ref = new QLineEdit(tab);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(240, 90, 181, 41));
        ref->setClearButtonEnabled(true);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 100, 151, 31));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 180, 101, 21));
        nom = new QLineEdit(tab);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(240, 160, 181, 41));
        nom->setClearButtonEnabled(true);
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 240, 101, 31));
        type = new QLineEdit(tab);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(240, 229, 181, 41));
        type->setClearButtonEnabled(true);
        emplacement = new QLineEdit(tab);
        emplacement->setObjectName(QStringLiteral("emplacement"));
        emplacement->setGeometry(QRect(240, 299, 181, 41));
        emplacement->setClearButtonEnabled(true);
        etat = new QLineEdit(tab);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setGeometry(QRect(240, 380, 181, 41));
        etat->setClearButtonEnabled(true);
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 310, 121, 31));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(76, 390, 111, 21));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 380, 61, 51));
        pushButton->setFlat(true);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, -20, 841, 491));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_4->setScaledContents(true);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(690, 380, 61, 51));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/54908.svg")));
        label_15->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        label_4->raise();
        ref->raise();
        label_5->raise();
        label_6->raise();
        nom->raise();
        label_7->raise();
        type->raise();
        emplacement->raise();
        etat->raise();
        label_8->raise();
        label_9->raise();
        label_15->raise();
        pushButton->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 100, 111, 31));
        modifref = new QLineEdit(tab_2);
        modifref->setObjectName(QStringLiteral("modifref"));
        modifref->setGeometry(QRect(240, 100, 181, 31));
        modifref->setClearButtonEnabled(true);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 170, 81, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 230, 91, 21));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 280, 141, 51));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 360, 91, 21));
        modifnom = new QLineEdit(tab_2);
        modifnom->setObjectName(QStringLiteral("modifnom"));
        modifnom->setGeometry(QRect(240, 160, 181, 31));
        modifnom->setClearButtonEnabled(true);
        modiftype = new QLineEdit(tab_2);
        modiftype->setObjectName(QStringLiteral("modiftype"));
        modiftype->setGeometry(QRect(240, 220, 181, 31));
        modiftype->setClearButtonEnabled(true);
        modifemp = new QLineEdit(tab_2);
        modifemp->setObjectName(QStringLiteral("modifemp"));
        modifemp->setGeometry(QRect(240, 280, 181, 31));
        modifemp->setClearButtonEnabled(true);
        modifetat = new QLineEdit(tab_2);
        modifetat->setObjectName(QStringLiteral("modifetat"));
        modifetat->setGeometry(QRect(240, 350, 181, 31));
        modifetat->setClearButtonEnabled(true);
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 370, 71, 71));
        pushButton_2->setFlat(true);
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(700, 370, 71, 71));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Safety_Tips.png")));
        label_21->setScaledContents(true);
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(510, 20, 201, 51));
        nomrech_2 = new QLineEdit(tab_2);
        nomrech_2->setObjectName(QStringLiteral("nomrech_2"));
        nomrech_2->setGeometry(QRect(510, 70, 113, 20));
        rechercherref = new QPushButton(tab_2);
        rechercherref->setObjectName(QStringLiteral("rechercherref"));
        rechercherref->setGeometry(QRect(700, 40, 71, 61));
        rechercherref->setFlat(true);
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(700, 40, 71, 61));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../Desktop/magnifier-glass-10-713820.png")));
        label_24->setScaledContents(true);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, -10, 841, 481));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_16->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        label_16->raise();
        label_10->raise();
        modifref->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        modifnom->raise();
        modiftype->raise();
        modifemp->raise();
        modifetat->raise();
        label_21->raise();
        pushButton_2->raise();
        label_23->raise();
        nomrech_2->raise();
        label_24->raise();
        rechercherref->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        reffffff = new QLabel(tab_3);
        reffffff->setObjectName(QStringLiteral("reffffff"));
        reffffff->setGeometry(QRect(90, 100, 121, 31));
        suppref = new QPushButton(tab_3);
        suppref->setObjectName(QStringLiteral("suppref"));
        suppref->setGeometry(QRect(680, 370, 71, 61));
        suppref->setFlat(true);
        reff = new QLineEdit(tab_3);
        reff->setObjectName(QStringLiteral("reff"));
        reff->setGeometry(QRect(242, 90, 171, 41));
        reff->setClearButtonEnabled(true);
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(690, 370, 61, 61));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/54528.svg")));
        label_20->setScaledContents(true);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(-4, -8, 841, 481));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_18->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        label_18->raise();
        reffffff->raise();
        reff->raise();
        label_20->raise();
        suppref->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 170, 731, 241));
        tableView->setStyleSheet(QStringLiteral("qApp->setStyleSheet(\"QLineEdit { background-color: yellow }\");"));
        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(-4, -8, 841, 481));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_19->setScaledContents(true);
        tabWidget->addTab(tab_4, QString());
        label_19->raise();
        tableView->raise();
        pushButton_4 = new QPushButton(Fenetre);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1230, 680, 71, 61));
        pushButton_4->setFlat(true);
        label_22 = new QLabel(Fenetre);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(1230, 680, 71, 61));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/61449.svg")));
        label_22->setScaledContents(true);
        ptannim = new QLabel(Fenetre);
        ptannim->setObjectName(QStringLiteral("ptannim"));
        ptannim->setGeometry(QRect(0, 2, 1371, 771));
        ptannim->setScaledContents(true);
        ptannim->raise();
        tabWidget->raise();
        label_22->raise();
        pushButton_4->raise();

        retranslateUi(Fenetre);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QDialog *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "Point d'acces", Q_NULLPTR));
        label_5->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002e8a;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002e8a;\">Nom</span></p><p><span style=\" color:#002e8a;\"><br/></span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002e8c;\">Type</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002e8a;\">Emplacement</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002e8a;\">Etat</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QString());
        label_4->setText(QString());
        label_15->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Fenetre", "Ajout", Q_NULLPTR));
        label_10->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#0055ff;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002266;\">Nom</span></p></body></html>", Q_NULLPTR));
        label_12->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#00236b;\">Type</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002a7f;\">Emplacement</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#00236b;\">Etat</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_21->setText(QString());
        label_23->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002268;\">Taper R\303\251ference</span></p></body></html>", Q_NULLPTR));
        rechercherref->setText(QString());
        label_24->setText(QString());
        label_16->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Fenetre", "Modifier", Q_NULLPTR));
        reffffff->setText(QApplication::translate("Fenetre", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002f8f;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        suppref->setText(QString());
        label_20->setText(QString());
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Fenetre", "Supprimer", Q_NULLPTR));
        label_19->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Fenetre", "affichage", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_22->setText(QString());
        ptannim->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H
