#include "Parameter/InterfaceTypeDefault.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

using namespace Arcane;
using namespace Arcane::Materials;
namespace Parameter {

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

InterfaceTypeDefault::
InterfaceTypeDefault(IMesh* mesh)
: InterfaceTypeDefaultBase<InterfaceTypeDefault>(mesh)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

InterfaceTypeDefault::
~InterfaceTypeDefault()
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

void InterfaceTypeDefault::
f(InterfaceTypeDefaultFVars& vars)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/


/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

} /* namespace Parameter */
