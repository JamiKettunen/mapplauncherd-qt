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

#ifndef QTBOOSTER_H
#define QTBOOSTER_H

#include "booster.h"

/*!
 * \class QtBooster.
 * \brief Qt-specific version of the Booster.
 */
class QtBooster : public Booster
{
public:
    //! Constructor.
    QtBooster() {}

    //! Destructor.
    virtual ~QtBooster() {}

    //! \reimp
    virtual const string & boosterType() const;

protected:
    //! \reimp
    virtual bool preload();

private:

    //! Disable copy-constructor
    QtBooster(const QtBooster & r);

    //! Disable assignment operator
    QtBooster & operator= (const QtBooster & r);

    static const string m_boosterType;

#ifdef UNIT_TEST
    friend class Ut_QtBooster;
#endif
};

#endif //QTBOOSTER_H
