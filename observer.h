#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <string>

class Subject;

class Observer
{
	virtual void Update(Subject _subj, string _msg) const = 0;
};

#endif //__OBSERVER_H__
