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
#include "qumlreplyaction.h"
#include "qumlreplyaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlReplyActionPrivate::QUmlReplyActionPrivate() :
    replyToCall(0),
    returnInformation(0)
{
}

/*!
    \class QUmlReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

QUmlReplyAction::QUmlReplyAction(bool create_d_ptr) :
    QUmlAction(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlReplyActionPrivate);
}

// Owned attributes

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QUmlTrigger *QUmlReplyAction::replyToCall() const
{
    return 0;
}

void QUmlReplyAction::setReplyToCall(QUmlTrigger *replyToCall)
{
    Q_UNUSED(replyToCall);
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
QSet<QUmlInputPin *> QUmlReplyAction::replyValue() const
{
    return QSet<QUmlInputPin *>();
}

void QUmlReplyAction::addReplyValue(QSet<QUmlInputPin *> replyValue)
{
    Q_UNUSED(replyValue);
}

void QUmlReplyAction::removeReplyValue(QSet<QUmlInputPin *> replyValue)
{
    Q_UNUSED(replyValue);
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QUmlInputPin *QUmlReplyAction::returnInformation() const
{
    return 0;
}

void QUmlReplyAction::setReturnInformation(QUmlInputPin *returnInformation)
{
    Q_UNUSED(returnInformation);
}

QT_END_NAMESPACE

