#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "date.h"
#include <cstring>
class Customer
{
    char name[20];
    MyDate date;

public:
    Customer();
    Customer(const char * name_,MyDate date);
    Customer(const Customer &object);
    
    void accept();
    void display();


    friend std::ostream &operator<<(std::ostream &os,const Customer &c);

    const char *getName() const { return name; }
    void setName(const char *name_) { strcpy(name, name_); }
};

#endif // CUSTOMER_H
