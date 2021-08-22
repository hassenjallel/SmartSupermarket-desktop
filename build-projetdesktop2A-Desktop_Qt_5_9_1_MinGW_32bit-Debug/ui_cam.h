/********************************************************************************
** Form generated from reading UI file 'cam.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAM_H
#define UI_CAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cam
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *referencecam;
    QLineEdit *emplacementcam;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_19;
    QWidget *tab_2;
    QLineEdit *modifref;
    QLineEdit *modifemp;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_12;
    QLineEdit *refrech;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QLabel *label_20;
    QWidget *tab_3;
    QLineEdit *suppref;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QLabel *label_13;
    QLabel *label_21;
    QWidget *tab_4;
    QTableView *tabcam;
    QLabel *label_15;
    QPushButton *pushButton_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_22;
    QPushButton *pushButton_4;
    QLabel *label_14;
    QLabel *camannim;

    void setupUi(QDialog *cam)
    {
        if (cam->objectName().isEmpty())
            cam->setObjectName(QStringLiteral("cam"));
        cam->resize(1306, 683);
        tabWidget = new QTabWidget(cam);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(266, 119, 711, 421));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        referencecam = new QLineEdit(tab);
        referencecam->setObjectName(QStringLiteral("referencecam"));
        referencecam->setGeometry(QRect(190, 130, 151, 31));
        referencecam->setClearButtonEnabled(true);
        emplacementcam = new QLineEdit(tab);
        emplacementcam->setObjectName(QStringLiteral("emplacementcam"));
        emplacementcam->setGeometry(QRect(190, 190, 151, 31));
        emplacementcam->setClearButtonEnabled(true);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 130, 91, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 200, 111, 20));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 300, 71, 61));
        pushButton->setFlat(true);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(580, 300, 71, 61));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/54908.svg")));
        label_10->setScaledContents(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 0, 711, 401));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_19->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        label_19->raise();
        referencecam->raise();
        emplacementcam->raise();
        label_6->raise();
        label_7->raise();
        label_10->raise();
        pushButton->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        modifref = new QLineEdit(tab_2);
        modifref->setObjectName(QStringLiteral("modifref"));
        modifref->setGeometry(QRect(190, 130, 151, 31));
        modifref->setClearButtonEnabled(true);
        modifemp = new QLineEdit(tab_2);
        modifemp->setObjectName(QStringLiteral("modifemp"));
        modifemp->setGeometry(QRect(190, 190, 151, 31));
        modifemp->setClearButtonEnabled(true);
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 200, 111, 20));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 130, 91, 31));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 290, 81, 71));
        pushButton_2->setFlat(true);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(550, 290, 81, 71));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../Safety_Tips.png")));
        label_12->setScaledContents(true);
        refrech = new QLineEdit(tab_2);
        refrech->setObjectName(QStringLiteral("refrech"));
        refrech->setGeometry(QRect(402, 69, 111, 21));
        refrech->setClearButtonEnabled(true);
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(550, 50, 61, 61));
        pushButton_5->setFlat(true);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(550, 50, 61, 61));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/magnifier-glass-10-713820.png")));
        label_16->setScaledContents(true);
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(-4, -8, 711, 411));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_20->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        label_20->raise();
        label_8->raise();
        label_9->raise();
        label_12->raise();
        pushButton_2->raise();
        refrech->raise();
        modifref->raise();
        modifemp->raise();
        label_16->raise();
        pushButton_5->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        suppref = new QLineEdit(tab_3);
        suppref->setObjectName(QStringLiteral("suppref"));
        suppref->setGeometry(QRect(190, 130, 151, 31));
        suppref->setClearButtonEnabled(true);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 130, 91, 31));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 300, 71, 61));
        pushButton_3->setFlat(true);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(560, 300, 71, 61));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/54528.svg")));
        label_13->setScaledContents(true);
        label_21 = new QLabel(tab_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(-4, -8, 711, 411));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_21->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        label_21->raise();
        suppref->raise();
        label_11->raise();
        label_13->raise();
        pushButton_3->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabcam = new QTableView(tab_4);
        tabcam->setObjectName(QStringLiteral("tabcam"));
        tabcam->setGeometry(QRect(55, 100, 591, 231));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(520, 10, 91, 81));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/transit-27-512.png")));
        label_15->setScaledContents(true);
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 10, 61, 51));
        pushButton_6->setFlat(true);
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(380, 70, 91, 22));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 113, 20));
        label = new QLabel(tab_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 70, 121, 21));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(610, 340, 61, 51));
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(520, 10, 91, 81));
        pushButton_8->setFlat(true);
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(390, 10, 61, 51));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/magnifier-glass-10-713820.png")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(610, 340, 61, 51));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/tof/monitor.png")));
        label_18->setScaledContents(true);
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(-4, -8, 711, 411));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_22->setScaledContents(true);
        tabWidget->addTab(tab_4, QString());
        label_22->raise();
        tabcam->raise();
        comboBox->raise();
        lineEdit->raise();
        label->raise();
        label_15->raise();
        pushButton_8->raise();
        label_17->raise();
        pushButton_6->raise();
        label_18->raise();
        pushButton_7->raise();
        pushButton_4 = new QPushButton(cam);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1130, 570, 71, 61));
        pushButton_4->setFlat(true);
        label_14 = new QLabel(cam);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(1130, 570, 71, 61));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/61449.svg")));
        label_14->setScaledContents(true);
        camannim = new QLabel(cam);
        camannim->setObjectName(QStringLiteral("camannim"));
        camannim->setGeometry(QRect(-4, 2, 1311, 681));
        camannim->setScaledContents(true);
        camannim->raise();
        tabWidget->raise();
        label_14->raise();
        pushButton_4->raise();

        retranslateUi(cam);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(cam);
    } // setupUi

    void retranslateUi(QDialog *cam)
    {
        cam->setWindowTitle(QApplication::translate("cam", "Camera", Q_NULLPTR));
        label_6->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002673;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#00297d;\">Emplacement</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QString());
        label_10->setText(QString());
        label_19->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("cam", "Ajouter cam", Q_NULLPTR));
        label_8->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#00297d;\">Emplacement</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002673;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_12->setText(QString());
        pushButton_5->setText(QString());
        label_16->setText(QString());
        label_20->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("cam", "Modifier cam", Q_NULLPTR));
        label_11->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002673;\">R\303\251ference</span></p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QString());
        label_13->setText(QString());
        label_21->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("cam", "Supprimer cam", Q_NULLPTR));
        label_15->setText(QString());
        pushButton_6->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("cam", "REFERENCE", Q_NULLPTR)
         << QApplication::translate("cam", "EMPLACEMENT", Q_NULLPTR)
        );
        label->setText(QApplication::translate("cam", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#0055ff;\">trier selon :</span></p></body></html>", Q_NULLPTR));
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("cam", "Afficher cam", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_14->setText(QString());
        camannim->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cam: public Ui_cam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAM_H
