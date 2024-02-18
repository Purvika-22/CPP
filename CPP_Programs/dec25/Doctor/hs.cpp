#include "hs.h"

void HS::heartsurgery()
{
    std ::cout << "Welcome to your heart surgery\n";
}

void HS::checkpatient()
{
    std ::cout << "Welcome for your heart checkup\n";
}

HS::HS() : Doctor()
{
}

HS::HS(const char *name, const char *speciality, int experience, double salary)
    : Doctor(name, speciality, experience, salary)
{
}

HS::~HS()
{
    std::cout << "HS dtor called\n";
}

std::ostream &operator<<(std::ostream &os, HS &hs)
{
    os << "Name: " << hs.name << " Speciality: " << hs.getSpeciality()
       << " Experience: " << hs.experience << " Salary: " << hs.salary;
    
    // Call the base class operator<<
    os << static_cast<Doctor &>(hs);

    return os;
}

