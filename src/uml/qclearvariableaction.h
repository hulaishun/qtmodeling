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
#ifndef QTUML_QCLEARVARIABLEACTION_H
#define QTUML_QCLEARVARIABLEACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QVariableAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QClearVariableActionPrivate;

class Q_UML_EXPORT QClearVariableAction : public QObject, public QVariableAction
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QList<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QList<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(const QNamespace * namespace_ READ namespace_)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QList<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QActivityNode
    Q_PROPERTY(QActivity * activity READ activity WRITE setActivity)
    Q_PROPERTY(const QList<QActivityGroup *> * inGroup READ inGroup)
    Q_PROPERTY(QList<QInterruptibleActivityRegion *> * inInterruptibleRegion READ inInterruptibleRegion)
    Q_PROPERTY(QList<QActivityPartition *> * inPartition READ inPartition)
    Q_PROPERTY(QStructuredActivityNode * inStructuredNode READ inStructuredNode WRITE setInStructuredNode)
    Q_PROPERTY(QList<QActivityEdge *> * incomings READ incomings)
    Q_PROPERTY(QList<QActivityEdge *> * outgoings READ outgoings)
    Q_PROPERTY(QList<QActivityNode *> * redefinedNodes READ redefinedNodes)

    // From QExecutableNode
    Q_PROPERTY(QList<QExceptionHandler *> * handlers READ handlers)

    // From QAction
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant)
    Q_PROPERTY(const QClassifier * context READ context)
    Q_PROPERTY(const QList<QInputPin *> * inputs READ inputs)
    Q_PROPERTY(QList<QConstraint *> * localPostconditions READ localPostconditions)
    Q_PROPERTY(QList<QConstraint *> * localPreconditions READ localPreconditions)
    Q_PROPERTY(const QList<QOutputPin *> * outputs READ outputs)

    // From QVariableAction
    Q_PROPERTY(QVariable * variable READ variable WRITE setVariable)

public:
    explicit QClearVariableAction(QObject *parent = 0);
    virtual ~QClearVariableAction();

private:
    Q_DISABLE_COPY(QClearVariableAction)
    Q_DECLARE_PRIVATE(QClearVariableAction)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QClearVariableAction *>)
Q_DECLARE_METATYPE(QList<QtUml::QClearVariableAction *> *)

QT_END_HEADER

#endif // QTUML_QCLEARVARIABLEACTION_H
