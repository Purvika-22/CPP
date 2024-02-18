// student.cpp
#include "student.h"

Student::Student() : age(10)
{
    strcpy(name, "name_");
}

Student::Student(const char *name_, int age) : age(age)
{
    strcpy(name, name_);
}

Student::Student(const char *name_, const char *specialization_, int age) : age(age)
{
    strcpy(name, name_);
    strcpy(specialization, specialization_);
}

Student::~Student()
{
    std::cout<<"~Student() called"<< "\n";
}

void Student::exam_details()
{
    std::cout << "Default exam details for a generic student.\n";
}

void Student::display()
{
    std ::cout << "Your name:"
               << name << "\n";

    std ::cout <<"\n"<< "Your age:"
               << age << "\n";
}
   

std::ostream &operator<<(std::ostream &os, const Student &s)
{
    os << "Name: " << s.name << ", Age: " << s.age<<"\n";
    return os;
}
