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
#include "qumlinformationflow.h"

#include "private/qumlinformationflowobject_p.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlRelationship>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
/*!
    \class QUmlInformationFlow

    \inmodule QtUml

    \brief An information flow specifies that one or more information items circulates from its sources to its targets. Information flows require some kind of information channel for transmitting information items from the source to the destination. An information channel is represented in various ways depending on the nature of its sources and targets. It may be represented by connectors, links, associations, or even dependencies. For example, if the source and destination are parts in some composite structure such as a collaboration, then the information channel is likely to be represented by a connector between them. Or, if the source and target are objects (which are a kind of instance specification), they may be represented by a link that joins the two, and so on.
 */
QUmlInformationFlow::QUmlInformationFlow(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlInformationFlowObject(this);
    setPropertyData();
}

QUmlInformationFlow::~QUmlInformationFlow()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInformationFlow::clone() const
{
    QUmlInformationFlow *c = new QUmlInformationFlow;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlClassifier *element, conveyed())
        c->addConveyed(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlNamedElement *element, informationSource())
        c->addInformationSource(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlNamedElement *element, informationTarget())
        c->addInformationTarget(dynamic_cast<QUmlNamedElement *>(element->clone()));
    foreach (QUmlRelationship *element, realization())
        c->addRealization(dynamic_cast<QUmlRelationship *>(element->clone()));
    foreach (QUmlActivityEdge *element, realizingActivityEdge())
        c->addRealizingActivityEdge(dynamic_cast<QUmlActivityEdge *>(element->clone()));
    foreach (QUmlConnector *element, realizingConnector())
        c->addRealizingConnector(dynamic_cast<QUmlConnector *>(element->clone()));
    foreach (QUmlMessage *element, realizingMessage())
        c->addRealizingMessage(dynamic_cast<QUmlMessage *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies the information items that may circulate on this information flow.
 */
const QSet<QUmlClassifier *> QUmlInformationFlow::conveyed() const
{
    // This is a read-write association end

    return _conveyed;
}

void QUmlInformationFlow::addConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    if (!_conveyed.contains(conveyed)) {
        _conveyed.insert(conveyed);
        if (conveyed && conveyed->asQObject() && this->asQObject())
            QObject::connect(conveyed->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConveyed(QObject *)));
    }
}

void QUmlInformationFlow::removeConveyed(QUmlClassifier *conveyed)
{
    // This is a read-write association end

    if (_conveyed.contains(conveyed)) {
        _conveyed.remove(conveyed);
    }
}

/*!
    Defines from which source the conveyed InformationItems are initiated.
 */
const QSet<QUmlNamedElement *> QUmlInformationFlow::informationSource() const
{
    // This is a read-write association end

    return _informationSource;
}

void QUmlInformationFlow::addInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    if (!_informationSource.contains(informationSource)) {
        _informationSource.insert(informationSource);
        if (informationSource && informationSource->asQObject() && this->asQObject())
            QObject::connect(informationSource->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInformationSource(QObject *)));

        // Adjust subsetted properties
        addSource(informationSource);
    }
}

void QUmlInformationFlow::removeInformationSource(QUmlNamedElement *informationSource)
{
    // This is a read-write association end

    if (_informationSource.contains(informationSource)) {
        _informationSource.remove(informationSource);

        // Adjust subsetted properties
        removeSource(informationSource);
    }
}

/*!
    Defines to which target the conveyed InformationItems are directed.
 */
const QSet<QUmlNamedElement *> QUmlInformationFlow::informationTarget() const
{
    // This is a read-write association end

    return _informationTarget;
}

void QUmlInformationFlow::addInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    if (!_informationTarget.contains(informationTarget)) {
        _informationTarget.insert(informationTarget);
        if (informationTarget && informationTarget->asQObject() && this->asQObject())
            QObject::connect(informationTarget->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeInformationTarget(QObject *)));

        // Adjust subsetted properties
        addTarget(informationTarget);
    }
}

void QUmlInformationFlow::removeInformationTarget(QUmlNamedElement *informationTarget)
{
    // This is a read-write association end

    if (_informationTarget.contains(informationTarget)) {
        _informationTarget.remove(informationTarget);

        // Adjust subsetted properties
        removeTarget(informationTarget);
    }
}

