#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <string>

class Observer;
class AccountImpl;

class Account : public Observer
{
public:
	Account(string _type);
	~Account();
	virtual void Update(Subject _subj, string _msg) const;
private:
	AccountImpl* m_impl;
}

#endif
