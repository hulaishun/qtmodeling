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
#include "qumlprotocolconformance.h"
#include "qumlprotocolconformance_p.h"

#include <QtUml/QUmlProtocolStateMachine>

QT_BEGIN_NAMESPACE

QUmlProtocolConformancePrivate::QUmlProtocolConformancePrivate() :
    generalMachine(0),
    specificMachine(0)
{
}

/*!
    \class QUmlProtocolConformance

    \inmodule QtUml

    \brief Protocol state machines can be redefined into more specific protocol state machines, or into behavioral state machines. Protocol conformance declares that the specific protocol state machine specifies a protocol that conforms to the general state machine one, or that the specific behavioral state machine abide by the protocol of the general protocol state machine.
 */

QUmlProtocolConformance::QUmlProtocolConformance(bool create_d_ptr) :
    QUmlDirectedRelationship(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlProtocolConformancePrivate);
}

// Owned attributes

/*!
    Specifies the protocol state machine to which the specific state machine conforms.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::generalMachine() const
{
    return 0;
}

void QUmlProtocolConformance::setGeneralMachine(QUmlProtocolStateMachine *generalMachine)
{
    Q_UNUSED(generalMachine);
}

/*!
    Specifies the state machine which conforms to the general state machine.
 */
QUmlProtocolStateMachine *QUmlProtocolConformance::specificMachine() const
{
    return 0;
}

void QUmlProtocolConformance::setSpecificMachine(QUmlProtocolStateMachine *specificMachine)
{
    Q_UNUSED(specificMachine);
}

QT_END_NAMESPACE

