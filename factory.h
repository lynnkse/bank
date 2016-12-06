#ifndef __FACTORY_H__
#define __FACTORY_H__

#include <string>

class AccountImpl;

class Factory
{
public:
	static AccountImpl* CreateImpl(string _impl, string _type);
};

#endif
