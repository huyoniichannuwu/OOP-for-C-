#pragma once
#include "employee.h"
class SalariedEmployee :
    public Employee
{
private:
    double weeklySalary;
public:
    SalariedEmployee(string firstName = "", string lastName = "", string socialSecurityNumber = "", double _weeklySalary = 0)
        :Employee(firstName, lastName, socialSecurityNumber), weeklySalary(_weeklySalary)
    {
        //cout << "Constructor is called" << endl;
    }
    double getWeeklySalary()
    {
        return this->weeklySalary;
    }
    void setWeeklySalary(double newWeeklySalary)
    {
        this->weeklySalary = newWeeklySalary;
    }
    friend istream& operator>>(istream& in, SalariedEmployee& s)
    {
        string ssn;
        
        cout << "Input First Name: ";
        in >> s.firstName;
        cout << endl;
        cout << "Input Last Name: ";
        in >> s.lastName;
        cout << endl;
        cout << "Input Social Security Number: ";
        in >> ssn;
        s.setsocialSecurityNumber(ssn);
        cout << endl;
        cout << "Input Weekly Salary: ";
        in >> s.weeklySalary;
     
        return in;
    }
    void print() const override
    {
        //cout << "First Name: " << getFirstName() << "     " << "Last Name: "<< getLastName() << endl;
        //cout << "Social Security Number: "<< getsocialSecurityNumber()<< endl;
        Employee::print();
        cout << "Weekly Salary: $" << weeklySalary << endl;
    }
    double earnings() { return weeklySalary; };
};

