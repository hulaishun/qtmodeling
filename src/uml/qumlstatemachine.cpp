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
#include "qumlstatemachine.h"
#include "qumlstatemachine_p.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>

QT_BEGIN_NAMESPACE

QUmlStateMachinePrivate::QUmlStateMachinePrivate()
{
}

/*!
    \class QUmlStateMachine

    \inmodule QtUml

    \brief State machines can be used to express the behavior of part of a system. Behavior is modeled as a traversal of a graph of state nodes interconnected by one or more joined transition arcs that are triggered by the dispatching of series of (event) occurrences. During this traversal, the state machine executes a series of activities associated with various elements of the state machine.
 */

QUmlStateMachine::QUmlStateMachine(bool create_d_ptr) :
    QUmlBehavior(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlStateMachinePrivate);
}

// Owned attributes

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
QSet<QUmlPseudostate *> QUmlStateMachine::connectionPoint() const
{
    return QSet<QUmlPseudostate *>();
}

void QUmlStateMachine::addConnectionPoint(QSet<QUmlPseudostate *> connectionPoint)
{
    Q_UNUSED(connectionPoint);
}

void QUmlStateMachine::removeConnectionPoint(QSet<QUmlPseudostate *> connectionPoint)
{
    Q_UNUSED(connectionPoint);
}

/*!
    The state machines of which this is an extension.
 */
QSet<QUmlStateMachine *> QUmlStateMachine::extendedStateMachine() const
{
    return QSet<QUmlStateMachine *>();
}

void QUmlStateMachine::addExtendedStateMachine(QSet<QUmlStateMachine *> extendedStateMachine)
{
    Q_UNUSED(extendedStateMachine);
}

void QUmlStateMachine::removeExtendedStateMachine(QSet<QUmlStateMachine *> extendedStateMachine)
{
    Q_UNUSED(extendedStateMachine);
}

/*!
    The regions owned directly by the state machine.
 */
QSet<QUmlRegion *> QUmlStateMachine::region() const
{
    return QSet<QUmlRegion *>();
}

void QUmlStateMachine::addRegion(QSet<QUmlRegion *> region)
{
    Q_UNUSED(region);
}

void QUmlStateMachine::removeRegion(QSet<QUmlRegion *> region)
{
    Q_UNUSED(region);
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
QSet<QUmlState *> QUmlStateMachine::submachineState() const
{
    return QSet<QUmlState *>();
}

void QUmlStateMachine::addSubmachineState(QSet<QUmlState *> submachineState)
{
    Q_UNUSED(submachineState);
}

void QUmlStateMachine::removeSubmachineState(QSet<QUmlState *> submachineState)
{
    Q_UNUSED(submachineState);
}

// Operations

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QUmlNamespace *QUmlStateMachine::LCA(QUmlState *s1, QUmlState *s2) const
{
    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return 0;
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QUmlStateMachine::ancestor(QUmlState *s1, QUmlState *s2) const
{
    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return bool ();
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QUmlStateMachine::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QUmlStateMachine::isRedefinitionContextValid(QUmlStateMachine *redefined) const
{
    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

