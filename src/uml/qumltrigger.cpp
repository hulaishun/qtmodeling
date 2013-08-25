/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumltrigger.h"
#include "qumltrigger_p.h"

#include <QtUml/QUmlEvent>
#include <QtUml/QUmlPort>

QT_BEGIN_NAMESPACE

QUmlTriggerPrivate::QUmlTriggerPrivate() :
    event(0)
{
}

/*!
    \class QUmlTrigger

    \inmodule QtUml

    \brief A trigger specification may be qualified by the port on which the event occurred.A trigger relates an event to a behavior that may affect an instance of the classifier.
 */

QUmlTrigger::QUmlTrigger(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlTriggerPrivate);
}

// Owned attributes

/*!
    The event that causes the trigger.
 */
QUmlEvent *QUmlTrigger::event() const
{
    return 0;
}

void QUmlTrigger::setEvent(QUmlEvent *event)
{
    Q_UNUSED(event);
}

/*!
    A optional port of the receiver object on which the behavioral feature is invoked.
 */
QSet<QUmlPort *> QUmlTrigger::port() const
{
    return QSet<QUmlPort *>();
}

void QUmlTrigger::addPort(QSet<QUmlPort *> port)
{
    Q_UNUSED(port);
}

void QUmlTrigger::removePort(QSet<QUmlPort *> port)
{
    Q_UNUSED(port);
}

QT_END_NAMESPACE

