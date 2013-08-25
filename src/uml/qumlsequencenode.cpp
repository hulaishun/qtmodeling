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
#include "qumlsequencenode.h"
#include "qumlsequencenode_p.h"

#include <QtUml/QUmlExecutableNode>

QT_BEGIN_NAMESPACE

QUmlSequenceNodePrivate::QUmlSequenceNodePrivate()
{
}

/*!
    \class QUmlSequenceNode

    \inmodule QtUml

    \brief A sequence node is a structured activity node that executes its actions in order.
 */

QUmlSequenceNode::QUmlSequenceNode(bool create_d_ptr) :
    QUmlStructuredActivityNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlSequenceNodePrivate);
}

// Owned attributes

/*!
    An ordered set of executable nodes.
 */
QList<QUmlExecutableNode *> QUmlSequenceNode::executableNode() const
{
    return QList<QUmlExecutableNode *>();
}

void QUmlSequenceNode::addExecutableNode(QList<QUmlExecutableNode *> executableNode)
{
    Q_UNUSED(executableNode);
}

void QUmlSequenceNode::removeExecutableNode(QList<QUmlExecutableNode *> executableNode)
{
    Q_UNUSED(executableNode);
}

QT_END_NAMESPACE

