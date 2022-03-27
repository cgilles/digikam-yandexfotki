#
# Copyright (c) 2010-2022 by Gilles Caulier, <caulier dot gilles at gmail dot com>
# Copyright (c) 2018      by Maik Qualmann, <metzpinguin at gmail dot com>
#
# Redistribution and use is allowed according to the terms of the BSD license.
# For details see the accompanying COPYING-CMAKE-SCRIPTS file.

set(yandexfotkiplugin_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/yfauth/yfauth.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfauth/yfrsa.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfalbum.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yftalker.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfphoto.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfnewalbumdlg.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfwindow.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfwidget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/yfplugin.cpp
)

add_library(Generic_YandexFotki_Plugin
            MODULE ${yandexfotkiplugin_SRCS})

set_target_properties(Generic_YandexFotki_Plugin PROPERTIES PREFIX "")

target_link_libraries(Generic_YandexFotki_Plugin
                      Digikam::digikamcore

                      Qt5::Core
                      Qt5::Widgets
                      Qt5::Gui
                      Qt5::Xml
                      Qt5::WebEngineWidgets

                      KF5::ConfigCore
                      KF5::I18n
)

MACRO_ADD_PLUGIN_INSTALL_TARGET(Generic_YandexFotki_Plugin generic)
