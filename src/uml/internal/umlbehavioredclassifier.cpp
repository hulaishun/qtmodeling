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
#include "umlbehavioredclassifier_p.h"

#include "private/umlbehavior_p.h"
#include "private/umlinterfacerealization_p.h"

/*!
    \class UmlBehavioredClassifier

    \inmodule QtUml

    \brief A behaviored classifier may have an interface realization.A classifier can have behavior specifications defined in its namespace. One of these may specify the behavior of the classifier itself.
 */

UmlBehavioredClassifier::UmlBehavioredClassifier() :
    _classifierBehavior(0)
{
}

// OWNED ATTRIBUTES

/*!
    A behavior specification that specifies the behavior of the classifier itself.
 */
UmlBehavior *UmlBehavioredClassifier::classifierBehavior() const
{
    // This is a read-write association end

    return _classifierBehavior;
}

void UmlBehavioredClassifier::setClassifierBehavior(UmlBehavior *classifierBehavior)
{
    // This is a read-write association end

    if (_classifierBehavior != classifierBehavior) {
        // Adjust subsetted properties
        removeOwnedBehavior(_classifierBehavior);

        _classifierBehavior = classifierBehavior;

        // Adjust subsetted properties
        if (classifierBehavior) {
            addOwnedBehavior(classifierBehavior);
        }
    }
}

/*!
    The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
 */
const QSet<UmlInterfaceRealization *> UmlBehavioredClassifier::interfaceRealization() const
{
    // This is a read-write association end

    return _interfaceRealization;
}

void UmlBehavioredClassifier::addInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (!_interfaceRealization.contains(interfaceRealization)) {
        _interfaceRealization.insert(interfaceRealization);

        // Adjust subsetted properties
        addOwnedElement(interfaceRealization);
        addClientDependency(interfaceRealization);

        // Adjust opposite properties
        if (interfaceRealization) {
            interfaceRealization->setImplementingClassifier(this);
        }
    }
}

void UmlBehavioredClassifier::removeInterfaceRealization(UmlInterfaceRealization *interfaceRealization)
{
    // This is a read-write association end

    if (_interfaceRealization.contains(interfaceRealization)) {
        _interfaceRealization.remove(interfaceRealization);

        // Adjust subsetted properties
        removeOwnedElement(interfaceRealization);
        removeClientDependency(interfaceRealization);

        // Adjust opposite properties
        if (interfaceRealization) {
            interfaceRealization->setImplementingClassifier(0);
        }
    }
}

/*!
    References behavior specifications owned by a classifier.
 */
const QSet<UmlBehavior *> UmlBehavioredClassifier::ownedBehavior() const
{
    // This is a read-write association end

    return _ownedBehavior;
}

void UmlBehavioredClassifier::addOwnedBehavior(UmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (!_ownedBehavior.contains(ownedBehavior)) {
        _ownedBehavior.insert(ownedBehavior);

        // Adjust subsetted properties
        addOwnedMember(ownedBehavior);
    }
}

void UmlBehavioredClassifier::removeOwnedBehavior(UmlBehavior *ownedBehavior)
{
    // This is a read-write association end

    if (_ownedBehavior.contains(ownedBehavior)) {
        _ownedBehavior.remove(ownedBehavior);

        // Adjust subsetted properties
        removeOwnedMember(ownedBehavior);
    }
}

