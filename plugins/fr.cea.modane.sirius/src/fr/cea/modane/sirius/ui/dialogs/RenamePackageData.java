/*******************************************************************************
 * Copyright (c) 2020 CEA
 * This program and the accompanying materials are made available under the 
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 *
 * SPDX-License-Identifier: EPL-2.0
 * Contributors: see AUTHORS file
 *******************************************************************************/
package fr.cea.modane.sirius.ui.dialogs;

public class RenamePackageData {
	private String newPackageName;
	private boolean renameSubPackages;
	
	public RenamePackageData(String newPackageName, boolean renameSubPackages) {
		this.newPackageName = newPackageName;
		this.renameSubPackages = renameSubPackages;
	}
	
	public String getNewPackageName() {
		return newPackageName;
	}
	
	public void setNewPackageName(String newPackageName) {
		this.newPackageName = newPackageName;
	}
	
	public boolean isRenameSubPackages() {
		return renameSubPackages;
	}
	
	public void setRenameSubPackages(boolean renameSubPackages) {
		this.renameSubPackages = renameSubPackages;
	}
}
