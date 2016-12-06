#include <string>
#include "familyimpl.h"
#include "exchangeimpl.h"
#include "savingimpl.h"

using namespace std;

static Factory::CreateImpl(string _impl, string _type)
{
	if(_type == "investment") { return new  }
	else if(_type == "saving") {}
	else if(_type == "family") {}
}
