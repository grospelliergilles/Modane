#include "PtyOnInterface/StiffenedGasService.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

namespace PtyOnInterface {

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
compute(StiffenedGasComputeVars& vars)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

ARCANE_REGISTER_SERVICE_STIFFENEDGAS(StiffenedGas, StiffenedGasService);

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

}  // namespace PtyOnInterface