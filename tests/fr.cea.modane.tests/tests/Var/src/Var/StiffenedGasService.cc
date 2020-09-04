#include "Var/StiffenedGasService.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

namespace Var {

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

StiffenedGasService::
StiffenedGasService(const ServiceBuildInfo& bi)
: StiffenedGasServiceBase<StiffenedGasService>(bi)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

StiffenedGasService::
~StiffenedGasService()
{
}
	

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

void StiffenedGasService::
apply(StiffenedGasApplyVars& vars, const Real coef)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

ARCANE_REGISTER_SERVICE_STIFFENEDGAS(StiffenedGas, StiffenedGasService);

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

}  // namespace Var