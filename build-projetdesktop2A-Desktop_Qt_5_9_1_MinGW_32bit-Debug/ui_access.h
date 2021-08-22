/********************************************************************************
** Form generated from reading UI file 'access.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESS_H
#define UI_ACCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_access
{
public:
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *cam;
    QLabel *label_3;
    QLabel *accesannim;

    void setupUi(QDialog *access)
    {
        if (access->objectName().isEmpty())
            access->setObjectName(QStringLiteral("access"));
        access->resize(1312, 800);
        pushButton_2 = new QPushButton(access);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 100, 401, 331));
        pushButton_2->setFlat(true);
        label_2 = new QLabel(access);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(720, 90, 401, 351));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/47501.svg")));
        label_2->setScaledContents(true);
        cam = new QPushButton(access);
        cam->setObjectName(QStringLiteral("cam"));
        cam->setGeometry(QRect(90, 120, 381, 301));
        cam->setFlat(true);
        label_3 = new QLabel(access);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 50, 441, 421));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/media-pict-camera.png")));
        label_3->setScaledContents(true);
        accesannim = new QLabel(access);
        accesannim->setObjectName(QStringLiteral("accesannim"));
        accesannim->setGeometry(QRect(6, 2, 1311, 801));
        accesannim->setScaledContents(true);
        accesannim->raise();
        label_2->raise();
        pushButton_2->raise();
        label_3->raise();
        cam->raise();

        retranslateUi(access);

        QMetaObject::connectSlotsByName(access);
    } // setupUi

    void retranslateUi(QDialog *access)
    {
        access->setWindowTitle(QApplication::translate("access", "access", Q_NULLPTR));
        pushButton_2->setText(QString());
        label_2->setText(QString());
        cam->setText(QString());
        label_3->setText(QString());
        accesannim->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class access: public Ui_access {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESS_H
