#pragma once
#include "commission.h"
class BasePlusCommissionEmployee :
    public CommissionEmployee
{
private:
    double baseSalary;
public:
    BasePlusCommissionEmployee(string firstName = "", string lastName = "", string socialSecurityNumber = "", double grossSales = 0, double commissionRate = 0, double baseSalary = 0)
        :CommissionEmployee(firstName, lastName, socialSecurityNumber, grossSales, commissionRate), baseSalary(baseSalary)
    {
        //cout << "Constructor is called" << endl;
    }

    double getBaseSalary()
    {
        return this->baseSalary;
    }
    void setBaseSalary(double newone)
    {
        this->baseSalary = newone;
    }
    friend istream& operator>>(istream& in, BasePlusCommissionEmployee& p)
    {
        string firstN, lastN, ssn;
        double grossSales, commissionRate;
        
        cout << "Input First Name: ";
        in >> firstN;
        p.setFirstName(firstN);
        cout << endl;
        cout << "Input Last Name: ";
        in >> lastN;
        p.setLastName(lastN);
        cout << endl;
        cout << "Input Social Security Number: ";
        in >> ssn;
        p.setsocialSecurityNumber(ssn);
        cout << endl;
        cout << "Input Gross Sales: ";
        in >> grossSales;
        p.setGrossSales(grossSales);
        cout << endl;
        cout << "Input Commission Rate: ";
        in >> commissionRate;
        p.setCommissionRate(commissionRate);
        cout << endl;
        cout << "Input Base Salary: ";
        in >> p.baseSalary;
        cout << endl;

        return in;
    }
    void print() const override
    {
        CommissionEmployee::print();
        cout << "Base Salary: $" << baseSalary << endl;
    }
    double earnings() { return baseSalary + getGrossSales() * getCommissionRate(); }
};

