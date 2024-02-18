#include "person.h"
#include <cstring>
#include"date.h"

Person::Person() : dob(MyDate())
{
    name = new char[20];
    strcpy(name, "jani");
}

Person::Person(const char *n, MyDate d) : dob(d)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

Person::Person(const Person &p) : dob(p.dob)
{
    
    name = new char[strlen(p.name) + 1];
    strcpy(name, p.name);
}

Person::~Person()
{
    delete[] name;
}

void Person::accept()
{
    std :: cout << "\nEnter your name :";
    std :: cin >> name;
    dob.accept();
}

void Person::display()
{
    std :: cout <<"\n Your name is : " << name;
    std :: cout <<"\n Your DOB is:" ;
    dob.display();
}

std::ostream &operator<<(std::ostream &os, const Person &person)
{
    os <<"\n Your name is : " << person.name;
    // os <<"\n Your DOB is :" <<person.dob;
    return os;
}
