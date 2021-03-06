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
#ifndef QUMLSTATEOBJECT_H
#define QUMLSTATEOBJECT_H

#include <QtUml/QtUmlGlobal>

#include <QtModeling/QModelingObject>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlState;
class QModelingObjectPrivate;
class Q_UML_EXPORT QUmlStateObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlStateObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Element]
    Q_PROPERTY(QSet<QObject *> ownedComments READ ownedComments NOTIFY ownedCommentsChanged)
    Q_PROPERTY(QSet<QObject *> ownedElements READ ownedElements NOTIFY ownedElementsChanged)
    Q_PROPERTY(QObject * owner READ owner NOTIFY ownerChanged)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QObject *> clientDependencies READ clientDependencies NOTIFY clientDependenciesChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QObject * nameExpression READ nameExpression WRITE setNameExpression NOTIFY nameExpressionChanged)
    Q_PROPERTY(QObject * namespace_ READ namespace_ NOTIFY namespaceChanged)
    Q_PROPERTY(QString qualifiedName READ qualifiedName NOTIFY qualifiedNameChanged STORED false)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility NOTIFY visibilityChanged)

    // Properties [Namespace]
    Q_PROPERTY(QSet<QObject *> elementImports READ elementImports NOTIFY elementImportsChanged)
    Q_PROPERTY(QSet<QObject *> importedMembers READ importedMembers NOTIFY importedMembersChanged STORED false)
    Q_PROPERTY(QSet<QObject *> members READ members NOTIFY membersChanged)
    Q_PROPERTY(QSet<QObject *> ownedMembers READ ownedMembers NOTIFY ownedMembersChanged)
    Q_PROPERTY(QSet<QObject *> ownedRules READ ownedRules NOTIFY ownedRulesChanged)
    Q_PROPERTY(QSet<QObject *> packageImports READ packageImports NOTIFY packageImportsChanged)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf NOTIFY isLeafChanged RESET unsetLeaf)
    Q_PROPERTY(QSet<QObject *> redefinedElements READ redefinedElements NOTIFY redefinedElementsChanged)

    // Properties [Vertex]
    Q_PROPERTY(QObject * container READ container WRITE setContainer NOTIFY containerChanged)
    Q_PROPERTY(QSet<QObject *> incomings READ incomings NOTIFY incomingsChanged STORED false)
    Q_PROPERTY(QSet<QObject *> outgoings READ outgoings NOTIFY outgoingsChanged STORED false)

    // Properties [State]
    Q_PROPERTY(QSet<QObject *> connections READ connections NOTIFY connectionsChanged)
    Q_PROPERTY(QSet<QObject *> connectionPoints READ connectionPoints NOTIFY connectionPointsChanged)
    Q_PROPERTY(QSet<QObject *> deferrableTriggers READ deferrableTriggers NOTIFY deferrableTriggersChanged)
    Q_PROPERTY(QObject * doActivity READ doActivity WRITE setDoActivity NOTIFY doActivityChanged)
    Q_PROPERTY(QObject * entry READ entry WRITE setEntry NOTIFY entryChanged)
    Q_PROPERTY(QObject * exit READ exit WRITE setExit NOTIFY exitChanged)
    Q_PROPERTY(bool isComposite READ isComposite NOTIFY isCompositeChanged RESET unsetComposite STORED false)
    Q_PROPERTY(bool isOrthogonal READ isOrthogonal NOTIFY isOrthogonalChanged RESET unsetOrthogonal STORED false)
    Q_PROPERTY(bool isSimple READ isSimple NOTIFY isSimpleChanged RESET unsetSimple STORED false)
    Q_PROPERTY(bool isSubmachineState READ isSubmachineState NOTIFY isSubmachineStateChanged RESET unsetSubmachineState STORED false)
    Q_PROPERTY(QObject * redefinedState READ redefinedState WRITE setRedefinedState NOTIFY redefinedStateChanged)
    Q_PROPERTY(QObject * redefinitionContext READ redefinitionContext NOTIFY redefinitionContextChanged STORED false)
    Q_PROPERTY(QSet<QObject *> regions READ regions NOTIFY regionsChanged)
    Q_PROPERTY(QObject * stateInvariant READ stateInvariant WRITE setStateInvariant NOTIFY stateInvariantChanged)
    Q_PROPERTY(QObject * submachine READ submachine WRITE setSubmachine NOTIFY submachineChanged)

