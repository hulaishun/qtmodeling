/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofuriextent.h"

#include "private/qmofuriextentobject_p.h"

#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofURIExtent::QMofURIExtent(bool createQModelingObject) :
    QMofExtent(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofURIExtentObject(this));
}

/*!
    Destroys the QMofURIExtent.
 */
QMofURIExtent::~QMofURIExtent()
{
    QModelingElement::deleteQModelingObject();
}

QModelingElement *QMofURIExtent::clone() const
{
    QMofURIExtent *c = new QMofURIExtent;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    return c;
}

// OPERATIONS

QString QMofURIExtent::contextURI() const
{
    qWarning("QMofURIExtent::contextURI(): to be implemented (operation)");

    return QString ();
}

QString QMofURIExtent::uri(QMofElement *object) const
{
    qWarning("QMofURIExtent::uri(): to be implemented (operation)");

    Q_UNUSED(object);
    return QString ();
}

QMofElement *QMofURIExtent::element(QString uri) const
{
    qWarning("QMofURIExtent::element(): to be implemented (operation)");

    Q_UNUSED(uri);
    return 0;
}

QT_END_NAMESPACE

