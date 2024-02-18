#include <iostream>
#include "header.h"
#include <cstring>
//friend keyword is req only in 
//Do NOT USE :: OPERATOR
// return type classname::funname() {}

int Student :: x = 90; 
// compiler won't includes the static fields that is why it is mandatory to declare the sattic var in the datasection

void Student :: display() const
{
    // std :: cout << this->rollnum;//this is in background
    std ::cout << "Rollnum :" << rollnum << "Name is :" << name << "Marks :" << marks;
}

// void Student::display() const
// {
// }

Student::Student()
{
    std ::cout << "\n In Student() ctor";
    rollnum = 1;
    strcpy(name, "Harini");
    marks = 90.4;
}
Student::Student(int r, const char *nm, int s[]) 
{
    rollnum = r;
    strcpy(name, nm); 
    for (int i = 0; i < 3; i++)
    {
        sub[i] = s[i];
    }
}
float Student::calAvg()
{
    int sum = 0;
    for(int i=0;i<3;i++)
    {
        sum = sum + sub[i];
    }
    return sum / 3.0f;
}
// function overloading can be done but only with the diff signature
// r , nm , m are local variables
// LV should be assigned to attribute
Student::Student(int r, const char *nm, double m) : rollnum(r), marks(m)
{
    std ::cout << "\n In Student() parameterized ctor";
    // rollnum = r;
    strcpy(name, nm);
    // this -> marks = marks;
    // marks = m;
    // m = marks;//logocal error unexpected o/p
    // marks = marks -->Shadow effect
}

// void Student::showX() // can access static members only
// {
//     std ::cout << "\n x = " << x; // compiler won't includes the static fields
//     // this pointer is never pass to static functions.
//     //  rollnum = 9;
// }