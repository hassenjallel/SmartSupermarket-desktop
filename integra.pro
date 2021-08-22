#-------------------------------------------------
#
# Project created by QtCreator 2018-12-11T23:29:44
#
#-------------------------------------------------


QT +=    core gui multimedia multimediawidgets


QT +=    sql
QT += qml quick


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = integra
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    securite/access.cpp \
    securite/cam.cpp \
    securite/camera.cpp \
    securite/connection.cpp \
    securite/fenetre.cpp \
    securite/live.cpp \
    securite/notification.cpp \
    securite/point_dacces.cpp \
    securite/cameralive.cpp \
    produit/accueil.cpp \
    produit/accueilstock.cpp \
    produit/affichage.cpp \
    produit/ajouterproduit.cpp \
    produit/menu.cpp \
    produit/modifier.cpp \
    produit/produit.cpp \
    produit/stock.cpp \
    produit/suprimer.cpp \
    parking/abonne.cpp \
    parking/abonnes.cpp \
    parking/choix.cpp \
    parking/parking.cpp \
    parking/signin.cpp \
    parking/vehicule.cpp \
    connexion.cpp \
    parking/notification.cpp \
    qcustomplot.cpp \
    produit/statis.cpp \
    achref/bien.cpp \
    achref/dialog.cpp \
    achref/employer.cpp \
    achref/mdp.cpp \
    achref/utilisateurs.cpp \
    yah/caisse.cpp \
    yah/fact.cpp \
    yah/facture.cpp \
    yah/gestion_caisse.cpp \
    yah/menu2.cpp

HEADERS += \
        mainwindow.h \
    securite/access.h \
    securite/cam.h \
    securite/camera.h \
    securite/cameralive.h \
    securite/connection.h \
    securite/fenetre.h \
    securite/live.h \
    securite/cameralive.h \
    produit/accueil.h \
    produit/accueilstock.h \
    produit/affichage.h \
    produit/ajouterproduit.h \
    produit/modifier.h \
    produit/produit.h \
    produit/stock.h \
    produit/suprimer.h \
    produit/suprproduit.h \
    parking/abonne.h \
    parking/abonnes.h \
    parking/choix.h \
    parking/connexion.h \
    parking/parking.h \
    parking/signin.h \
    parking/vehicule.h \
    connexion.h \
    parking/notification.h \
    qcustomplot.h \
    produit/statis.h \
    produit/menu.h \
    achref/bien.h \
    achref/dialog.h \
    achref/employer.h \
    achref/mdp.h \
    achref/utilisateurs.h \
    yah/caisse.h \
    yah/fact.h \
    yah/facture.h \
    yah/gestion_caisse.h \
    yah/menu2.h

FORMS += \
        mainwindow.ui \
    securite/access.ui \
    securite/cam.ui \
    securite/fenetre.ui \
    securite/live.ui \
    securite/cameralive.ui \
    produit/accueil.ui \
    produit/accueilstock.ui \
    produit/affichage.ui \
    produit/ajouterproduit.ui \
    produit/ajouterstock.ui \
    produit/menu.ui \
    produit/modifier.ui \
    produit/suprimer.ui \
    parking/abonnes.ui \
    parking/choix.ui \
    parking/parking.ui \
    parking/signin.ui \
    produit/statis.ui \
    achref/bien.ui \
    achref/dialog.ui \
    achref/mdp.ui \
    yah/dialog.ui \
    yah/fact.ui \
    yah/gestion_caisse.ui \
    yah/menu2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    tsawer.qrc \
    produit/tof.qrc \
    produit/tof2.qrc \
    parking/src.qrc

SUBDIRS += \
    parking/Gestionparking.pro \
    achref/pp3.pro \
    yah/yahyaouiiiii.pro

DISTFILES += \
    achref/pp3.pro.user \
    achref/pp3.pro.user.15a53a5 \
    achref/pp3.pro.user.a7e7a8d \
    yahyaoui/yahyaouiiiii.pro.user \
    yahyaoui/C.mp3 \
    yah/yahyaouiiiii.pro.user \
    yah/yahyaouiiiii.pro.user.8dfeeee
