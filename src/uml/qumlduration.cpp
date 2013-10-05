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
#include "qumlduration.h"

#include "private/qumldurationobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlObservation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */
QUmlDuration::QUmlDuration(bool createQObject) :
    _expr(0)
{
    if (createQObject)
        _qObject = new QUmlDurationObject(this);
    setPropertyData();
}

QUmlDuration::~QUmlDuration()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlDuration::clone() const
{
    QUmlDuration *c = new QUmlDuration;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    if (expr())
        c->setExpr(dynamic_cast<QUmlValueSpecification *>(expr()->clone()));
    foreach (QUmlObservation *element, observation())
        c->addObservation(dynamic_cast<QUmlObservation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The value of the Duration.
 */
QUmlValueSpecification *QUmlDuration::expr() const
{
    // This is a read-write association end

    return _expr;
}

void QUmlDuration::setExpr(QUmlValueSpecification *expr)
{
    // This is a read-write association end

    if (_expr != expr) {
        // Adjust subsetted properties
        removeOwnedElement(_expr);

        _expr = expr;
        if (expr && expr->asQObject() && this->asQObject())
            QObject::connect(expr->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setExpr()));
        expr->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (expr) {
            addOwnedElement(expr);
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QUmlObservation *> QUmlDuration::observation() const
{
    // This is a read-write association end

    return _observation;
}

void QUmlDuration::addObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (!_observation.contains(observation)) {
        _observation.insert(observation);
        if (observation && observation->asQObject() && this->asQObject())
            QObject::connect(observation->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeObservation(QObject *)));
    }
}

void QUmlDuration::removeObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    if (_observation.contains(observation)) {
        _observation.remove(observation);
    }
}

void QUmlDuration::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::DocumentationRole] = QStringLiteral("The value of the Duration.");
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("expr")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::DocumentationRole] = QStringLiteral("Refers to the time and duration observations that are involved in expr.");
    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("observation")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

