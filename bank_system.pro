#-------------------------------------------------
#
# Project created by QtCreator 2024-08-26T11:19:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bank_system
TEMPLATE = app


SOURCES += main.cpp\
        bank.cpp \
    creatdispoit.cpp \
    bankserver.cpp \
    accountlist.cpp \
    choice.cpp \
    deposit.cpp \
    withdraw.cpp \
    flowlist.cpp \
    changepassword.cpp \
    enroll.cpp \
    interest.cpp \
    preparation.cpp

HEADERS  += bank.h \
    creatdispoit.h \
    bankserver.h \
    accountlist.h \
    choice.h \
    deposit.h \
    withdraw.h \
    flowlist.h \
    changepassword.h \
    enroll.h \
    interest.h \
    preparation.h

FORMS    += bank.ui \
    creatdispoit.ui \
    accountlist.ui \
    choice.ui \
    deposit.ui \
    withdraw.ui \
    flowlist.ui \
    changepassword.ui \
    enroll.ui
