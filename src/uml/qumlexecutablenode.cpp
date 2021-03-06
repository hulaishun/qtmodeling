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
#include "qumlexecutablenode.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlExecutableNode

    \inmodule QtUml

    \brief An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.An executable node is an abstract class for activity nodes that may be executed. It is used as an attachment point for exception handlers.

    \b {QUmlExecutableNode is an abstract class.}
 */

/*!
    Creates a new QUmlExecutableNode.
*/
QUmlExecutableNode::QUmlExecutableNode()
{
}

/*!
    Destroys the QUmlExecutableNode.
 */
QUmlExecutableNode::~QUmlExecutableNode()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlExecutableNode.
*/
QModelingElement *QUmlExecutableNode::clone() const
{
    QUmlExecutableNode *c = new QUmlExecutableNode;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QUmlExceptionHandler *element, handlers())
        c->addHandler(dynamic_cast<QUmlExceptionHandler *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.

    \sa addHandler(), removeHandler()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlExceptionHandler::protectedNode().
 */
const QSet<QUmlExceptionHandler *> QUmlExecutableNode::handlers() const
{
    // This is a read-write association end

    return _handlers;
}

/*!
    Adds \a handler to handlers.

    \sa handlers(), removeHandler()
 */
void QUmlExecutableNode::addHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    if (!_handlers.contains(handler)) {
        _handlers.insert(handler);
        if (handler && handler->asQModelingObject() && this->asQModelingObject())
            QObject::connect(handler->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeHandler(QObject *)));
        handler->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(handler);

        // Adjust opposite properties
        if (handler) {
            handler->setProtectedNode(this);
        }
    }
}

/*!
    Removes \a handler from handlers.

    \sa handlers(), addHandler()
 */
void QUmlExecutableNode::removeHandler(QUmlExceptionHandler *handler)
{
    // This is a read-write association end

    if (_handlers.contains(handler)) {
        _handlers.remove(handler);
        if (handler->asQModelingObject())
            handler->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(handler);

        // Adjust opposite properties
        if (handler) {
            handler->setProtectedNode(0);
        }
    }
}

QT_END_NAMESPACE

