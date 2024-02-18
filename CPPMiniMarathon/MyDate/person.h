#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "date.h"
#include<cstring>

class Person
{
    char *name;
    MyDate dob;

public:

    Person();
    Person(const char * n,MyDate dob);
    Person(const Person &p);
    ~Person();

    void accept();
    void display();

    friend std :: ostream &operator<<(std :: ostream &os,const Person &person);

    const char *getName() const { return name; }
    void setName(char *name_)
    {
        name_ = new char[strlen(name_)+1];
        strcpy(name ,name_);
    }

};

#endif // PERSON_H
