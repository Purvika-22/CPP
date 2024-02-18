#include <iostream>
#include "header.h"
#include <cstring>

// return type classname::funname() {}
//Accept == setter
//Display == getter ki last lo const pettali

int Student :: x = 90; // compiler won't includes the static fields
int Student :: cnt = 100;

void Student ::accept()
{
}

void Student ::display() const
{
    std ::cout << "Rollnum :" << rollnum << "Name is :" << name << "Marks :" << marks;
}


Student::Student()
{
    std ::cout << "\n In Student() ctor";
    rollnum = cnt;
    cnt++;
    strcpy(name, "Harini");
    marks = 90.4;
}


Student::Student(const char *nm, double m) : marks(m)
{
    rollnum = cnt;
    cnt++;
    std ::cout << "\n In Student() parameterized ctor\n";
    strcpy(name, nm);
 
}

// void Student::showX() // can access static members only
// {
//     std :: cout << "\n x = " << x; // compiler won't includes the static fields
//     // this pointer is never pass to static functions.
//     //  rollnum = 9;
// }