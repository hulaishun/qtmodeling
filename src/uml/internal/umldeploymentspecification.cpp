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
#include "umldeploymentspecification_p.h"

#include "private/umldeployment_p.h"

/*!
    \class UmlDeploymentSpecification

    \inmodule QtUml

    \brief A deployment specification specifies a set of properties that determine execution parameters of a component artifact that is deployed on a node. A deployment specification can be aimed at a specific type of container. An artifact that reifies or implements deployment specification properties is a deployment descriptor.
 */

UmlDeploymentSpecification::UmlDeploymentSpecification() :
    _deployment(0)
{
}

// OWNED ATTRIBUTES

/*!
    The deployment with which the DeploymentSpecification is associated.
 */
UmlDeployment *UmlDeploymentSpecification::deployment() const
{
    // This is a read-write association end

    return _deployment;
}

void UmlDeploymentSpecification::setDeployment(UmlDeployment *deployment)
{
    // This is a read-write association end

    if (_deployment != deployment) {
        // Adjust subsetted properties

        _deployment = deployment;

        // Adjust subsetted properties
        setOwner(deployment);
    }
}

/*!
    The location where an Artifact is deployed onto a Node. This is typically a 'directory' or 'memory address'.
 */
QString UmlDeploymentSpecification::deploymentLocation() const
{
    // This is a read-write property

    return _deploymentLocation;
}

void UmlDeploymentSpecification::setDeploymentLocation(QString deploymentLocation)
{
    // This is a read-write property

    if (_deploymentLocation != deploymentLocation) {
        _deploymentLocation = deploymentLocation;
    }
}

/*!
    The location where a component Artifact executes. This may be a local or remote location.
 */
QString UmlDeploymentSpecification::executionLocation() const
{
    // This is a read-write property

    return _executionLocation;
}

void UmlDeploymentSpecification::setExecutionLocation(QString executionLocation)
{
    // This is a read-write property

    if (_executionLocation != executionLocation) {
        _executionLocation = executionLocation;
    }
}

