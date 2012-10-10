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
** rights. These rights are described in the Nokia  LGPL Exception
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
#ifndef QTUML_QPACKAGE_P_H
#define QTUML_QPACKAGE_P_H

#include <QtUml/QtUmlGlobal>

// Base class includes

#include "qnamespace_p.h"

#include "qpackageableelement_p.h"

#include "qtemplateableelement_p.h"

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QProfile;
class QNamedElement;
class QProfileApplication;
class QType;
class QStereotype;
class QPackageMerge;

class QPackagePrivate : public QNamespacePrivate, public QPackageableElementPrivate, public QTemplateableElementPrivate
{
public:
    explicit QPackagePrivate();
    virtual ~QPackagePrivate();

    QString URI;
    QSet<QPackageableElement *> *packagedElements;
    QPackage *nestingPackage;
    QSet<QProfileApplication *> *profileApplications;
    QSet<QPackageMerge *> *packageMerges;

    // Internal functions for attributes
    void setURI(QString URI);

    // Internal functions for association-ends
    void addOwnedType(const QType *ownedType);
    void removeOwnedType(const QType *ownedType);
    void addPackagedElement(const QPackageableElement *packagedElement);
    void removePackagedElement(const QPackageableElement *packagedElement);
    void setNestingPackage(const QPackage *nestingPackage);
    void addProfileApplication(const QProfileApplication *profileApplication);
    void removeProfileApplication(const QProfileApplication *profileApplication);
    void addOwnedStereotype(const QStereotype *ownedStereotype);
    void removeOwnedStereotype(const QStereotype *ownedStereotype);
    void addPackageMerge(const QPackageMerge *packageMerge);
    void removePackageMerge(const QPackageMerge *packageMerge);
    void addNestedPackage(const QPackage *nestedPackage);
    void removeNestedPackage(const QPackage *nestedPackage);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QPACKAGE_P_H
