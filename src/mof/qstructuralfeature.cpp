/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qstructuralfeature.h"
#include "qstructuralfeature_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QStructuralFeaturePrivate::QStructuralFeaturePrivate() :
    isReadOnly(false)
{
}

QStructuralFeaturePrivate::~QStructuralFeaturePrivate()
{
}

/*!
    \class QStructuralFeature

    \inmodule QtMof

    \brief By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.
 */

QStructuralFeature::QStructuralFeature(QMofObject *parent, QMofObject *wrapper) :
    QMofObject(*new QStructuralFeaturePrivate, parent, wrapper),
    _wrappedFeature(new QFeature(this, this)),
    _wrappedTypedElement(new QTypedElement(this, this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this))
{
}

QStructuralFeature::QStructuralFeature(QStructuralFeaturePrivate &dd, QMofObject *parent, QMofObject *wrapper) :
    QMofObject(dd, parent, wrapper),
    _wrappedFeature(new QFeature(this, this)),
    _wrappedTypedElement(new QTypedElement(this, this)),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this))
{
}

QStructuralFeature::~QStructuralFeature()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QStructuralFeature::ownedElements() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QStructuralFeature::owner() const
{
    return (qmofobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QStructuralFeature::ownedComments() const
{
    return (qmofobject_cast<const QElement *>(this))->ownedComments();
}

void QStructuralFeature::addOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QStructuralFeature::removeOwnedComment(QComment *ownedComment)
{
    (qmofobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QStructuralFeature::name() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->name();
}

void QStructuralFeature::setName(QString name)
{
    (qmofobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtMof::VisibilityKind QStructuralFeature::visibility() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->visibility();
}

void QStructuralFeature::setVisibility(QtMof::VisibilityKind visibility)
{
    (qmofobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QStructuralFeature::qualifiedName() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QStructuralFeature::namespace_() const
{
    return (qmofobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QStructuralFeature::isLeaf() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QStructuralFeature::setLeaf(bool isLeaf)
{
    (qmofobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QStructuralFeature::redefinedElements() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QClassifier *> *QStructuralFeature::redefinitionContexts() const
{
    return (qmofobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QStructuralFeature::isStatic() const
{
    return (qmofobject_cast<const QFeature *>(this))->isStatic();
}

void QStructuralFeature::setStatic(bool isStatic)
{
    (qmofobject_cast<QFeature *>(this))->setStatic(isStatic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
const QSet<QClassifier *> *QStructuralFeature::featuringClassifiers() const
{
    return (qmofobject_cast<const QFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QType *QStructuralFeature::type() const
{
    return (qmofobject_cast<const QTypedElement *>(this))->type();
}

void QStructuralFeature::setType(QType *type)
{
    (qmofobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QStructuralFeature::upper() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->upper();
}

void QStructuralFeature::setUpper(qint32 upper)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setUpper(upper);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QStructuralFeature::isUnique() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->isUnique();
}

void QStructuralFeature::setUnique(bool isUnique)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setUnique(isUnique);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QStructuralFeature::isOrdered() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->isOrdered();
}

void QStructuralFeature::setOrdered(bool isOrdered)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setOrdered(isOrdered);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QStructuralFeature::lower() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->lower();
}

void QStructuralFeature::setLower(qint32 lower)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QStructuralFeature::upperValue() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->upperValue();
}

void QStructuralFeature::setUpperValue(QValueSpecification *upperValue)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QStructuralFeature::lowerValue() const
{
    return (qmofobject_cast<const QMultiplicityElement *>(this))->lowerValue();
}

void QStructuralFeature::setLowerValue(QValueSpecification *lowerValue)
{
    (qmofobject_cast<QMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QStructuralFeature
// ---------------------------------------------------------------

/*!
    States whether the feature's value may be modified by a client.
 */
bool QStructuralFeature::isReadOnly() const
{
    // This is a read-write attribute

    Q_D(const QStructuralFeature);
    return d->isReadOnly;
}

void QStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write attribute

    Q_D(QStructuralFeature);
    if (d->isReadOnly != isReadOnly) {
        d->isReadOnly = isReadOnly;
    }
}

#include "moc_qstructuralfeature.cpp"

QT_END_NAMESPACE_QTMOF
