QT       += core

QT       -= gui

TARGET = Stack
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    LinkList.cpp \
    StackList.cpp

HEADERS += \
    LinkList.h \
    StackList.h