public:
    Q_INVOKABLE explicit QUmlStateObject(QUmlState *modelingElement);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QObject *> ownedComments() const;
    Q_INVOKABLE const QSet<QObject *> ownedElements() const;
    Q_INVOKABLE QObject *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QObject *> clientDependencies() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QObject *nameExpression() const;
    Q_INVOKABLE QObject *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [Namespace]
    Q_INVOKABLE const QSet<QObject *> elementImports() const;
    Q_INVOKABLE const QSet<QObject *> importedMembers() const;
    Q_INVOKABLE const QSet<QObject *> members() const;
    Q_INVOKABLE const QSet<QObject *> ownedMembers() const;
    Q_INVOKABLE const QSet<QObject *> ownedRules() const;
    Q_INVOKABLE const QSet<QObject *> packageImports() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QObject *> redefinedElements() const;

    // Owned attributes [Vertex]
    Q_INVOKABLE QObject *container() const;
    Q_TODO Q_INVOKABLE const QSet<QObject *> incomings() const;
    Q_TODO Q_INVOKABLE const QSet<QObject *> outgoings() const;

    // Owned attributes [State]
    Q_INVOKABLE const QSet<QObject *> connections() const;
    Q_INVOKABLE const QSet<QObject *> connectionPoints() const;
    Q_INVOKABLE const QSet<QObject *> deferrableTriggers() const;
    Q_INVOKABLE QObject *doActivity() const;
    Q_INVOKABLE QObject *entry() const;
    Q_INVOKABLE QObject *exit() const;
    Q_INVOKABLE bool isComposite() const;
    Q_TODO Q_INVOKABLE bool isOrthogonal() const;
    Q_TODO Q_INVOKABLE bool isSimple() const;
    Q_TODO Q_INVOKABLE bool isSubmachineState() const;
    Q_INVOKABLE QObject *redefinedState() const;
    Q_TODO Q_INVOKABLE QObject *redefinitionContext() const;
    Q_INVOKABLE const QSet<QObject *> regions() const;
    Q_INVOKABLE QObject *stateInvariant() const;
    Q_INVOKABLE QObject *submachine() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QObject *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QObject *> allNamespaces() const;
    Q_TODO Q_INVOKABLE QSet<QObject *> allOwningPackages() const;
    Q_TODO Q_INVOKABLE bool isDistinguishableFrom(QObject *n, QObject *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [Namespace]
    Q_TODO Q_INVOKABLE QSet<QObject *> excludeCollisions(QSet<QObject *> imps) const;
    Q_TODO Q_INVOKABLE QSet<QString> getNamesOfMember(QObject *element) const;
    Q_TODO Q_INVOKABLE QSet<QObject *> importMembers(QSet<QObject *> imps) const;
    Q_TODO Q_INVOKABLE bool membersAreDistinguishable() const;

    // Operations [RedefinableElement]

    // Operations [Vertex]

    // Operations [State]
    Q_TODO Q_INVOKABLE QObject *containingStateMachine() const;
    Q_TODO Q_INVOKABLE bool isConsistentWith(QObject *redefinee) const;
    Q_TODO Q_INVOKABLE bool isRedefinitionContextValid(QObject *redefined) const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(QObject *ownedComment);
    void removeOwnedComment(QObject *ownedComment);
    void Q_DECL_HIDDEN addOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN removeOwnedElement(QObject *ownedElement);
    void Q_DECL_HIDDEN setOwner(QObject *owner = 0);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(QObject *clientDependency);
    void removeClientDependency(QObject *clientDependency);
    void setName(QString name);
    void setNameExpression(QObject *nameExpression = 0);
    void Q_DECL_HIDDEN setNamespace(QObject *namespace_ = 0);
    void Q_DECL_HIDDEN setQualifiedName(QString qualifiedName);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [Namespace]
    void addElementImport(QObject *elementImport);
    void removeElementImport(QObject *elementImport);
    void Q_DECL_HIDDEN addImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN removeImportedMember(QObject *importedMember);
    void Q_DECL_HIDDEN addMember(QObject *member);
    void Q_DECL_HIDDEN removeMember(QObject *member);
    void Q_DECL_HIDDEN addOwnedMember(QObject *ownedMember);
    void Q_DECL_HIDDEN removeOwnedMember(QObject *ownedMember);
    void addOwnedRule(QObject *ownedRule);
    void removeOwnedRule(QObject *ownedRule);
    void addPackageImport(QObject *packageImport);
    void removePackageImport(QObject *packageImport);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);
    void unsetLeaf();
    void Q_DECL_HIDDEN addRedefinedElement(QObject *redefinedElement);
    void Q_DECL_HIDDEN removeRedefinedElement(QObject *redefinedElement);

    // Slots for owned attributes [Vertex]
    void setContainer(QObject *container = 0);
    void Q_DECL_HIDDEN addIncoming(QObject *incoming);
    void Q_DECL_HIDDEN removeIncoming(QObject *incoming);
    void Q_DECL_HIDDEN addOutgoing(QObject *outgoing);
    void Q_DECL_HIDDEN removeOutgoing(QObject *outgoing);

    // Slots for owned attributes [State]
    void addConnection(QObject *connection);
    void removeConnection(QObject *connection);
    void addConnectionPoint(QObject *connectionPoint);
    void removeConnectionPoint(QObject *connectionPoint);
    void addDeferrableTrigger(QObject *deferrableTrigger);
    void removeDeferrableTrigger(QObject *deferrableTrigger);
    void setDoActivity(QObject *doActivity = 0);
    void setEntry(QObject *entry = 0);
    void setExit(QObject *exit = 0);
    void Q_DECL_HIDDEN setComposite(bool isComposite);
    void unsetComposite();
    void Q_DECL_HIDDEN setOrthogonal(bool isOrthogonal);
    void unsetOrthogonal();
    void Q_DECL_HIDDEN setSimple(bool isSimple);
    void unsetSimple();
    void Q_DECL_HIDDEN setSubmachineState(bool isSubmachineState);
    void unsetSubmachineState();
    void setRedefinedState(QObject *redefinedState = 0);
    void Q_DECL_HIDDEN setRedefinitionContext(QObject *redefinitionContext = 0);
    void addRegion(QObject *region);
    void removeRegion(QObject *region);
    void setStateInvariant(QObject *stateInvariant = 0);
    void setSubmachine(QObject *submachine = 0);

