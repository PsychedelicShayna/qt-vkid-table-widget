TEMPLATE = app
QT += core gui widgets

CONFIG += c++17
QMAKE_CXXFLAGS += /std:c++17

INCLUDEPATH += source/
SOURCES     += source/vkid_table_widget.cpp
HEADERS     += source/vkid_table_widget.hpp

SOURCES += \
    source-impl/main.cpp \
    source-impl/main_window_dialog.cxx

HEADERS += \
    source-impl/main_window_dialog.hxx

FORMS += \
    source-impl/main_window_dialog.ui
