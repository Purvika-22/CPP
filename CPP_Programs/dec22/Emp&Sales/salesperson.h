#include <iostream>
#include "employee.h"
// DERVIED CLASS

class Salesperson : public Employee
{
    double salesamount, commissionrate;

public:
    double calculateComission() // special function of salespersonclass
    {
        return (salesamount * commissionrate);
    }

    Salesperson()
    {
        std::cout << "\nSalesperson() called ";
        salesamount = 15000;
        commissionrate = 0.05;
    }

    Salesperson(int eid, std::string nm, double esal, double samt, double cm)
        : Employee(eid, nm, esal), salesamount(samt), commissionrate(cm)
    {
    }

    ~Salesperson()
    {
        std::cout << "\n~Salesperson()...called...\n";
    }

    // double caltotalsalary()
    // {
    //     std::cout << "In SP caltotalsalary:\n";
    //     // return Employee::totalsalary()+salesamount*commissionrate; //One way
    //     return esalary;
    // }

    void display()
    {
        Employee::display();
        std::cout << "\nSales amount= " << salesamount << "\nCrate = " << commissionrate << "\n";
    }

    friend std::ostream &operator<<(std::ostream &os, Salesperson &sp)
    {
        os << "Sales Amount: " << sp.salesamount << "Comission Rate: " << sp.commissionrate;
        // Employee e = sp; //Object Slicing
        os << static_cast<Employee &>(sp);
        return os;
    }

    double calTotalSalary() override
    {
        std::cout << "In SP calTotalSalary:\n";
        // return Employee::calTotalSalary() + salesamount * commissionrate; // One way
        return esalary;
    }
};