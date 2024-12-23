QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    LasRead.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    LasReader.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT += core gui widgets opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# Добавьте пути к заголовочным файлам и библиотекам libLAS
INCLUDEPATH += C:/OSGeo4W/include
LIBS += -C/OSGeo4W/lib -llas

# Добавьте пути к заголовочным файлам и библиотекам FFmpeg
INCLUDEPATH += /path/to/ffmpeg/include
LIBS += -C/ffmpeg/lib -lavformat -lavcodec -lavutil -lswscale
