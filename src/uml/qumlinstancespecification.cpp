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
#include "qumlinstancespecification.h"

#include "private/qumlinstancespecificationobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>
/*!
    \class QUmlInstanceSpecification

    \inmodule QtUml

    \brief An instance specification has the capability of being a deployment target in a deployment relationship, in the case that it is an instance of a node. It is also has the capability of being a deployed artifact, if it is an instance of an artifact.An instance specification is a model element that represents an instance in a modeled system.
 */
QUmlInstanceSpecification::QUmlInstanceSpecification(bool createQObject) :
    _specification(0)
{
    if (createQObject)
        _qObject = new QUmlInstanceSpecificationObject(this);
    setPropertyData();
}

QUmlInstanceSpecification::~QUmlInstanceSpecification()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlInstanceSpecification::clone() const
{
    QUmlInstanceSpecification *c = new QUmlInstanceSpecification;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlDeployment *element, deployment())
        c->addDeployment(dynamic_cast<QUmlDeployment *>(element->clone()));
    foreach (QUmlClassifier *element, classifier())
        c->addClassifier(dynamic_cast<QUmlClassifier *>(element->clone()));
    foreach (QUmlSlot *element, slot_())
        c->addSlot(dynamic_cast<QUmlSlot *>(element->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QUmlValueSpecification *>(specification()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.
 */
const QSet<QUmlClassifier *> QUmlInstanceSpecification::classifier() const
{
    // This is a read-write association end

    return _classifier;
}

void QUmlInstanceSpecification::addClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (!_classifier.contains(classifier)) {
        _classifier.insert(classifier);
        if (classifier->asQObject() && this->asQObject())
            QObject::connect(classifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeClassifier(QObject *)));
    }
}

void QUmlInstanceSpecification::removeClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    if (_classifier.contains(classifier)) {
        _classifier.remove(classifier);
    }
}

/*!
    A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.
 */
const QSet<QUmlSlot *> QUmlInstanceSpecification::slot_() const
{
    // This is a read-write association end

    return _slot_;
}

void QUmlInstanceSpecification::addSlot(QUmlSlot *slot_)
{
    // This is a read-write association end

    if (!_slot_.contains(slot_)) {
        _slot_.insert(slot_);
        if (slot_->asQObject() && this->asQObject())
            QObject::connect(slot_->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSlot(QObject *)));
        slot_->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(slot_);

        // Adjust opposite properties
        if (slot_) {
            slot_->setOwningInstance(this);
        }
    }
}

void QUmlInstanceSpecification::removeSlot(QUmlSlot *slot_)
{
    // This is a read-write association end

    if (_slot_.contains(slot_)) {
        _slot_.remove(slot_);
        if (slot_->asQObject())
            slot_->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(slot_);

        // Adjust opposite properties
        if (slot_) {
            slot_->setOwningInstance(0);
        }
    }
}

/*!
    A specification of how to compute, derive, or construct the instance.
 */
QUmlValueSpecification *QUmlInstanceSpecification::specification() const
{
    // This is a read-write association end

    return _specification;
}

void QUmlInstanceSpecification::setSpecification(QUmlValueSpecification *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        // Adjust subsetted properties
        removeOwnedElement(_specification);

        _specification = specification;
        if (specification->asQObject() && this->asQObject())
            QObject::connect(specification->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setSpecification()));
        specification->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        if (specification) {
            addOwnedElement(specification);
        }
    }
}

void QUmlInstanceSpecification::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::DocumentationRole] = QStringLiteral("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them.");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("classifier")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::DocumentationRole] = QStringLiteral("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description.");
    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("slot")][QtModeling::OppositeEndRole] = QStringLiteral("Slot-owningInstance");

    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::AggregationRole] = QStringLiteral("composite");    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::DocumentationRole] = QStringLiteral("A specification of how to compute, derive, or construct the instance.");
    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("specification")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

