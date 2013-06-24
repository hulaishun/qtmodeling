/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSADuse module of the Qt Toolkit.
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
#include "qsaduseprocesscomponent.h"
#include "qsaduseprocesscomponent_p.h"

#include <QtUml/QUmlComponent>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QSADuseProcessComponentPrivate::QSADuseProcessComponentPrivate() :
    base_Component(0)
{
}

QSADuseProcessComponentPrivate::~QSADuseProcessComponentPrivate()
{
}


QSADuseProcessComponent::QSADuseProcessComponent(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QSADuseProcessComponentPrivate, wrapper, parent)
{
    setPropertyData();
}

QSADuseProcessComponent::QSADuseProcessComponent(QSADuseProcessComponentPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QSADuseProcessComponent::~QSADuseProcessComponent()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSADuseProcessComponent
// ---------------------------------------------------------------

QUmlComponent *QSADuseProcessComponent::base_Component() const
{
    // This is a read-write association end

    Q_D(const QSADuseProcessComponent);
    return d->base_Component;
}

void QSADuseProcessComponent::setBase_Component(QUmlComponent *base_Component)
{
    // This is a read-write association end

    Q_D(QSADuseProcessComponent);
    if (d->base_Component != base_Component) {
        d->base_Component = base_Component;
    }
}

void QSADuseProcessComponent::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSADuseProcessComponent")][QString::fromLatin1("base_Component")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QSADuse");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qsaduseprocesscomponent.cpp"
