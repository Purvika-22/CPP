#include "engineer.h"

Engineer::Engineer() : Student()
{
}

Engineer::Engineer(const char *name, const char *specialization, int age)
    : Student(name,specialization, age)
{
    //setSpecialization(specialization);
}

Engineer::~Engineer()
{
    std ::cout << "~Engineer() called"
               << "\n";
}

void Engineer::sem()
{
    std ::cout << "Sem exam for every engineer student"
               << "\n";
}

void Engineer::display()
{
    std ::cout << "Your name:"
               << name << "\n";

    std ::cout << "Your Specialization:"
               << getSpecialization() << "\n";

    std ::cout << "Your age:"
               << age << "\n";
}

void Engineer::exam_details()
{
    std::cout << " exam details for a engineering student.\n";
}
