/*
 * generated by Xtext 2.11.0
 */
package fr.cea.modane


/**
 * Initialization support for running Xtext languages without Equinox extension registry.
 */
class ModaneStandaloneSetup extends ModaneStandaloneSetupGenerated {

	def static void doSetup() {
		new ModaneStandaloneSetup().createInjectorAndDoEMFRegistration()
	}
}