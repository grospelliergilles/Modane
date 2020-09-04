/*******************************************************************************
 * Copyright (c) 2020 CEA
 * This program and the accompanying materials are made available under the 
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 * Contributors: see AUTHORS file
 *******************************************************************************/
package fr.cea.modane.generator.cpp

import fr.cea.modane.modane.ItemGroupType

class ItemGroupTypeExtensions 
{
	static def boolean isComponent(ItemGroupType it) 
	{ 
		it == ItemGroupType::MAT_CELL_GROUP || 
		it == ItemGroupType::ENV_CELL_GROUP || 
		it == ItemGroupType::COMPONENT_CELL_GROUP || 
		it == ItemGroupType::ALL_ENV_CELL_GROUP
	}
}