#pragma once
#include "employee.h"
class HourlyEmployee :
    public Employee
{
private:
    double wage;
    double hours;
public:
    HourlyEmployee(string firstName = "", string lastName = "", string socialSecurityNumber = "", double wage = 0, double hours = 0)
        :Employee(firstName, lastName, socialSecurityNumber), wage(wage), hours(hours)
    {
        //cout << "Constructor is called" << endl;
    }
    
    double getWage()
    {
        return this->wage;
    }
    double getHours()
    {
        return this->hours;
    }
    void setWage(double newone)
    {
        this->wage = newone;
    }
    void setHours(double newone)
    {
        this->hours = newone;
    }
    friend istream& operator>>(istream& in, HourlyEmployee& h)
    {
        string ssn;

        cout << "Input First Name: ";
        in >> h.firstName;
        cout << endl;
        cout << "Input Last Name: ";
        in >> h.lastName;
        cout << endl;
        cout << "Input Social Security Number: ";
        in >> ssn;
        h.setsocialSecurityNumber(ssn);
        cout << endl;
        cout << "Input Wage: ";
        in >> h.wage;
        cout << endl;
        cout << "Input Hours: ";
        in >> h.hours;
        
        return in;
    }
    void print() const override
    {
        Employee::print();
        cout << "Hourly Wage: $" << wage << "   " << "Hours Worked: " << hours << endl;
    }
    double earnings() { return wage * hours; };
};

