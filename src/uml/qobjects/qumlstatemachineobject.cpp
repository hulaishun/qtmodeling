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
#include "qumlstatemachineobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlBehavioralFeature>
#include <QtUml/QUmlBehavioredClassifier>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClassifierTemplateParameter>
#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlConnector>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlFeature>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlInterfaceRealization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlReception>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRedefinableTemplateSignature>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlSubstitution>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlStateMachineObject::QUmlStateMachineObject(QUmlStateMachine *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateMachineObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateMachineObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStateMachineObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->name();
}

QObject *QUmlStateMachineObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStateMachineObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStateMachineObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStateMachineObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStateMachineObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStateMachineObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->visibility();
}

// OWNED ATTRIBUTES [Type]

QObject *QUmlStateMachineObject::package() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->package()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStateMachineObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStateMachineObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TemplateableElement]

const QSet<QObject *> QUmlStateMachineObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Classifier]

const QSet<QObject *> QUmlStateMachineObject::attributes() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->attributes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::collaborationUses() const
{
    QSet<QObject *> set;
    foreach (QUmlCollaborationUse *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->collaborationUses())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::features() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->features())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::inheritedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inheritedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isFinalSpecialization() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isFinalSpecialization();
}

QObject *QUmlStateMachineObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::ownedUseCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedUseCases())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::powertypeExtents() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->powertypeExtents())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::redefinedClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->redefinedClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::representation() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->representation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->representation()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::substitutions() const
{
    QSet<QObject *> set;
    foreach (QUmlSubstitution *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->substitutions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->templateParameter()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::useCases() const
{
    QSet<QObject *> set;
    foreach (QUmlUseCase *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->useCases())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StructuredClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedConnectors() const
{
    QSet<QObject *> set;
    foreach (QUmlConnector *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedConnectors())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::parts() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::roles() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->roles())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [EncapsulatedClassifier]

const QSet<QObject *> QUmlStateMachineObject::ownedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [BehavioredClassifier]

QObject *QUmlStateMachineObject::classifierBehavior() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->classifierBehavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->classifierBehavior()->asQModelingObject();
}

const QSet<QObject *> QUmlStateMachineObject::interfaceRealizations() const
{
    QSet<QObject *> set;
    foreach (QUmlInterfaceRealization *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->interfaceRealizations())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::ownedBehaviors() const
{
    QSet<QObject *> set;
    foreach (QUmlBehavior *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedBehaviors())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Class]

const QSet<QObject *> QUmlStateMachineObject::extensions() const
{
    QSet<QObject *> set;
    foreach (QUmlExtension *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->extensions())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isAbstract() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isAbstract();
}

bool QUmlStateMachineObject::isActive() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isActive();
}

const QList<QObject *> QUmlStateMachineObject::nestedClassifiers() const
{
    QList<QObject *> list;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->nestedClassifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedAttributes() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedAttributes())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlStateMachineObject::ownedOperations() const
{
    QList<QObject *> list;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedOperations())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedReceptions() const
{
    QSet<QObject *> set;
    foreach (QUmlReception *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedReceptions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::superClasses() const
{
    QSet<QObject *> set;
    foreach (QUmlClass *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->superClasses())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Behavior]

QObject *QUmlStateMachineObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->context()->asQModelingObject();
}

bool QUmlStateMachineObject::isReentrant() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isReentrant();
}

const QList<QObject *> QUmlStateMachineObject::ownedParameters() const
{
    QList<QObject *> list;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedParameters())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlStateMachineObject::ownedParameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ownedParameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::postconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->postconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::preconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->preconditions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateMachineObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [StateMachine]

const QSet<QObject *> QUmlStateMachineObject::connectionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->connectionPoints())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::extendedStateMachines() const
{
    QSet<QObject *> set;
    foreach (QUmlStateMachine *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->extendedStateMachines())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::regions() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->regions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateMachineObject::submachineStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->submachineStates())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateMachineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateMachineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateMachineObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStateMachineObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlStateMachineObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStateMachineObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->membersAreDistinguishable();
}

// OPERATIONS [ParameterableElement]

