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
#include "umlcomponentrealization_p.h"

#include "private/umlclassifier_p.h"
#include "private/umlcomponent_p.h"

/*!
    \class UmlComponentRealization

    \inmodule QtUml

    \brief The realization concept is specialized to (optionally) define the classifiers that realize the contract offered by a component in terms of its provided and required interfaces. The component forms an abstraction from these various classifiers.
 */

UmlComponentRealization::UmlComponentRealization() :
    _abstraction(0)
{
}

// OWNED ATTRIBUTES

/*!
    The Component that owns this ComponentRealization and which is implemented by its realizing classifiers.
 */
UmlComponent *UmlComponentRealization::abstraction() const
{
    // This is a read-write association end

    return _abstraction;
}

void UmlComponentRealization::setAbstraction(UmlComponent *abstraction)
{
    // This is a read-write association end

    if (_abstraction != abstraction) {
        // Adjust subsetted properties
        removeSupplier(_abstraction);

        _abstraction = abstraction;

        // Adjust subsetted properties
        if (abstraction) {
            addSupplier(abstraction);
        }
        setOwner(abstraction);
    }
}

/*!
    The classifiers that are involved in the implementation of the Component that owns this Realization.
 */
const QSet<UmlClassifier *> UmlComponentRealization::realizingClassifier() const
{
    // This is a read-write association end

    return _realizingClassifier;
}

void UmlComponentRealization::addRealizingClassifier(UmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    if (!_realizingClassifier.contains(realizingClassifier)) {
        _realizingClassifier.insert(realizingClassifier);

        // Adjust subsetted properties
        addClient(realizingClassifier);
    }
}

void UmlComponentRealization::removeRealizingClassifier(UmlClassifier *realizingClassifier)
{
    // This is a read-write association end

    if (_realizingClassifier.contains(realizingClassifier)) {
        _realizingClassifier.remove(realizingClassifier);

        // Adjust subsetted properties
        removeClient(realizingClassifier);
    }
}

