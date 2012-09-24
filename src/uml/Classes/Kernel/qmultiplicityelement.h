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
#ifndef CLASSES_KERNEL_QMULTIPLICITYELEMENT_H
#define CLASSES_KERNEL_QMULTIPLICITYELEMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QMultiplicityElementPrivate;

class QValueSpecification;

class Q_UML_EXPORT QMultiplicityElement : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setIsOrdered)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setIsUnique)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)

public:
    explicit QMultiplicityElement(QObject *parent = 0);
    virtual ~QMultiplicityElement();

    // Attributes (except those derived && !derivedUnion)
    bool isOrdered() const;
    void setIsOrdered(bool isOrdered);
    bool isUnique() const;
    void setIsUnique(bool isUnique);

    // Association-ends (except those derived && !derivedUnion)
    QValueSpecification *lowerValue() const;
    void setLowerValue(QValueSpecification *lowerValue);
    QValueSpecification *upperValue() const;
    void setUpperValue(QValueSpecification *upperValue);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    bool includesCardinality(qint32 C) const;
    bool includesMultiplicity(QMultiplicityElement *M) const;
    bool isMultivalued() const;
    qint32 lower() const;
    qint32 lowerBound() const;
    qint32 upper() const;
    qint32 upperBound() const;

private:
    Q_DISABLE_COPY(QMultiplicityElement)
    Q_DECLARE_PRIVATE(QMultiplicityElement)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QMultiplicityElement) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QMultiplicityElement) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QMULTIPLICITYELEMENT_H