bool QUmlStateMachineObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStateMachineObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isTemplateParameter();
}

// OPERATIONS [Type]

// OPERATIONS [RedefinableElement]

// OPERATIONS [TemplateableElement]

QSet<QObject *> QUmlStateMachineObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Classifier]

QSet<QObject *> QUmlStateMachineObject::allFeatures() const
{
    QSet<QObject *> set;
    foreach (QUmlFeature *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allFeatures())
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStateMachineObject::allParents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->allParents())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::conformsTo(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->conformsTo(qmodelingelementproperty_cast<QUmlClassifier *>(other));
}

bool QUmlStateMachineObject::hasVisibilityOf(QObject *n) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->hasVisibilityOf(qmodelingelementproperty_cast<QUmlNamedElement *>(n));
}

QSet<QObject *> QUmlStateMachineObject::inheritableMembers(QObject *c) const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inheritableMembers(qmodelingelementproperty_cast<QUmlClassifier *>(c)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateMachineObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isTemplate();
}

bool QUmlStateMachineObject::maySpecializeType(QObject *c) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->maySpecializeType(qmodelingelementproperty_cast<QUmlClassifier *>(c));
}

QSet<QObject *> QUmlStateMachineObject::parents() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->parents())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Class]

QSet<QObject *> QUmlStateMachineObject::inherit(QSet<QObject *> inhs) const
{
    QSet<QUmlNamedElement *> inhsConverted;
    foreach (QObject *object, inhs)
        inhsConverted.insert(qmodelingelementproperty_cast<QUmlNamedElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStateMachine *>(this)->inherit(inhsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [StateMachine]

QObject *QUmlStateMachineObject::LCA(QObject *s1, QObject *s2) const
{
    if (!qmodelingelementproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2)))
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->LCA(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2))->asQModelingObject();
}

bool QUmlStateMachineObject::ancestor(QObject *s1, QObject *s2) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->ancestor(qmodelingelementproperty_cast<QUmlState *>(s1), qmodelingelementproperty_cast<QUmlState *>(s2));
}

bool QUmlStateMachineObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStateMachineObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlStateMachine *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlStateMachine *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateMachineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlStateMachineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlStateMachineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlStateMachineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlStateMachineObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateMachineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlStateMachineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlStateMachineObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlStateMachineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlStateMachineObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlStateMachineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStateMachineObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QUmlStateMachineObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QUmlStateMachineObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QUmlStateMachineObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QUmlStateMachineObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
    emit membersChanged(this->members());
}

void QUmlStateMachineObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
    emit membersChanged(this->members());
}

void QUmlStateMachineObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QUmlStateMachineObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QUmlStateMachineObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QUmlStateMachineObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QUmlStateMachineObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QUmlStateMachineObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStateMachineObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
    emit owningTemplateParameterChanged(this->owningTemplateParameter());
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStateMachineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QUmlStateMachineObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtUml::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Type]

void QUmlStateMachineObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setPackage(qmodelingelementproperty_cast<QUmlPackage *>(package));
    emit packageChanged(this->package());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStateMachineObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlStateMachineObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlStateMachineObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlStateMachineObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlStateMachineObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlStateMachineObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStateMachineObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
    emit templateBindingsChanged(this->templateBindings());
}

void QUmlStateMachineObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
    emit templateBindingsChanged(this->templateBindings());
}

// SLOTS FOR OWNED ATTRIBUTES [Classifier]

void QUmlStateMachineObject::addAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
    emit attributesChanged(this->attributes());
}

void QUmlStateMachineObject::removeAttribute(QObject *attribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeAttribute(qmodelingelementproperty_cast<QUmlProperty *>(attribute));
    emit attributesChanged(this->attributes());
}

void QUmlStateMachineObject::addCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
    emit collaborationUsesChanged(this->collaborationUses());
}

void QUmlStateMachineObject::removeCollaborationUse(QObject *collaborationUse)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeCollaborationUse(qmodelingelementproperty_cast<QUmlCollaborationUse *>(collaborationUse));
    emit collaborationUsesChanged(this->collaborationUses());
}

