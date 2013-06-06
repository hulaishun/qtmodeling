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
#ifndef QUMLCLASSIFIER_H
#define QUMLCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlType>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlTemplateableElement>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlRedefinableTemplateSignature;
class QUmlClassifierTemplateParameter;
class QUmlUseCase;
class QUmlSubstitution;
class QUmlGeneralizationSet;
class QUmlNamedElement;
class QUmlProperty;
class QUmlGeneralization;
class QUmlCollaborationUse;
class QUmlClassifier;
class QUmlFeature;

class QUmlClassifierPrivate;

class Q_UML_EXPORT QUmlClassifier : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QUmlPackage * package READ package WRITE setPackage)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(QSet<QUmlTemplateBinding *> templateBindings READ templateBindings)

    Q_PROPERTY(bool isAbstract READ isAbstract WRITE setAbstract RESET unsetAbstract)
    Q_PROPERTY(bool isFinalSpecialization READ isFinalSpecialization WRITE setFinalSpecialization RESET unsetFinalSpecialization)
    Q_PROPERTY(QSet<QUmlUseCase *> ownedUseCases READ ownedUseCases)
    Q_PROPERTY(QSet<QUmlGeneralizationSet *> powertypeExtents READ powertypeExtents)
    Q_PROPERTY(QSet<QUmlUseCase *> useCases READ useCases)
    Q_PROPERTY(QUmlClassifierTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinedClassifiers READ redefinedClassifiers)
    Q_PROPERTY(QUmlRedefinableTemplateSignature * ownedTemplateSignature READ ownedTemplateSignature WRITE setOwnedTemplateSignature)
    Q_PROPERTY(QSet<QUmlCollaborationUse *> collaborationUses READ collaborationUses)
    Q_PROPERTY(QSet<QUmlProperty *> attributes READ attributes)
    Q_PROPERTY(QSet<QUmlFeature *> features READ features)
    Q_PROPERTY(QSet<QUmlClassifier *> generals READ generals STORED false)
    Q_PROPERTY(QUmlCollaborationUse * representation READ representation WRITE setRepresentation)
    Q_PROPERTY(QSet<QUmlGeneralization *> generalizations READ generalizations)
    Q_PROPERTY(QSet<QUmlNamedElement *> inheritedMembers READ inheritedMembers STORED false)
    Q_PROPERTY(QSet<QUmlSubstitution *> substitutions READ substitutions)

    Q_DISABLE_COPY(QUmlClassifier)
    Q_DECLARE_PRIVATE(QUmlClassifier)

