#include "dentist.h"

void Dentist::rootcanal()
{
    std :: cout <<"Welcome to Root Canal treatment"<<"\n";

}

void Dentist::display() 
{
    std::cout << "Dentist Information:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Specialty: " << getSpeciality() << "\n";
    std::cout << "Experience: " << experience << " years\n";
    std::cout << "Salary: $" << salary << "\n";
}

Dentist::~Dentist()
{
    std :: cout <<"~Dentist() is called"<<"\n";
}

void Dentist::checkpatient()
{
    std :: cout <<"Welcome to check up for your teeth"<<"\n";
}

Dentist::Dentist() : Doctor()
{
}

Dentist::Dentist(const char *name, const char *speciality, int experience, double salary)
:Doctor(name,speciality,experience,salary)
{
}


