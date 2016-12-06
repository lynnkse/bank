#include "bank.h"
#include <vector>
#include "account.h"

using namespace std;

void Bank::Invest() const
{
	for(vector<Account*>::const_iterator it = m_EXaccounts.begin(); it != m_EXaccounts.end(); ++it)
	{
		(*it)->Update(this, "Stock Exchange investment made");
	}
}

void Bank::GiveBonus() const
{
	for(vector<Account*>::const_iterator it = m_FMaccounts.begin(); it != m_FMaccounts.end(); ++it)
	{
		(*it)->Update(this, "Bonus given");
	}	
}

void Bank::OrgMeeting() const
{
	for(vector<Account*>::const_iterator it = m_SVaccounts.begin(); it != m_SVaccounts.end(); ++it)
	{
		(*it)->Update(this, "Meeting organized");
	}
}

void Bank::Attach(Observer* _obsrv, string _type) const
{
		case INVESTMENT:
			m_EXaccounts.push_back(_obsrv);
			break;
		case SAVINGS:
			m_SVaccounts.push_back(_obsrv);
			break;
		case FAMILY:
			m_FMaccounts.push_back(_obsrv);
			break;
}

Bank& Bank::GetObject() const
{
	return m_instance;
}












