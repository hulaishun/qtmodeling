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

#include "qremovevariablevalueaction.h"
#include "qremovevariablevalueaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QRemoveVariableValueActionPrivate::QRemoveVariableValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QRemoveVariableValueActionPrivate::~QRemoveVariableValueActionPrivate()
{
}

/*!
    \class QRemoveVariableValueAction

    \inmodule QtUml

    \brief A remove variable value action is a write variable action that removes values from variables.
 */

QRemoveVariableValueAction::QRemoveVariableValueAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteVariableAction(*new QRemoveVariableValueActionPrivate, parent, wrapper)
{
}

QRemoveVariableValueAction::QRemoveVariableValueAction(QRemoveVariableValueActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteVariableAction(dd, parent, wrapper)
{
}

QRemoveVariableValueAction::~QRemoveVariableValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QRemoveVariableValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QRemoveVariableValueAction::isRemoveDuplicates() const
{
    // This is a read-write attribute

    Q_D(const QRemoveVariableValueAction);
    return d->isRemoveDuplicates;
}

void QRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write attribute

    Q_D(QRemoveVariableValueAction);
    if (d->isRemoveDuplicates != isRemoveDuplicates) {
        d->isRemoveDuplicates = isRemoveDuplicates;
    }
}

void QRemoveVariableValueAction::unsetRemoveDuplicates()
{
    setRemoveDuplicates(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRemoveVariableValueAction
// ---------------------------------------------------------------

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QRemoveVariableValueAction::removeAt() const
{
    // This is a read-write association end

    Q_D(const QRemoveVariableValueAction);
    return d->removeAt;
}

void QRemoveVariableValueAction::setRemoveAt(QInputPin *removeAt)
{
    // This is a read-write association end

    Q_D(QRemoveVariableValueAction);
    if (d->removeAt != removeAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->removeAt));

        d->removeAt = removeAt;

        // Adjust subsetted property(ies)
        if (removeAt) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(removeAt));
        }
    }
}

void QRemoveVariableValueAction::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *>("QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QRemoveVariableValueAction) *> *");
    qRegisterMetaType<QRemoveVariableValueAction *>("QRemoveVariableValueAction *");
    qRegisterMetaType<const QSet<QRemoveVariableValueAction *> *>("const QSet<QRemoveVariableValueAction *> *");
    qRegisterMetaType<const QList<QRemoveVariableValueAction *> *>("const QList<QRemoveVariableValueAction *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QInputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<const QSet<QInputPin *> *>("const QSet<QInputPin *> *");
    qRegisterMetaType<const QList<QInputPin *> *>("const QList<QInputPin *> *");

    QWriteVariableAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qremovevariablevalueaction.cpp"

QT_END_NAMESPACE_QTUML

