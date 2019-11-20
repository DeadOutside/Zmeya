TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Figure.cpp \
        hline.cpp \
        main.cpp \
        snake.cpp \
        tochka.cpp \
        vline.cpp

HEADERS += \
    Figure.h \
    Snake.h \
    Tochka.h \
    direction.h \
    hLine.h \
    vLine.h
