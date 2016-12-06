#ifndef __BANK_H__
#define __BANK_H__

#include <vector>

class Subject;
class Account;

class Bank : public Subject
{
public:
	enum AccountType {INVESTMENT, SAVINGS, FAMILY};

	void Invest() const;
	void GiveBonus() const;
	void OrgMeeting() const;
	virtual void Attach(Account* _obsrv) const;
	Bank& GetObject() const;
private:
	void operator=(const Bank& _bnk);
	Bank(const Bank& _bnk);
	Bank();
	~Bank();

	std::vector<Account*> m_FMaccounts;
	std::vector<Account*> m_SVaccounts;
	std::vector<Account*> m_EXaccounts; 
	static Bank m_instance;
}

#endif //__BANK_H__
