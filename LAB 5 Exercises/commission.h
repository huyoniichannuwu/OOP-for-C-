#pragma once
#include "employee.h"
class CommissionEmployee :
    public Employee
{
private:
    double grossSales;
    double commissionRate;
public:
    CommissionEmployee(string firstName = "", string lastName = "", string socialSecurityNumber = "", double _grossSales = 0, double _commissionRate = 0)
        :Employee(firstName, lastName, socialSecurityNumber), grossSales(_grossSales), commissionRate(_commissionRate)
    {
        //cout << "Constructor is called" << endl;
    }
    
    double getGrossSales()
    {
        return this->grossSales;
    }
    double getCommissionRate()
    {
        return this->commissionRate;
    }
    void setGrossSales(double newone)
    { 
        this->grossSales = newone;
    }
    void setCommissionRate(double newone)
    {
        this->commissionRate = newone;
    }
    
    friend istream& operator>>(istream& in, CommissionEmployee& c)
    {
        string ssn;

        cout << "Input First Name: ";
        in >> c.firstName;
        cout << endl;
        cout << "Input Last Name: ";
        in >> c.lastName;
        cout << endl;
        cout << "Input Social Security Number: ";
        in >> ssn;
        c.setsocialSecurityNumber(ssn);
        cout << endl;
        cout << "Input Gross Sales: ";
        in >> c.grossSales;
        cout << endl;
        cout << "Input Commission Rate: ";
        in >> c.commissionRate;

        return in;
    }
    virtual void print() const override 
    {
        Employee::print();
        cout << "Gross Sales: " << grossSales << "   " << "Commission Rate: " << commissionRate<<endl;
    }
    virtual double earnings() { return grossSales * commissionRate; };
};

