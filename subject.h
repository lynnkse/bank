#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <string>

class Observer;

class Subject
{
public:
	virtual void Attach(Observer* _obsrv, string _type) const = 0;
private:
};

#endif //__SUBJECT_H__