public:
    Q_INVOKABLE explicit QUmlClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlClassifier();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Attributes from aggregated QUmlPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from aggregated QUmlType
    Q_INVOKABLE QUmlPackage *package() const;
    Q_INVOKABLE void setPackage(QUmlPackage *package);

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QUmlClassifier *> redefinitionContexts() const;

    // Association ends from aggregated QUmlTemplateableElement
    Q_INVOKABLE QSet<QUmlTemplateBinding *> templateBindings() const;
    Q_INVOKABLE void addTemplateBinding(QUmlTemplateBinding *templateBinding);
    Q_INVOKABLE void removeTemplateBinding(QUmlTemplateBinding *templateBinding);

    // Attributes from QUmlClassifier
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE void unsetAbstract();
    Q_INVOKABLE bool isFinalSpecialization() const;
    Q_INVOKABLE void setFinalSpecialization(bool isFinalSpecialization);
    Q_INVOKABLE void unsetFinalSpecialization();

    // Association ends from QUmlClassifier
    Q_INVOKABLE QSet<QUmlUseCase *> ownedUseCases() const;
    Q_INVOKABLE void addOwnedUseCase(QUmlUseCase *ownedUseCase);
    Q_INVOKABLE void removeOwnedUseCase(QUmlUseCase *ownedUseCase);
    Q_INVOKABLE QSet<QUmlGeneralizationSet *> powertypeExtents() const;
    Q_INVOKABLE void addPowertypeExtent(QUmlGeneralizationSet *powertypeExtent);
    Q_INVOKABLE void removePowertypeExtent(QUmlGeneralizationSet *powertypeExtent);
    Q_INVOKABLE QSet<QUmlUseCase *> useCases() const;
    Q_INVOKABLE void addUseCase(QUmlUseCase *useCase);
    Q_INVOKABLE void removeUseCase(QUmlUseCase *useCase);
    Q_INVOKABLE QUmlClassifierTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlClassifierTemplateParameter *templateParameter);
    Q_INVOKABLE QSet<QUmlClassifier *> redefinedClassifiers() const;
    Q_INVOKABLE void addRedefinedClassifier(QUmlClassifier *redefinedClassifier);
    Q_INVOKABLE void removeRedefinedClassifier(QUmlClassifier *redefinedClassifier);
    Q_INVOKABLE QUmlRedefinableTemplateSignature *ownedTemplateSignature() const;
    Q_INVOKABLE void setOwnedTemplateSignature(QUmlRedefinableTemplateSignature *ownedTemplateSignature);
    Q_INVOKABLE QSet<QUmlCollaborationUse *> collaborationUses() const;
    Q_INVOKABLE void addCollaborationUse(QUmlCollaborationUse *collaborationUse);
    Q_INVOKABLE void removeCollaborationUse(QUmlCollaborationUse *collaborationUse);
    Q_INVOKABLE QSet<QUmlProperty *> attributes() const;
    Q_INVOKABLE QSet<QUmlFeature *> features() const;
    Q_INVOKABLE QSet<QUmlClassifier *> generals() const;
    Q_INVOKABLE void addGeneral(QUmlClassifier *general);
    Q_INVOKABLE void removeGeneral(QUmlClassifier *general);
    Q_INVOKABLE QUmlCollaborationUse *representation() const;
    Q_INVOKABLE void setRepresentation(QUmlCollaborationUse *representation);
    Q_INVOKABLE QSet<QUmlGeneralization *> generalizations() const;
    Q_INVOKABLE void addGeneralization(QUmlGeneralization *generalization);
    Q_INVOKABLE void removeGeneralization(QUmlGeneralization *generalization);
    Q_INVOKABLE QSet<QUmlNamedElement *> inheritedMembers() const;
    Q_INVOKABLE QSet<QUmlSubstitution *> substitutions() const;
    Q_INVOKABLE void addSubstitution(QUmlSubstitution *substitution);
    Q_INVOKABLE void removeSubstitution(QUmlSubstitution *substitution);

    // Operations
    Q_INVOKABLE QSet<QUmlFeature *> allFeatures() const;
    Q_INVOKABLE QSet<QUmlClassifier *> allParents() const;
    Q_INVOKABLE bool conformsTo(const QUmlClassifier *other) const;
    Q_INVOKABLE bool hasVisibilityOf(const QUmlNamedElement *n) const;
    Q_INVOKABLE QSet<QUmlNamedElement *> inherit(QSet<QUmlNamedElement *> inhs) const;
    Q_INVOKABLE QSet<QUmlNamedElement *> inheritableMembers(const QUmlClassifier *c) const;
    Q_INVOKABLE bool isTemplate() const;
    Q_INVOKABLE bool maySpecializeType(const QUmlClassifier *c) const;
    Q_INVOKABLE QSet<QUmlClassifier *> parents() const;

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClientDependency(QWrappedObjectPointer<QUmlSubstitution> substitution);
    Q_INVOKABLE void removeClientDependency(QWrappedObjectPointer<QUmlSubstitution> substitution);

    virtual void setPropertyData();

    // Classes which access read-only opposite properties should be friend
    friend class QUmlFeaturePrivate;

protected:
    explicit QUmlClassifier(QUmlClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlNamespace *_wrappedUmlNamespace;
    QUmlType *_wrappedUmlType;
    QUmlRedefinableElement *_wrappedUmlRedefinableElement;
    QUmlTemplateableElement *_wrappedUmlTemplateableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCLASSIFIER_H
