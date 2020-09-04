#include "PtyOnInterface/MyInterfDefaultService.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

namespace PtyOnInterface {

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

MyInterfDefaultService::
MyInterfDefaultService(const ServiceBuildInfo& bi)
: MyInterfDefaultServiceBase<MyInterfDefaultService>(bi)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

MyInterfDefaultService::
~MyInterfDefaultService()
{
}
	

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

ARCANE_REGISTER_SERVICE_MYINTERFDEFAULT(MyInterfDefault, MyInterfDefaultService);

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

}  // namespace PtyOnInterface