void QUmlStateMachineObject::addFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
    emit featuresChanged(this->features());
}

void QUmlStateMachineObject::removeFeature(QObject *feature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeFeature(qmodelingelementproperty_cast<QUmlFeature *>(feature));
    emit featuresChanged(this->features());
}

void QUmlStateMachineObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
    emit generalizationsChanged(this->generalizations());
}

void QUmlStateMachineObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
    emit generalizationsChanged(this->generalizations());
}

void QUmlStateMachineObject::addInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
    emit inheritedMembersChanged(this->inheritedMembers());
}

void QUmlStateMachineObject::removeInheritedMember(QObject *inheritedMember)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeInheritedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(inheritedMember));
    emit inheritedMembersChanged(this->inheritedMembers());
}

void QUmlStateMachineObject::setFinalSpecialization(bool isFinalSpecialization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setFinalSpecialization(isFinalSpecialization);
    emit isFinalSpecializationChanged(this->isFinalSpecialization());
}

void QUmlStateMachineObject::unsetFinalSpecialization()
{
    Q_D(QModelingObject);
    setFinalSpecialization(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isFinalSpecialization"));
}

void QUmlStateMachineObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlRedefinableTemplateSignature *>(ownedTemplateSignature));
    emit ownedTemplateSignatureChanged(this->ownedTemplateSignature());
}

void QUmlStateMachineObject::addOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
    emit ownedUseCasesChanged(this->ownedUseCases());
}

void QUmlStateMachineObject::removeOwnedUseCase(QObject *ownedUseCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(ownedUseCase));
    emit ownedUseCasesChanged(this->ownedUseCases());
}

void QUmlStateMachineObject::addPowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
    emit powertypeExtentsChanged(this->powertypeExtents());
}

void QUmlStateMachineObject::removePowertypeExtent(QObject *powertypeExtent)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePowertypeExtent(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(powertypeExtent));
    emit powertypeExtentsChanged(this->powertypeExtents());
}

void QUmlStateMachineObject::addRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
    emit redefinedClassifiersChanged(this->redefinedClassifiers());
}

void QUmlStateMachineObject::removeRedefinedClassifier(QObject *redefinedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRedefinedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(redefinedClassifier));
    emit redefinedClassifiersChanged(this->redefinedClassifiers());
}

void QUmlStateMachineObject::setRepresentation(QObject *representation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setRepresentation(qmodelingelementproperty_cast<QUmlCollaborationUse *>(representation));
    emit representationChanged(this->representation());
}

void QUmlStateMachineObject::addSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
    emit substitutionsChanged(this->substitutions());
}

void QUmlStateMachineObject::removeSubstitution(QObject *substitution)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSubstitution(qmodelingelementproperty_cast<QUmlSubstitution *>(substitution));
    emit substitutionsChanged(this->substitutions());
}

void QUmlStateMachineObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlClassifierTemplateParameter *>(templateParameter));
    emit templateParameterChanged(this->templateParameter());
}

void QUmlStateMachineObject::addUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
    emit useCasesChanged(this->useCases());
}

void QUmlStateMachineObject::removeUseCase(QObject *useCase)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeUseCase(qmodelingelementproperty_cast<QUmlUseCase *>(useCase));
    emit useCasesChanged(this->useCases());
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredClassifier]

void QUmlStateMachineObject::addOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
    emit ownedConnectorsChanged(this->ownedConnectors());
}

void QUmlStateMachineObject::removeOwnedConnector(QObject *ownedConnector)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedConnector(qmodelingelementproperty_cast<QUmlConnector *>(ownedConnector));
    emit ownedConnectorsChanged(this->ownedConnectors());
}

void QUmlStateMachineObject::addPart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPart(qmodelingelementproperty_cast<QUmlProperty *>(part));
    emit partsChanged(this->parts());
}

void QUmlStateMachineObject::removePart(QObject *part)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePart(qmodelingelementproperty_cast<QUmlProperty *>(part));
    emit partsChanged(this->parts());
}

void QUmlStateMachineObject::addRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
    emit rolesChanged(this->roles());
}

void QUmlStateMachineObject::removeRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
    emit rolesChanged(this->roles());
}