Q_SIGNALS:

    // Signals for owned attributes [Element]
    void ownedCommentsChanged(QSet<QObject *> ownedComments);
    void ownedElementsChanged(QSet<QObject *> ownedElements);
    void ownerChanged(QObject *owner);

    // Signals for owned attributes [NamedElement]
    void clientDependenciesChanged(QSet<QObject *> clientDependencies);
    void nameChanged(QString name);
    void nameExpressionChanged(QObject *nameExpression);
    void namespaceChanged(QObject *namespace_);
    void qualifiedNameChanged(QString qualifiedName);
    void visibilityChanged(QtUml::VisibilityKind visibility);

    // Signals for owned attributes [Namespace]
    void elementImportsChanged(QSet<QObject *> elementImports);
    void importedMembersChanged(QSet<QObject *> importedMembers);
    void membersChanged(QSet<QObject *> members);
    void ownedMembersChanged(QSet<QObject *> ownedMembers);
    void ownedRulesChanged(QSet<QObject *> ownedRules);
    void packageImportsChanged(QSet<QObject *> packageImports);

    // Signals for owned attributes [RedefinableElement]
    void isLeafChanged(bool isLeaf);
    void redefinedElementsChanged(QSet<QObject *> redefinedElements);

    // Signals for owned attributes [Vertex]
    void containerChanged(QObject *container);
    void incomingsChanged(QSet<QObject *> incomings);
    void outgoingsChanged(QSet<QObject *> outgoings);

    // Signals for owned attributes [State]
    void connectionsChanged(QSet<QObject *> connections);
    void connectionPointsChanged(QSet<QObject *> connectionPoints);
    void deferrableTriggersChanged(QSet<QObject *> deferrableTriggers);
    void doActivityChanged(QObject *doActivity);
    void entryChanged(QObject *entry);
    void exitChanged(QObject *exit);
    void isCompositeChanged(bool isComposite);
    void isOrthogonalChanged(bool isOrthogonal);
    void isSimpleChanged(bool isSimple);
    void isSubmachineStateChanged(bool isSubmachineState);
    void redefinedStateChanged(QObject *redefinedState);
    void redefinitionContextChanged(QObject *redefinitionContext);
    void regionsChanged(QSet<QObject *> regions);
    void stateInvariantChanged(QObject *stateInvariant);
    void submachineChanged(QObject *submachine);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QUMLSTATEOBJECT_H

