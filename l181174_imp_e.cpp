#include "Address.h"
#include "Project.h"
#include "Employee.h"

Employee::Employee(char* name, const Address&a)
{
	//p=new Project[2];
	emp_name=name;
	Address add=a;
}

Employee::Employee(const Employee&other)
{
	emp_name=other.emp_name;
	add=other.add;
	//p=other.p;
}

ostream& operator<<(ostream& osObject, const Employee&e)
{
	osObject<<e.emp_name;
	//osObject<<e.p;
	osObject<<e.add;
	return osObject;
}

const Employee &Employee:: operator=(const Employee& other)
{
	emp_name=other.emp_name;
	add=other.add;
	//p=other.p;
	return *this;
}

void Employee::addProject(Project const *p )
{
	if (noOfProjects > 2)
	{
		cout<<"out of bound"<<endl;
	}
	else
	{
		current[noOfProjects] = new Project(*p);
		noOfProjects++;
	}
}
void Employee::removeProject(Project const * p)
{
	if (noOfProjects >= 0 && noOfProjects <= 2)
	{
		for (int i = 0;i < 2;i++)
		{
			if (current[i] == p)
			{
				current[i] = nullptr;
				noOfProjects--;
			}
		}
	}
	else
		cout << "project not found" << endl;
}

Employee::~Employee()
{
	this->add = 0;
	//this-> = 0;
	this->emp_name = 0;
	this->noOfProjects = 0;
	delete []current;
	this->current = nullptr;
}
