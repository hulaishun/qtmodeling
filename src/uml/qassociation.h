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
#ifndef QTUML_QASSOCIATION_H
#define QTUML_QASSOCIATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QClassifier>
#include <QtUml/QRelationship>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QAssociationPrivate;
class QType;
class QProperty;

class Q_UML_EXPORT QAssociation : public QObject, public QClassifier, public QRelationship
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

    // From QNamespace
    Q_PROPERTY(QList<QElementImport *> * elementImports READ elementImports)
    Q_PROPERTY(const QList<QPackageableElement *> * importedMembers READ importedMembers)
    Q_PROPERTY(const QList<QNamedElement *> * members READ members)
    Q_PROPERTY(const QList<QNamedElement *> * ownedMembers READ ownedMembers)
    Q_PROPERTY(QList<QConstraint *> * ownedRules READ ownedRules)
    Q_PROPERTY(QList<QPackageImport *> * packageImports READ packageImports)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QType
    Q_PROPERTY(QPackage * package READ package WRITE setPackage)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QList<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QList<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QTemplateableElement
    Q_PROPERTY(QList<QTemplateBinding *> * templateBindings READ templateBindings)

    // From QClassifier
    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization)
    Q_PROPERTY(const QList<QProperty *> * attributes READ attributes)
    Q_PROPERTY(QList<QCollaborationUse *> * collaborationUses READ collaborationUses)
    Q_PROPERTY(const QList<QFeature *> * features READ features)
    Q_PROPERTY(const QList<QClassifier *> * generals READ generals)
    Q_PROPERTY(QList<QGeneralization *> * generalizations READ generalizations)
    Q_PROPERTY(const QList<QNamedElement *> * inheritedMembers READ inheritedMembers)
    Q_PROPERTY(QRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QList<QUseCase *> * ownedUseCases READ ownedUseCases)
    Q_PROPERTY(QList<QGeneralizationSet *> * powertypeExtents READ powertypeExtents)
    Q_PROPERTY(QList<QClassifier *> * redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(QList<QSubstitution *> * substitutions READ substitutions)
    Q_PROPERTY(QClassifierTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QList<QUseCase *> * useCases READ useCases)

    // From QRelationship
    Q_PROPERTY(const QList<QElement *> * relatedElements READ relatedElements)

    // From QAssociation
    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived)
    Q_PROPERTY(const QList<QType *> * endTypes READ endTypes)
    Q_PROPERTY(QList<QProperty *> * memberEnds READ memberEnds)
    Q_PROPERTY(QList<QProperty *> * navigableOwnedEnds READ navigableOwnedEnds)
    Q_PROPERTY(QList<QProperty *> * ownedEnds READ ownedEnds)

public:
    explicit QAssociation(QObject *parent = 0);
    virtual ~QAssociation();

    // Attributes (except those derived && !derivedUnion)
    bool isDerived() const;
    void setDerived(bool isDerived);

    // Association-ends (except those derived && !derivedUnion)
    QList<QProperty *> *memberEnds();
    QList<QProperty *> *navigableOwnedEnds();
    QList<QProperty *> *ownedEnds();

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QList<QType *> *endTypes() const;

private:
    Q_DISABLE_COPY(QAssociation)
    Q_DECLARE_PRIVATE(QAssociation)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QAssociation *>)
Q_DECLARE_METATYPE(QList<QtUml::QAssociation *> *)

QT_END_HEADER

#endif // QTUML_QASSOCIATION_H
