/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qstructuredclassifier.h"
//#include "qstructuredclassifier_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QStructuredClassifier

    \inmodule QtUml

    \brief A structured classifier is an abstract metaclass that represents any classifier whose behavior can be fully or partly described by the collaboration of owned or referenced instances.
 */

QStructuredClassifier::QStructuredClassifier()
{
}

QStructuredClassifier::~QStructuredClassifier()
{
}

/*!
    References the properties owned by the classifier.
 */
QList<QProperty *> *QStructuredClassifier::ownedAttributes()
{
}

/*!
    References the connectors owned by the classifier.
 */
QList<QConnector *> *QStructuredClassifier::ownedConnectors()
{
}

/*!
    References the roles that instances may play in this classifier.
 */
const QList<QConnectableElement *> *QStructuredClassifier::roles() const
{
}

/*!
    Missing derivation for StructuredClassifier::/part : Property
 */
const QList<QProperty *> *QStructuredClassifier::parts() const
{
}

QT_END_NAMESPACE_QTUML