/*!
    Determines which Relationship will realize the specified flow
 */
const QSet<QUmlRelationship *> QUmlInformationFlow::realization() const
{
    // This is a read-write association end

    return _realization;
}

void QUmlInformationFlow::addRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    if (!_realization.contains(realization)) {
        _realization.insert(realization);
        if (realization && realization->asQObject() && this->asQObject())
            QObject::connect(realization->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRealization(QObject *)));
    }
}

void QUmlInformationFlow::removeRealization(QUmlRelationship *realization)
{
    // This is a read-write association end

    if (_realization.contains(realization)) {
        _realization.remove(realization);
    }
}

/*!
    Determines which ActivityEdges will realize the specified flow.
 */
const QSet<QUmlActivityEdge *> QUmlInformationFlow::realizingActivityEdge() const
{
    // This is a read-write association end

    return _realizingActivityEdge;
}

void QUmlInformationFlow::addRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    if (!_realizingActivityEdge.contains(realizingActivityEdge)) {
        _realizingActivityEdge.insert(realizingActivityEdge);
        if (realizingActivityEdge && realizingActivityEdge->asQObject() && this->asQObject())
            QObject::connect(realizingActivityEdge->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRealizingActivityEdge(QObject *)));
    }
}

void QUmlInformationFlow::removeRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge)
{
    // This is a read-write association end

    if (_realizingActivityEdge.contains(realizingActivityEdge)) {
        _realizingActivityEdge.remove(realizingActivityEdge);
    }
}

/*!
    Determines which Connectors will realize the specified flow.
 */
const QSet<QUmlConnector *> QUmlInformationFlow::realizingConnector() const
{
    // This is a read-write association end

    return _realizingConnector;
}

void QUmlInformationFlow::addRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    if (!_realizingConnector.contains(realizingConnector)) {
        _realizingConnector.insert(realizingConnector);
        if (realizingConnector && realizingConnector->asQObject() && this->asQObject())
            QObject::connect(realizingConnector->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRealizingConnector(QObject *)));
    }
}

void QUmlInformationFlow::removeRealizingConnector(QUmlConnector *realizingConnector)
{
    // This is a read-write association end

    if (_realizingConnector.contains(realizingConnector)) {
        _realizingConnector.remove(realizingConnector);
    }
}

/*!
    Determines which Messages will realize the specified flow.
 */
const QSet<QUmlMessage *> QUmlInformationFlow::realizingMessage() const
{
    // This is a read-write association end

    return _realizingMessage;
}

void QUmlInformationFlow::addRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    if (!_realizingMessage.contains(realizingMessage)) {
        _realizingMessage.insert(realizingMessage);
        if (realizingMessage && realizingMessage->asQObject() && this->asQObject())
            QObject::connect(realizingMessage->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRealizingMessage(QObject *)));
    }
}

void QUmlInformationFlow::removeRealizingMessage(QUmlMessage *realizingMessage)
{
    // This is a read-write association end

    if (_realizingMessage.contains(realizingMessage)) {
        _realizingMessage.remove(realizingMessage);
    }
}

void QUmlInformationFlow::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::DocumentationRole] = QStringLiteral("Specifies the information items that may circulate on this information flow.");
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("conveyed")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::DocumentationRole] = QStringLiteral("Defines from which source the conveyed InformationItems are initiated.");
    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-source");
    QModelingObject::propertyDataHash[QStringLiteral("informationSource")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::DocumentationRole] = QStringLiteral("Defines to which target the conveyed InformationItems are directed.");
    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("DirectedRelationship-target");
    QModelingObject::propertyDataHash[QStringLiteral("informationTarget")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::DocumentationRole] = QStringLiteral("Determines which Relationship will realize the specified flow");
    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realization")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::DocumentationRole] = QStringLiteral("Determines which ActivityEdges will realize the specified flow.");
    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingActivityEdge")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::DocumentationRole] = QStringLiteral("Determines which Connectors will realize the specified flow.");
    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingConnector")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::DocumentationRole] = QStringLiteral("Determines which Messages will realize the specified flow.");
    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("realizingMessage")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

