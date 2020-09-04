#include "Service/Compri2Service.h"

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

namespace Service {

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

Compri2Service::
Compri2Service(const ServiceBuildInfo& bi)
: Compri2ServiceBase<Compri2Service>(bi)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

Compri2Service::
~Compri2Service()
{
}
	

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

void Compri2Service::
compute(Compri2ComputeVars& vars, const ::onf::OnfUtils::Duboi* duboi, Array< Danlacol* >& danlacol)
{
}

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

ARCANE_REGISTER_SERVICE_COMPRI2(Compri2, Compri2Service);

/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/

}  // namespace Service
