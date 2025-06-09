#include "employee.h"
Employee::Employee(string firstname, string lastname, Date birthdate, Date hiredate)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->birthdate = birthdate;
	this->hiredate = hiredate;
}
Employee::~Employee()
{
	cout << "destructor is called" << endl;
}
void Employee::print()
{
	cout << "First Name: " << this->firstname << endl;
	cout << "Last Name: " << this->lastname << endl;
	cout << "Full Name: " <<this->lastname  <<" " << this->firstname << endl;
	cout << "Day of birth: ";
	birthdate.print();
	cout << "Hiredate: ";
	hiredate.print();
}