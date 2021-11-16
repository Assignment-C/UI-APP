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
    classstudent.cpp \
    codestudent.cpp \
    dropmenu.cpp \
    hea.cpp \
    heaui7.cpp \
    homepage.cpp \
    joincode.cpp \
    listclass.cpp \
    main.cpp \
    mainwindow.cpp \
    reaksaui2.cpp \
    reaksaui3.cpp \
    shaun.cpp \
    shaunui1.cpp \
    shaunui2.cpp \
    shaunui3.cpp

HEADERS += \
    brosithst2.h \
    classstudent.h \
    codestudent.h \
    dropmenu.h \
    hea.h \
    heaui7.h \
    homepage.h \
    joincode.h \
    listclass.h \
    mainwindow.h \
    reaksaui2.h \
    reaksaui3.h \
    shaun.h \
    shaunui1.h \
    shaunui2.h \
    shaunui3.h

FORMS += \
    brosithst2.ui \
    classstudent.ui \
    codestudent.ui \
    dropmenu.ui \
    hea.ui \
    heaui7.ui \
    homepage.ui \
    joincode.ui \
    listclass.ui \
    mainwindow.ui \
    reaksaui2.ui \
    reaksaui3.ui \
    shaun.ui \
    shaunui1.ui \
    shaunui2.ui \
    shaunui3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
