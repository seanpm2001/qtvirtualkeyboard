/****************************************************************************
**
** Copyright (C) 2022 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Virtual Keyboard module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
******************************************************************************/

#ifndef QTVIRTUALKEYBOARDCERENCEHWRPLUGIN_H
#define QTVIRTUALKEYBOARDCERENCEHWRPLUGIN_H

#include <QVirtualKeyboardExtensionPlugin>

QT_BEGIN_NAMESPACE

class QtVirtualKeyboardCerenceHwrPlugin : public QVirtualKeyboardExtensionPlugin
{
    Q_OBJECT
    Q_INTERFACES(QVirtualKeyboardExtensionPlugin)
    Q_PLUGIN_METADATA(IID QVirtualKeyboardExtensionPluginFactoryInterface_iid
                      FILE "cerence_hwr.json")
public:
    void registerTypes(const char *uri) const;
};

QT_END_NAMESPACE

#endif