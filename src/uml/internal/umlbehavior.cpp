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
#include "umlbehavior_p.h"

#include "private/umlbehavioralfeature_p.h"
#include "private/umlbehavioredclassifier_p.h"
#include "private/umlconstraint_p.h"
#include "private/umlparameter_p.h"
#include "private/umlparameterset_p.h"

/*!
    \class UmlBehavior

    \inmodule QtUml

    \brief Behavior is a specification of how its context classifier changes state over time. This specification may be either a definition of possible behavior execution or emergent behavior, or a selective illustration of an interesting subset of possible executions. The latter form is typically used for capturing examples, such as a trace of a particular execution.A behavior owns zero or more parameter sets.
 */

UmlBehavior::UmlBehavior() :
    _isReentrant(true),
    _specification(0)
{
}

// OWNED ATTRIBUTES

/*!
    The classifier that is the context for the execution of the behavior. If the behavior is owned by a BehavioredClassifier, that classifier is the context. Otherwise, the context is the first BehavioredClassifier reached by following the chain of owner relationships. For example, following this algorithm, the context of an entry action in a state machine is the classifier that owns the state machine. The features of the context classifier as well as the elements visible to the context classifier are visible to the behavior.
 */
UmlBehavioredClassifier *UmlBehavior::context() const
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlBehavior::setContext(UmlBehavioredClassifier *context)
{
    // This is a read-only derived association end

    qWarning("UmlBehavior::context(): to be implemented (this is a derived association end)");
    Q_UNUSED(context);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust subsetted properties
        // removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust subsetted properties
        if (context) {
            addRedefinitionContext(context);
        }
    }
}

/*!
    Tells whether the behavior can be invoked while it is still executing from a previous invocation.
 */
bool UmlBehavior::isReentrant() const
{
    // This is a read-write property

    return _isReentrant;
}

void UmlBehavior::setReentrant(bool isReentrant)
{
    // This is a read-write property

    if (_isReentrant != isReentrant) {
        _isReentrant = isReentrant;
    }
}

/*!
    References a list of parameters to the behavior which describes the order and type of arguments that can be given when the behavior is invoked and of the values which will be returned when the behavior completes its execution.
 */
const QList<UmlParameter *> UmlBehavior::ownedParameter() const
{
    // This is a read-write association end

    return _ownedParameter;
}

void UmlBehavior::addOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (!_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.append(ownedParameter);

        // Adjust subsetted properties
        addOwnedMember(ownedParameter);
    }
}

void UmlBehavior::removeOwnedParameter(UmlParameter *ownedParameter)
{
    // This is a read-write association end

    if (_ownedParameter.contains(ownedParameter)) {
        _ownedParameter.removeAll(ownedParameter);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameter);
    }
}

/*!
    The ParameterSets owned by this Behavior.
 */
const QSet<UmlParameterSet *> UmlBehavior::ownedParameterSet() const
{
    // This is a read-write association end

    return _ownedParameterSet;
}

void UmlBehavior::addOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (!_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.insert(ownedParameterSet);

        // Adjust subsetted properties
        addOwnedMember(ownedParameterSet);
    }
}

void UmlBehavior::removeOwnedParameterSet(UmlParameterSet *ownedParameterSet)
{
    // This is a read-write association end

    if (_ownedParameterSet.contains(ownedParameterSet)) {
        _ownedParameterSet.remove(ownedParameterSet);

        // Adjust subsetted properties
        removeOwnedMember(ownedParameterSet);
    }
}

/*!
    An optional set of Constraints specifying what is fulfilled after the execution of the behavior is completed, if its precondition was fulfilled before its invocation.
 */
const QSet<UmlConstraint *> UmlBehavior::postcondition() const
{
    // This is a read-write association end

    return _postcondition;
}

void UmlBehavior::addPostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (!_postcondition.contains(postcondition)) {
        _postcondition.insert(postcondition);

        // Adjust subsetted properties
        addOwnedRule(postcondition);
    }
}

void UmlBehavior::removePostcondition(UmlConstraint *postcondition)
{
    // This is a read-write association end

    if (_postcondition.contains(postcondition)) {
        _postcondition.remove(postcondition);

        // Adjust subsetted properties
        removeOwnedRule(postcondition);
    }
}

/*!
    An optional set of Constraints specifying what must be fulfilled when the behavior is invoked.
 */
const QSet<UmlConstraint *> UmlBehavior::precondition() const
{
    // This is a read-write association end

    return _precondition;
}

void UmlBehavior::addPrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (!_precondition.contains(precondition)) {
        _precondition.insert(precondition);

        // Adjust subsetted properties
        addOwnedRule(precondition);
    }
}

void UmlBehavior::removePrecondition(UmlConstraint *precondition)
{
    // This is a read-write association end

    if (_precondition.contains(precondition)) {
        _precondition.remove(precondition);

        // Adjust subsetted properties
        removeOwnedRule(precondition);
    }
}

/*!
    References a behavior that this behavior redefines. A subtype of Behavior may redefine any other subtype of Behavior. If the behavior implements a behavioral feature, it replaces the redefined behavior. If the behavior is a classifier behavior, it extends the redefined behavior.
 */
const QSet<UmlBehavior *> UmlBehavior::redefinedBehavior() const
{
    // This is a read-write association end

    return _redefinedBehavior;
}

void UmlBehavior::addRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (!_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.insert(redefinedBehavior);

        // Adjust subsetted properties
        addRedefinedClassifier(redefinedBehavior);
    }
}

void UmlBehavior::removeRedefinedBehavior(UmlBehavior *redefinedBehavior)
{
    // This is a read-write association end

    if (_redefinedBehavior.contains(redefinedBehavior)) {
        _redefinedBehavior.remove(redefinedBehavior);

        // Adjust subsetted properties
        removeRedefinedClassifier(redefinedBehavior);
    }
}

/*!
    Designates a behavioral feature that the behavior implements. The behavioral feature must be owned by the classifier that owns the behavior or be inherited by it. The parameters of the behavioral feature and the implementing behavior must match. A behavior does not need to have a specification, in which case it either is the classifer behavior of a BehavioredClassifier or it can only be invoked by another behavior of the classifier.
 */
UmlBehavioralFeature *UmlBehavior::specification() const
{
    // This is a read-write association end

    return _specification;
}

void UmlBehavior::setSpecification(UmlBehavioralFeature *specification)
{
    // This is a read-write association end

    if (_specification != specification) {
        _specification = specification;
    }
}

