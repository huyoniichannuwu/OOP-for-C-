#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
	string socialSecurityNumber;
protected:
	string firstName;
	string lastName;
public:
	Employee(string _firstName = "", string _lastName = "", string _socialSecurityNumber = "")
		:firstName(_firstName), lastName(_lastName), socialSecurityNumber(_socialSecurityNumber)
	{
		//cout << "Constructor is called" << endl;
	}
	
	virtual double earnings()=0;
	
	virtual void print() const					//co const thi tat ca derived class đều const, override
	{
		cout << "First Name: "<< this->firstName << "     " << "Last Name: "<< this->lastName << endl;
		cout << "Social Security Number: "<< this->socialSecurityNumber << endl;
	}
	
	string getsocialSecurityNumber()
	{
		return this->socialSecurityNumber;
	}
	string getFirstName()
	{
		return this->firstName;
	}
	string getLastName()
	{
		return this->lastName;
	}
	void setFirstName(string newone)
	{
		this->firstName = newone;
	}
	void setLastName(string newone)
	{
		this->lastName = newone;
	}
	void setsocialSecurityNumber(string newone)
	{
		this->socialSecurityNumber = newone;
	}
};

