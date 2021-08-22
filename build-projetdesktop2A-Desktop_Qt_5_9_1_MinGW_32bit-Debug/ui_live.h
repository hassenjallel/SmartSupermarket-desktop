/********************************************************************************
** Form generated from reading UI file 'live.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVE_H
#define UI_LIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_live
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *optioncam;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *live)
    {
        if (live->objectName().isEmpty())
            live->setObjectName(QStringLiteral("live"));
        live->resize(597, 427);
        verticalLayout = new QVBoxLayout(live);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        optioncam = new QPushButton(live);
        optioncam->setObjectName(QStringLiteral("optioncam"));

        verticalLayout->addWidget(optioncam);

        scrollArea = new QScrollArea(live);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 577, 378));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -70, 601, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("../Desktop/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-14, -38, 601, 431));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/supermarket-store-interior-with-customers-blurred-background_v_pvxpehe__F0000.png")));
        label_2->setScaledContents(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2->raise();
        label->raise();

        verticalLayout->addWidget(scrollArea);


        retranslateUi(live);

        QMetaObject::connectSlotsByName(live);
    } // setupUi

    void retranslateUi(QDialog *live)
    {
        live->setWindowTitle(QApplication::translate("live", "Camera", Q_NULLPTR));
        optioncam->setText(QApplication::translate("live", "CAMERA", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class live: public Ui_live {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVE_H
