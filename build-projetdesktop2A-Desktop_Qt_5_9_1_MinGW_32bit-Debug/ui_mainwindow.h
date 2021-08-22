/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLineEdit *login;
    QLabel *label_6;
    QLabel *agent;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *slideprogress;
    QSlider *slidevolume;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QLabel *label_9;
    QLineEdit *login2;
    QLabel *welcome;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1294, 689);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(590, 110, 171, 41));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1150, 530, 75, 61));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 550, 101, 41));
        pushButton_2->setFlat(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 250, 81, 21));
        login = new QLineEdit(centralWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(160, 239, 141, 31));
        login->setClearButtonEnabled(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 290, 81, 31));
        agent = new QLabel(centralWidget);
        agent->setObjectName(QStringLiteral("agent"));
        agent->setGeometry(QRect(960, 50, 281, 281));
        agent->setPixmap(QPixmap(QString::fromUtf8("../Desktop/police_officer_glyph_convert-512.png")));
        agent->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 240, 41, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Desktop/yumminky-pc-43-512.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 290, 41, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../Desktop/icons_password-512.png")));
        label_3->setScaledContents(true);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1140, 520, 91, 81));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Desktop/2000px-Signin_font_awesome.svg.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 550, 101, 41));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../Desktop/img_487255.png")));
        label_8->setScaledContents(true);
        slideprogress = new QSlider(centralWidget);
        slideprogress->setObjectName(QStringLiteral("slideprogress"));
        slideprogress->setGeometry(QRect(160, 40, 171, 31));
        slideprogress->setOrientation(Qt::Horizontal);
        slidevolume = new QSlider(centralWidget);
        slidevolume->setObjectName(QStringLiteral("slidevolume"));
        slidevolume->setGeometry(QRect(160, 90, 171, 31));
        slidevolume->setValue(99);
        slidevolume->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 90, 81, 21));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 50, 81, 21));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 50, 81, 71));
        pushButton_4->setFlat(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 50, 81, 71));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../Desktop/219-512.png")));
        label_9->setScaledContents(true);
        login2 = new QLineEdit(centralWidget);
        login2->setObjectName(QStringLiteral("login2"));
        login2->setGeometry(QRect(160, 290, 141, 31));
        login2->setStyleSheet(QLatin1String("alternate-background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        login2->setEchoMode(QLineEdit::Password);
        login2->setClearButtonEnabled(true);
        welcome = new QLabel(centralWidget);
        welcome->setObjectName(QStringLiteral("welcome"));
        welcome->setGeometry(QRect(6, 2, 1291, 651));
        welcome->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        welcome->raise();
        label->raise();
        label_5->raise();
        login->raise();
        label_6->raise();
        agent->raise();
        label_2->raise();
        label_3->raise();
        label_8->raise();
        label_7->raise();
        pushButton->raise();
        pushButton_2->raise();
        slideprogress->raise();
        slidevolume->raise();
        label_10->raise();
        label_11->raise();
        label_9->raise();
        pushButton_4->raise();
        login2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1294, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:26pt; color:#002b82;\">Welcome</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002673;\">Login</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002a7f;\">Password</span></p></body></html>", Q_NULLPTR));
        agent->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002878;\">Volume</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; color:#002878;\">Progress</span></p><p><br/></p></body></html>", Q_NULLPTR));
        pushButton_4->setText(QString());
        label_9->setText(QString());
        welcome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
