#ifndef __FAMILYIMPL_H__
#define __FAMILYIMPL_H__

class AccountImpl;

class FamilyImpl : public AccountImpl
{
public:
	void Update(string _msg) const;
}

#endif //__FAMILYIMPL_H__
