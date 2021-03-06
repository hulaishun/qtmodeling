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
#include "qumlobjectnode.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlObjectNode

    \inmodule QtUml

    \brief An object node is an abstract activity node that is part of defining object flow in an activity.Object nodes have support for token selection, limitation on the number of tokens, specifying the state required for tokens, and carrying control values.

    \b {QUmlObjectNode is an abstract class.}
 */

/*!
    Creates a new QUmlObjectNode.
*/
QUmlObjectNode::QUmlObjectNode() :
    _isControlType(false),
    _ordering(QtUml::ObjectNodeOrderingKindFIFO),
    _selection(0),
    _upperBound(0)
{
}

/*!
    Destroys the QUmlObjectNode.
 */
QUmlObjectNode::~QUmlObjectNode()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlObjectNode.
*/
QModelingElement *QUmlObjectNode::clone() const
{
    QUmlObjectNode *c = new QUmlObjectNode;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setControlType(isControlType());
    c->setOrdering(ordering());
    if (upperBound())
        c->setUpperBound(dynamic_cast<QUmlValueSpecification *>(upperBound()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The required states of the object available at this point in the activity.

    \sa addInState(), removeInState()
 */
const QSet<QUmlState *> QUmlObjectNode::inStates() const
{
    // This is a read-write association end

    return _inStates;
}

/*!
    Adds \a inState to inStates.

    \sa inStates(), removeInState()
 */
void QUmlObjectNode::addInState(QUmlState *inState)
{
    // This is a read-write association end

    if (!_inStates.contains(inState)) {
        _inStates.insert(inState);
        if (inState && inState->asQModelingObject() && this->asQModelingObject())
            QObject::connect(inState->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeInState(QObject *)));
    }
}

/*!
    Removes \a inState from inStates.

    \sa inStates(), addInState()
 */
void QUmlObjectNode::removeInState(QUmlState *inState)
{
    // This is a read-write association end

    if (_inStates.contains(inState)) {
        _inStates.remove(inState);
    }
}

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QUmlObjectNode::isControlType() const
{
    // This is a read-write property

    return _isControlType;
}

/*!
    Adjusts isControlType to \a isControlType.
 */
void QUmlObjectNode::setControlType(bool isControlType)
{
    // This is a read-write property

    if (_isControlType != isControlType) {
        _isControlType = isControlType;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isControlType");
    }
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QUmlObjectNode::ordering() const
{
    // This is a read-write property

    return _ordering;
}

/*!
    Adjusts ordering to \a ordering.
 */
void QUmlObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write property

    if (_ordering != ordering) {
        _ordering = ordering;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("ordering");
    }
}

/*!
    Selects tokens for outgoing edges.
 */
QUmlBehavior *QUmlObjectNode::selection() const
{
    // This is a read-write association end

    return _selection;
}

/*!
    Adjusts selection to \a selection.
 */
void QUmlObjectNode::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    if (_selection != selection) {
        _selection = selection;
        if (selection && selection->asQModelingObject() && this->asQModelingObject())
            QObject::connect(selection->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSelection()));
    }
}

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlValueSpecification *QUmlObjectNode::upperBound() const
{
    // This is a read-write association end

    return _upperBound;
}

/*!
    Adjusts upperBound to \a upperBound.
 */
void QUmlObjectNode::setUpperBound(QUmlValueSpecification *upperBound)
{
    // This is a read-write association end

    if (_upperBound != upperBound) {
        // Adjust subsetted properties
        removeOwnedElement(_upperBound);

        _upperBound = upperBound;
        if (upperBound && upperBound->asQModelingObject() && this->asQModelingObject())
            QObject::connect(upperBound->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setUpperBound()));
        upperBound->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (upperBound) {
            addOwnedElement(upperBound);
        }
    }
}

QT_END_NAMESPACE

