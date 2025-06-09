#pragma once
#include "date.h"
class Employee
{
private:
	string lastname;
	string firstname;
	Date birthdate;
	Date hiredate;
public:
	Employee(string firstname, string lastname, Date birthdate, Date hiredate);
	~Employee();
	void print();
};

