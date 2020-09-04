/*******************************************************************************
 * Copyright (c) 2020 CEA
 * This program and the accompanying materials are made available under the 
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 * Contributors: see AUTHORS file
 *******************************************************************************/
package fr.cea.modane

import java.util.LinkedHashSet
import fr.cea.modane.modane.Struct
import fr.cea.modane.modane.Pty

class StructExtensions 
{
	static def LinkedHashSet<Pty> getAllProperties(Struct it) 
	{
		val result = new LinkedHashSet<Pty>
		for (p : parents) result.addAll(p.allProperties)
		result.addAll(properties)
		return result
	}	
}