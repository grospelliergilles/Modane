#include "Service/SingletonDefaultService.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

namespace Service {

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

SingletonDefaultService::
SingletonDefaultService(const ServiceBuildInfo& bi)
: SingletonDefaultServiceBase<SingletonDefaultService>(bi)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

SingletonDefaultService::
~SingletonDefaultService()
{
}
	

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

ARCANE_REGISTER_SERVICE_SINGLETONDEFAULT(SingletonDefault, SingletonDefaultService);

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

}  // namespace Service
