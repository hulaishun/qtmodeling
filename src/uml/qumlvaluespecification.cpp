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
#include "qumlvaluespecification.h"
#include "qumlvaluespecification_p.h"

#include <QtUml/QUmlParameterableElement>

QT_BEGIN_NAMESPACE

QUmlValueSpecificationPrivate::QUmlValueSpecificationPrivate()
{
}

/*!
    \class QUmlValueSpecification

    \inmodule QtUml

    \brief ValueSpecification specializes ParameterableElement to specify that a value specification can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QUmlValueSpecification::QUmlValueSpecification(bool create_d_ptr) :
    QUmlTypedElement(false),
    QUmlPackageableElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlValueSpecificationPrivate);
}

// Operations

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QUmlValueSpecification::booleanValue() const
{
    return bool ();
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
int QUmlValueSpecification::integerValue() const
{
    return int ();
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for ValueSpecification, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlValueSpecification::isCompatibleWith(QUmlParameterableElement *p) const
{
    Q_UNUSED(p);
    return bool ();
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QUmlValueSpecification::isComputable() const
{
    return bool ();
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QUmlValueSpecification::isNull() const
{
    return bool ();
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
double QUmlValueSpecification::realValue() const
{
    return double ();
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QUmlValueSpecification::stringValue() const
{
    return QString ();
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
int QUmlValueSpecification::unlimitedValue() const
{
    return int ();
}

QT_END_NAMESPACE

