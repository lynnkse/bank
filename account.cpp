#include "account.h"
#include "factory.h"

Account::Account(string _type)
{
	m_impl = Factory::CreateImpl(_type);	
}

Account::~Account()
{
	delete m_impl;
}

void Account::Update(Subject _subj, string _msg) const
{
	m_impl->Update(_subj, _msg);	
}
