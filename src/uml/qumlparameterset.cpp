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
#include "qumlparameterset.h"
#include "qumlparameterset_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlParameter>

QT_BEGIN_NAMESPACE

QUmlParameterSetPrivate::QUmlParameterSetPrivate()
{
}

/*!
    \class QUmlParameterSet

    \inmodule QtUml

    \brief A parameter set is an element that provides alternative sets of inputs or outputs that a behavior may use.
 */

QUmlParameterSet::QUmlParameterSet(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlParameterSetPrivate);
}

// Owned attributes

/*!
    Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied.
 */
QSet<QUmlConstraint *> QUmlParameterSet::condition() const
{
    return QSet<QUmlConstraint *>();
}

void QUmlParameterSet::addCondition(QSet<QUmlConstraint *> condition)
{
    Q_UNUSED(condition);
}

void QUmlParameterSet::removeCondition(QSet<QUmlConstraint *> condition)
{
    Q_UNUSED(condition);
}

/*!
    Parameters in the parameter set.
 */
QSet<QUmlParameter *> QUmlParameterSet::parameter() const
{
    return QSet<QUmlParameter *>();
}

void QUmlParameterSet::addParameter(QSet<QUmlParameter *> parameter)
{
    Q_UNUSED(parameter);
}

void QUmlParameterSet::removeParameter(QSet<QUmlParameter *> parameter)
{
    Q_UNUSED(parameter);
}

QT_END_NAMESPACE

