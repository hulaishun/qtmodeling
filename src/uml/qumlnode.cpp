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
#include "qumlnode.h"
#include "qumlnode_p.h"

QT_BEGIN_NAMESPACE

QUmlNodePrivate::QUmlNodePrivate()
{
}

/*!
    \class QUmlNode

    \inmodule QtUml

    \brief A node is computational resource upon which artifacts may be deployed for execution. Nodes can be interconnected through communication paths to define network structures.
 */

QUmlNode::QUmlNode(bool create_d_ptr) :
    QUmlClass(false),
    QUmlDeploymentTarget(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlNodePrivate);
}

// Owned attributes

/*!
    The Nodes that are defined (nested) within the Node.
 */
QSet<QUmlNode *> QUmlNode::nestedNode() const
{
    return QSet<QUmlNode *>();
}

void QUmlNode::addNestedNode(QSet<QUmlNode *> nestedNode)
{
    Q_UNUSED(nestedNode);
}

void QUmlNode::removeNestedNode(QSet<QUmlNode *> nestedNode)
{
    Q_UNUSED(nestedNode);
}

QT_END_NAMESPACE

