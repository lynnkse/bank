#ifndef __SUBJECT_H__
#define __SUBJECT_H__

class Observer;

class Subject
{
public:
	virtual void Attach(Observer* _obsrv) const = 0;
private:
};

#endif //__SUBJECT_H__
