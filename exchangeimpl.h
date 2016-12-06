#ifndef __EXCHANGEIMPL_H__
#define __EXCHANGEIMPL_H__

class AccountImpl;

class ExchangeImpl : public AccountImpl
{
public:
	void Update(string _msg) const;
}

#endif //__EXCHANGEIMPL_H__
