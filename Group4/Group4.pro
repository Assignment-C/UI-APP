QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    brosithst2.cpp \
    brosithst3.cpp \
    classtecher.cpp \
    hea.cpp \
    heaui7.cpp \
    main.cpp \
    mainwindow.cpp \
    reaksaui2.cpp \
    shaun.cpp

HEADERS += \
    brosithst2.h \
    brosithst3.h \
    classtecher.h \
    hea.h \
    heaui7.h \
    mainwindow.h \
    reaksaui2.h \
    shaun.h

FORMS += \
    brosithst2.ui \
    brosithst3.ui \
    classtecher.ui \
    hea.ui \
    heaui7.ui \
    mainwindow.ui \
    reaksaui2.ui \
    shaun.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
