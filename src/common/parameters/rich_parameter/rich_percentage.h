/****************************************************************************
 * MeshLab                                                           o o     *
 * A versatile mesh processing toolbox                             o     o   *
 *                                                                _   O  _   *
 * Copyright(C) 2004-2022                                           \/)\/    *
 * Visual Computing Lab                                            /\/|      *
 * ISTI - Italian National Research Council                           |      *
 *                                                                    \      *
 * All rights reserved.                                                      *
 *                                                                           *
 * This program is free software; you can redistribute it and/or modify      *
 * it under the terms of the GNU General Public License as published by      *
 * the Free Software Foundation; either version 2 of the License, or         *
 * (at your option) any later version.                                       *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
 * for more details.                                                         *
 *                                                                           *
 ****************************************************************************/

#ifndef MESHLAB_RICH_PERCENTAGE_H
#define MESHLAB_RICH_PERCENTAGE_H

#include "rich_parameter.h"

class RichPercentage : public RichParameter
{
public:
	RichPercentage(
		const QString& nm,
		const Scalarm defval,
		const Scalarm minval,
		const Scalarm maxval,
		const QString& desc = QString(),
		const QString& tltip = QString(),
		bool hidden = false,
		const QString& category = QString());
	~RichPercentage();

	QString stringType() const;
	QDomElement fillToXMLDocument(QDomDocument& doc, bool saveDescriptionAndTooltip = true) const;

	RichPercentage* clone() const;
	bool operator==(const RichParameter& rb);
	Scalarm min;
	Scalarm max;
};

#endif // MESHLAB_RICH_PERCENTAGE_H