// SLOTS FOR OWNED ATTRIBUTES [EncapsulatedClassifier]

void QUmlStateMachineObject::addOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
    emit ownedPortsChanged(this->ownedPorts());
}

void QUmlStateMachineObject::removeOwnedPort(QObject *ownedPort)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedPort(qmodelingelementproperty_cast<QUmlPort *>(ownedPort));
    emit ownedPortsChanged(this->ownedPorts());
}

// SLOTS FOR OWNED ATTRIBUTES [BehavioredClassifier]

void QUmlStateMachineObject::setClassifierBehavior(QObject *classifierBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setClassifierBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(classifierBehavior));
    emit classifierBehaviorChanged(this->classifierBehavior());
}

void QUmlStateMachineObject::addInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
    emit interfaceRealizationsChanged(this->interfaceRealizations());
}

void QUmlStateMachineObject::removeInterfaceRealization(QObject *interfaceRealization)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeInterfaceRealization(qmodelingelementproperty_cast<QUmlInterfaceRealization *>(interfaceRealization));
    emit interfaceRealizationsChanged(this->interfaceRealizations());
}

void QUmlStateMachineObject::addOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
    emit ownedBehaviorsChanged(this->ownedBehaviors());
}

void QUmlStateMachineObject::removeOwnedBehavior(QObject *ownedBehavior)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(ownedBehavior));
    emit ownedBehaviorsChanged(this->ownedBehaviors());
}

// SLOTS FOR OWNED ATTRIBUTES [Class]

void QUmlStateMachineObject::addExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
    emit extensionsChanged(this->extensions());
}

void QUmlStateMachineObject::removeExtension(QObject *extension)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeExtension(qmodelingelementproperty_cast<QUmlExtension *>(extension));
    emit extensionsChanged(this->extensions());
}

void QUmlStateMachineObject::setAbstract(bool isAbstract)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setAbstract(isAbstract);
    emit isAbstractChanged(this->isAbstract());
}

void QUmlStateMachineObject::unsetAbstract()
{
    Q_D(QModelingObject);
    setAbstract(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isAbstract"));
}

void QUmlStateMachineObject::setActive(bool isActive)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setActive(isActive);
    emit isActiveChanged(this->isActive());
}

void QUmlStateMachineObject::unsetActive()
{
    Q_D(QModelingObject);
    setActive(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isActive"));
}

void QUmlStateMachineObject::addNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
    emit nestedClassifiersChanged(this->nestedClassifiers());
}

void QUmlStateMachineObject::removeNestedClassifier(QObject *nestedClassifier)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeNestedClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(nestedClassifier));
    emit nestedClassifiersChanged(this->nestedClassifiers());
}

void QUmlStateMachineObject::addOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
    emit ownedAttributesChanged(this->ownedAttributes());
}

void QUmlStateMachineObject::removeOwnedAttribute(QObject *ownedAttribute)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedAttribute(qmodelingelementproperty_cast<QUmlProperty *>(ownedAttribute));
    emit ownedAttributesChanged(this->ownedAttributes());
}

void QUmlStateMachineObject::addOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
    emit ownedOperationsChanged(this->ownedOperations());
}

void QUmlStateMachineObject::removeOwnedOperation(QObject *ownedOperation)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedOperation(qmodelingelementproperty_cast<QUmlOperation *>(ownedOperation));
    emit ownedOperationsChanged(this->ownedOperations());
}

void QUmlStateMachineObject::addOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
    emit ownedReceptionsChanged(this->ownedReceptions());
}

void QUmlStateMachineObject::removeOwnedReception(QObject *ownedReception)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedReception(qmodelingelementproperty_cast<QUmlReception *>(ownedReception));
    emit ownedReceptionsChanged(this->ownedReceptions());
}

void QUmlStateMachineObject::addSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
    emit superClassesChanged(this->superClasses());
}

void QUmlStateMachineObject::removeSuperClass(QObject *superClass)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSuperClass(qmodelingelementproperty_cast<QUmlClass *>(superClass));
    emit superClassesChanged(this->superClasses());
}

// SLOTS FOR OWNED ATTRIBUTES [Behavior]

void QUmlStateMachineObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setContext(qmodelingelementproperty_cast<QUmlBehavioredClassifier *>(context));
    emit contextChanged(this->context());
}

void QUmlStateMachineObject::setReentrant(bool isReentrant)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setReentrant(isReentrant);
    emit isReentrantChanged(this->isReentrant());
}

void QUmlStateMachineObject::unsetReentrant()
{
    Q_D(QModelingObject);

    setReentrant(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isReentrant"));
}

void QUmlStateMachineObject::addOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QUmlStateMachineObject::removeOwnedParameter(QObject *ownedParameter)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameter(qmodelingelementproperty_cast<QUmlParameter *>(ownedParameter));
    emit ownedParametersChanged(this->ownedParameters());
}

void QUmlStateMachineObject::addOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
    emit ownedParameterSetsChanged(this->ownedParameterSets());
}

void QUmlStateMachineObject::removeOwnedParameterSet(QObject *ownedParameterSet)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeOwnedParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(ownedParameterSet));
    emit ownedParameterSetsChanged(this->ownedParameterSets());
}

void QUmlStateMachineObject::addPostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
    emit postconditionsChanged(this->postconditions());
}

void QUmlStateMachineObject::removePostcondition(QObject *postcondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(postcondition));
    emit postconditionsChanged(this->postconditions());
}

void QUmlStateMachineObject::addPrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
    emit preconditionsChanged(this->preconditions());
}

void QUmlStateMachineObject::removePrecondition(QObject *precondition)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removePrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(precondition));
    emit preconditionsChanged(this->preconditions());
}

void QUmlStateMachineObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlBehavioralFeature *>(specification));
    emit specificationChanged(this->specification());
}

// SLOTS FOR OWNED ATTRIBUTES [StateMachine]

void QUmlStateMachineObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
    emit connectionPointsChanged(this->connectionPoints());
}

void QUmlStateMachineObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
    emit connectionPointsChanged(this->connectionPoints());
}

void QUmlStateMachineObject::addExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
    emit extendedStateMachinesChanged(this->extendedStateMachines());
}

void QUmlStateMachineObject::removeExtendedStateMachine(QObject *extendedStateMachine)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeExtendedStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(extendedStateMachine));
    emit extendedStateMachinesChanged(this->extendedStateMachines());
}

void QUmlStateMachineObject::addRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
    emit regionsChanged(this->regions());
}

void QUmlStateMachineObject::removeRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
    emit regionsChanged(this->regions());
}

void QUmlStateMachineObject::addSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->addSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
    emit submachineStatesChanged(this->submachineStates());
}

void QUmlStateMachineObject::removeSubmachineState(QObject *submachineState)
{
    qmodelingelementproperty_cast<QUmlStateMachine *>(this)->removeSubmachineState(qmodelingelementproperty_cast<QUmlState *>(submachineState));
    emit submachineStatesChanged(this->submachineStates());
}


void QUmlStateMachineObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlType");
    d->groupProperties.insert(QStringLiteral("QUmlType"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("attributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("collaborationUses"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("features"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inheritedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isFinalSpecialization"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedUseCases"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertypeExtents"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("representation"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("substitutions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("useCases"))));

    d->propertyGroups << QStringLiteral("QUmlStructuredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedConnectors"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parts"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("roles"))));

    d->propertyGroups << QStringLiteral("QUmlEncapsulatedClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlEncapsulatedClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedPorts"))));

    d->propertyGroups << QStringLiteral("QUmlBehavioredClassifier");
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifierBehavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interfaceRealizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavioredClassifier"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedBehaviors"))));

    d->propertyGroups << QStringLiteral("QUmlClass");
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extensions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAbstract"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isActive"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedAttributes"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedOperations"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedReceptions"))));
    d->groupProperties.insert(QStringLiteral("QUmlClass"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superClasses"))));

    d->propertyGroups << QStringLiteral("QUmlBehavior");
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReentrant"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameters"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedParameterSets"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("postconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlBehavior"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QUmlStateMachine");
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("connectionPoints"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extendedStateMachines"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("regions"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateMachine"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("submachineStates"))));
}

void QUmlStateMachineObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QUmlComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyTypeRole, QStringLiteral("QUmlElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyTypeRole, QStringLiteral("QSet<QUmlDependency *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyTypeRole, QStringLiteral("QUmlStringExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyTypeRole, QStringLiteral("QSet<QUmlElementImport *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyTypeRole, QStringLiteral("QSet<QUmlPackageableElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyTypeRole, QStringLiteral("QSet<QUmlNamedElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyTypeRole, QStringLiteral("QSet<QUmlNamedElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyTypeRole, QStringLiteral("QSet<QUmlConstraint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyTypeRole, QStringLiteral("QSet<QUmlPackageImport *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyTypeRole, QStringLiteral("QUmlTemplateParameter *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyTypeRole, QStringLiteral("QUmlTemplateParameter *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyClassRole, QStringLiteral("QUmlPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, PropertyClassRole, QStringLiteral("QUmlType"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, PropertyTypeRole, QStringLiteral("QUmlPackage *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, DocumentationRole, QStringLiteral("Specifies the owning package of this classifier, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlType, package, OppositeEndRole, QStringLiteral("Package-ownedType"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlRedefinableElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyTypeRole, QStringLiteral("QSet<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, PropertyTypeRole, QStringLiteral("QUmlTemplateSignature *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, ownedTemplateSignature, OppositeEndRole, QStringLiteral("TemplateSignature-template"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, PropertyClassRole, QStringLiteral("QUmlTemplateableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, PropertyTypeRole, QStringLiteral("QSet<QUmlTemplateBinding *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, DocumentationRole, QStringLiteral("The optional bindings from this element to templates."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTemplateableElement, templateBindings, OppositeEndRole, QStringLiteral("TemplateBinding-boundElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, PropertyTypeRole, QStringLiteral("QSet<QUmlProperty *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, DocumentationRole, QStringLiteral("Refers to all of the Properties that are direct (i.e. not inherited or imported) attributes of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, attributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, PropertyTypeRole, QStringLiteral("QSet<QUmlCollaborationUse *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, DocumentationRole, QStringLiteral("References the collaboration uses owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, collaborationUses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, PropertyTypeRole, QStringLiteral("QSet<QUmlFeature *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, DocumentationRole, QStringLiteral("Specifies each feature defined in the classifier.Note that there may be members of the Classifier that are of the type Feature but are not included in this association, e.g. inherited features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, features, OppositeEndRole, QStringLiteral("Feature-featuringClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, PropertyTypeRole, QStringLiteral("QSet<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, DocumentationRole, QStringLiteral("Specifies the general Classifiers for this Classifier.References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generals, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, PropertyTypeRole, QStringLiteral("QSet<QUmlGeneralization *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, DocumentationRole, QStringLiteral("Specifies the Generalization relationships for this Classifier. These Generalizations navigaten to more general classifiers in the generalization hierarchy."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, generalizations, OppositeEndRole, QStringLiteral("Generalization-specific"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, PropertyTypeRole, QStringLiteral("QSet<QUmlNamedElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, DocumentationRole, QStringLiteral("Specifies all elements inherited by this classifier from the general classifiers."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, inheritedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, DocumentationRole, QStringLiteral("If true, the Classifier cannot be specialized by generalization. Note that this property is preserved through package merge operations; that is, the capability to specialize a Classifier (i.e., isFinalSpecialization =false) must be preserved in the resulting Classifier of a package merge operation where a Classifier with isFinalSpecialization =false is merged with a matching Classifier with isFinalSpecialization =true: the resulting Classifier will have isFinalSpecialization =false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, isFinalSpecialization, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, PropertyTypeRole, QStringLiteral("QUmlRedefinableTemplateSignature *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, DocumentationRole, QStringLiteral("The optional template signature specifying the formal template parameters."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, RedefinedPropertiesRole, QStringLiteral("TemplateableElement-ownedTemplateSignature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedTemplateSignature, OppositeEndRole, QStringLiteral("RedefinableTemplateSignature-classifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, PropertyTypeRole, QStringLiteral("QSet<QUmlUseCase *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, DocumentationRole, QStringLiteral("References the use cases owned by this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, ownedUseCases, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, PropertyTypeRole, QStringLiteral("QSet<QUmlGeneralizationSet *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, DocumentationRole, QStringLiteral("Designates the GeneralizationSet of which the associated Classifier is a power type."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, powertypeExtents, OppositeEndRole, QStringLiteral("GeneralizationSet-powertype"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, PropertyTypeRole, QStringLiteral("QSet<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, DocumentationRole, QStringLiteral("References the Classifiers that are redefined by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, redefinedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, PropertyTypeRole, QStringLiteral("QUmlCollaborationUse *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, DocumentationRole, QStringLiteral("References a collaboration use which indicates the collaboration that represents this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, SubsettedPropertiesRole, QStringLiteral("Classifier-collaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, representation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, PropertyTypeRole, QStringLiteral("QSet<QUmlSubstitution *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, DocumentationRole, QStringLiteral("References the substitutions that are owned by this Classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, substitutions, OppositeEndRole, QStringLiteral("Substitution-substitutingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, PropertyTypeRole, QStringLiteral("QUmlClassifierTemplateParameter *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, templateParameter, OppositeEndRole, QStringLiteral("ClassifierTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, PropertyClassRole, QStringLiteral("QUmlClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, PropertyTypeRole, QStringLiteral("QSet<QUmlUseCase *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, DocumentationRole, QStringLiteral("The set of use cases for which this Classifier is the subject."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClassifier, useCases, OppositeEndRole, QStringLiteral("UseCase-subject"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, PropertyTypeRole, QStringLiteral("QList<QUmlProperty *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, DocumentationRole, QStringLiteral("References the properties owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Classifier-attribute Namespace-ownedMember StructuredClassifier-role"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedAttributes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, PropertyTypeRole, QStringLiteral("QSet<QUmlConnector *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, DocumentationRole, QStringLiteral("References the connectors owned by the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, ownedConnectors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, PropertyTypeRole, QStringLiteral("QSet<QUmlProperty *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, DocumentationRole, QStringLiteral("References the properties specifying instances that the classifier owns by composition. This association is derived, selecting those owned properties where isComposite is true."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, parts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, PropertyClassRole, QStringLiteral("QUmlStructuredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, PropertyTypeRole, QStringLiteral("QSet<QUmlConnectableElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, DocumentationRole, QStringLiteral("References the roles that instances may play in this classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredClassifier, roles, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, PropertyClassRole, QStringLiteral("QUmlEncapsulatedClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, PropertyTypeRole, QStringLiteral("QSet<QUmlPort *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, DocumentationRole, QStringLiteral("References a set of ports that an encapsulated classifier owns."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, SubsettedPropertiesRole, QStringLiteral("StructuredClassifier-ownedAttribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEncapsulatedClassifier, ownedPorts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, PropertyTypeRole, QStringLiteral("QUmlBehavior *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, DocumentationRole, QStringLiteral("A behavior specification that specifies the behavior of the classifier itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, SubsettedPropertiesRole, QStringLiteral("BehavioredClassifier-ownedBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, classifierBehavior, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, PropertyTypeRole, QStringLiteral("QSet<QUmlInterfaceRealization *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, DocumentationRole, QStringLiteral("The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, interfaceRealizations, OppositeEndRole, QStringLiteral("InterfaceRealization-implementingClassifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, PropertyClassRole, QStringLiteral("QUmlBehavioredClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, PropertyTypeRole, QStringLiteral("QSet<QUmlBehavior *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, DocumentationRole, QStringLiteral("References behavior specifications owned by a classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavioredClassifier, ownedBehaviors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, PropertyTypeRole, QStringLiteral("QSet<QUmlExtension *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, DocumentationRole, QStringLiteral("References the Extensions that specify additional properties of the metaclass. The property is derived from the extensions whose memberEnds are typed by the Class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, extensions, OppositeEndRole, QStringLiteral("Extension-metaclass"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, DocumentationRole, QStringLiteral("If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.True when a class is abstract."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, RedefinedPropertiesRole, QStringLiteral("Classifier-isAbstract"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isAbstract, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, DocumentationRole, QStringLiteral("Determines whether an object specified by this class is active or not. If true, then the owning class is referred to as an active class. If false, then such a class is referred to as a passive class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, isActive, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, PropertyTypeRole, QStringLiteral("QList<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, DocumentationRole, QStringLiteral("References all the Classifiers that are defined (nested) within the Class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, SubsettedPropertiesRole, QStringLiteral("A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, nestedClassifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, PropertyTypeRole, QStringLiteral("QList<QUmlProperty *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, DocumentationRole, QStringLiteral("The attributes (i.e. the properties) owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, RedefinedPropertiesRole, QStringLiteral("StructuredClassifier-ownedAttribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember Classifier-attribute"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedAttributes, OppositeEndRole, QStringLiteral("Property-class"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, PropertyTypeRole, QStringLiteral("QList<QUmlOperation *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, DocumentationRole, QStringLiteral("The operations owned by the class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, SubsettedPropertiesRole, QStringLiteral("Classifier-feature A_redefinitionContext_redefinableElement-redefinableElement Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedOperations, OppositeEndRole, QStringLiteral("Operation-class"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, PropertyTypeRole, QStringLiteral("QSet<QUmlReception *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, DocumentationRole, QStringLiteral("Receptions that objects of this class are willing to accept."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, SubsettedPropertiesRole, QStringLiteral("Classifier-feature Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, ownedReceptions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, PropertyClassRole, QStringLiteral("QUmlClass"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, PropertyTypeRole, QStringLiteral("QSet<QUmlClass *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, DocumentationRole, QStringLiteral("This gives the superclasses of a class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, RedefinedPropertiesRole, QStringLiteral("Classifier-general"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlClass, superClasses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, PropertyTypeRole, QStringLiteral("QUmlBehavioredClassifier *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, DocumentationRole, QStringLiteral("The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, context, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, DocumentationRole, QStringLiteral("Tells whether the behavior can be invoked while it is still executing from a previous invocation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, isReentrant, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, PropertyTypeRole, QStringLiteral("QList<QUmlParameter *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, DocumentationRole, QStringLiteral("References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameters, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, PropertyTypeRole, QStringLiteral("QSet<QUmlParameterSet *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, DocumentationRole, QStringLiteral("The ParameterSets owned by this Behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, ownedParameterSets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, PropertyTypeRole, QStringLiteral("QSet<QUmlConstraint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, postconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, PropertyTypeRole, QStringLiteral("QSet<QUmlConstraint *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, DocumentationRole, QStringLiteral("An optional set of Constraints specifying what must be fulfilled when the behavior is invoked."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, preconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, PropertyTypeRole, QStringLiteral("QSet<QUmlBehavior *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, DocumentationRole, QStringLiteral("References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, SubsettedPropertiesRole, QStringLiteral("Classifier-redefinedClassifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, redefinedBehaviors, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, PropertyClassRole, QStringLiteral("QUmlBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, PropertyTypeRole, QStringLiteral("QUmlBehavioralFeature *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, DocumentationRole, QStringLiteral("Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehavior, specification, OppositeEndRole, QStringLiteral("BehavioralFeature-method"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, PropertyTypeRole, QStringLiteral("QSet<QUmlPseudostate *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, DocumentationRole, QStringLiteral("The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, connectionPoints, OppositeEndRole, QStringLiteral("Pseudostate-stateMachine"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, PropertyTypeRole, QStringLiteral("QSet<QUmlStateMachine *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, DocumentationRole, QStringLiteral("The state machines of which this is an extension."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, RedefinedPropertiesRole, QStringLiteral("Behavior-redefinedBehavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, extendedStateMachines, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, PropertyTypeRole, QStringLiteral("QSet<QUmlRegion *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, DocumentationRole, QStringLiteral("The regions owned directly by the state machine."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, regions, OppositeEndRole, QStringLiteral("Region-stateMachine"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, PropertyClassRole, QStringLiteral("QUmlStateMachine"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, PropertyTypeRole, QStringLiteral("QSet<QUmlState *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, DocumentationRole, QStringLiteral("References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateMachine, submachineStates, OppositeEndRole, QStringLiteral("State-submachine"));

}

QT_END_NAMESPACE

