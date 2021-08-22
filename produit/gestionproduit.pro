#-------------------------------------------------
#
# Project created by QtCreator 2018-11-10T13:08:26
#
#-------------------------------------------------

QT +=    core gui multimedia multimediawidgets

QT +=    sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gestionproduit
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
    accueil.cpp \
    ajouterproduit.cpp \
    connexion.cpp \
    produit.cpp \
    suprimer.cpp \
    modifier.cpp \
    affichage.cpp \
    menu.cpp \
    stock.cpp \
    accueilstock.cpp \
    notification.cpp

HEADERS += \
        mainwindow.h \
    accueil.h \
    ajouterproduit.h \
    connexion.h \
    produit.h \
    suprimer.h \
    modifier.h \
    affichage.h \
    menu.h \
    stock.h \
    accueilstock.h \
    notification.h

FORMS += \
        mainwindow.ui \
    accueil.ui \
    ajouterproduit.ui \
    suprimer.ui \
    modifier.ui \
    affichage.ui \
    menu.ui \
    accueilstock.ui
QMAKE_CXXFLAGS += -std=gnu++14
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    tof.qrc \
    tof2.qrc
QMAKE_CXXFLAGS += -std=gnu++14
