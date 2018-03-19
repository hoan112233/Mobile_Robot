#-------------------------------------------------
#
# Project created by QtCreator 2012-05-02T22:21:50
#
#-------------------------------------------------

QT           += network

TARGET = Controll
TEMPLATE = app


SOURCES += main.cpp\
        controll.cpp \
    server.cpp \
    peermanager.cpp \
    connection.cpp \
    client.cpp

HEADERS  += controll.h \
    client.h \
    server.h \
    peermanager.h \
    connection.h

FORMS    += controll.ui
