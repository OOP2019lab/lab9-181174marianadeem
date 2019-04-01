#include "Address.h"
#include "Project.h"
#include "Employee.h"
 
Address::Address(char* house_Number, char* Street_Name, char * City,char* County)
{
	//Project=new Project[2];
	this->house_Number=house_Number;
	this->street_Name=Street_Name;
	this->city=City;
	this->country=County;
}

Address::Address(const Address&a)
{
	this->house_Number=a.house_Number;
	this->street_Name=a.street_Name;
	this->city=a.city;
	this->country=a.country;
}

ostream& operator<<(ostream& osObject, const Address&a)
{
	osObject<<"country:"<<a.country<<endl;
	osObject<<"city:"<<a.city<<endl;
	osObject<<"streetname:"<<a.street_Name<<endl;
	osObject<<"house number:"<<a.house_Number<<endl;
	return osObject;
}

const Address &Address::  operator=(const Address& a)
{
	this->house_Number=a.house_Number;
	this->street_Name=a.street_Name;
	this->city=a.city;
	this->country=a.country;
	return *this;
}
Address::~Address()
{
	this->city = 0;
	this->country = 0;
	this->house_Number = 0;
	this->street_Name = 0;
}