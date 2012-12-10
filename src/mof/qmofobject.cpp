/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofobject.h"
#include "qmofobject_p.h"

#include <QtMof/QArgument>
#include <QtMof/QOperation>
#include <QtMof/QProperty>

QT_BEGIN_NAMESPACE_QTMOF

QMofObjectPrivate::QMofObjectPrivate(int version)
    : QObjectPrivate(version), wrapper(0)
{
}

QMofObjectPrivate::~QMofObjectPrivate()
{
}


QMofObject::QMofObject(QMofObject *parent, QMofObject *wrapper) :
    QObject(*new QMofObjectPrivate, parent)
{
    setWrapper(wrapper);
}

QMofObject::QMofObject(QMofObjectPrivate &dd, QMofObject *parent, QMofObject *wrapper) :
    QObject(dd, parent)
{
    setWrapper(wrapper);
}

QMofObject::~QMofObject()
{
}

QMofObject *QMofObject::get(const QProperty *property) const
{
    qWarning("QMofObject::get: operation to be implemented");
    Q_UNUSED(property);

    return 0; // change here to your derived return
}

bool QMofObject::equals(const QMofObject *element) const
{
    qWarning("QMofObject::equals: operation to be implemented");
    Q_UNUSED(element);

    return bool(); // change here to your derived return
}

void QMofObject::set(const QProperty *property, const QMofObject *value)
{
    qWarning("QMofObject::set: operation to be implemented");
    Q_UNUSED(property);
    Q_UNUSED(value);
}

bool QMofObject::isSet(const QProperty *property) const
{
    qWarning("QMofObject::isSet: operation to be implemented");
    Q_UNUSED(property);

    return bool(); // change here to your derived return
}

void QMofObject::unset(const QProperty *property)
{
    qWarning("QMofObject::unset: operation to be implemented");
    Q_UNUSED(property);
}

QMofObject *QMofObject::invoke(const QOperation *op, const QSet<QArgument *> *arguments)
{
    qWarning("QMofObject::invoke: operation to be implemented");
    Q_UNUSED(op);
    Q_UNUSED(arguments);

    return 0; // change here to your derived return
}

const QList<QMofObject *> &QMofObject::wrappedObjects() const
{
    Q_D(const QMofObject);
    return d->wrappedObjects;
}

void QMofObject::setWrapper(QMofObject *wrapper)
{
    Q_D(QMofObject);
    if (wrapper == d->wrapper)
        return;

    if (d->wrapper)
        d->wrapper->d_func()->wrappedObjects.removeAll(this);

    d->wrapper = wrapper;

    if (wrapper)
        wrapper->d_func()->wrappedObjects.append(this);
}

QMofObject *QMofObject::wrapper() const
{
    Q_D(const QMofObject);
    return d->wrapper;
}

#include "moc_qmofobject.cpp"

QT_END_NAMESPACE_QTMOF
