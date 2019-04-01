#include "Address.h"
#include "Project.h"
#include "Employee.h"

Project::Project(char* name, int budget, int duration)
{
	this->name=name;
	this->budget=budget;
	this->duration;
}

Project::Project(const Project&dummy):name(dummy.name),budget(dummy.budget),duration(dummy.duration)
{
	
}

ostream& operator<<(ostream& osObject, const Project&p)
{
	osObject<<p.name<<endl;
	osObject<<p.budget<<endl;
	osObject<<p.duration<<endl;
	return osObject;
}

const Project &Project::   operator=(const Project& other)
{
	name=other.name;
	budget=other.budget;
	duration=other.duration;
	return *this;
}

void Project:: setBudget(int b)
{
	this->budget=b;
}

Project::~Project()
{
	name = 0;
	budget = 0;
	duration = 0;
} 