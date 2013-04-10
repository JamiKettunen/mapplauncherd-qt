/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of applauncherd
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/

#include "qtbooster.h"
#include <QtGlobal>

#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#define BOOSTER_NAME "q"
#else
#define BOOSTER_NAME "5"
#endif

const string QtBooster::m_socketId = "/tmp/boost" BOOSTER_NAME;
const string QtBooster::m_temporaryProcessName = "booster-" BOOSTER_NAME;

const string & QtBooster::socketId() const
{
    return m_socketId;
}

const string & QtBooster::socketName()
{
    return m_socketId;
}

const string & QtBooster::temporaryProcessName()
{
    return m_temporaryProcessName;
}

const string & QtBooster::boosterTemporaryProcessName() const
{
    return temporaryProcessName();
}

char QtBooster::type()
{
    return BOOSTER_NAME[0];
}

bool QtBooster::preload()
{
    return true;
}
