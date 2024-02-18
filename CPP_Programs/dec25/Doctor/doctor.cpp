#include "doctor.h"
#include <cstring>
void Doctor::checkpatient()
{
    std ::cout << "Welcome for your normal checkup\n";
}

Doctor::Doctor() : experience(5), salary(300000)
{
    strcpy(name, "Hima");
    strcpy(speciality, "Nuero");
}

Doctor::Doctor(const char *name_, const char *speciality_, int experience, double salary)
:experience(experience),salary(salary)
{
    strcpy(name,name_);
    strcpy(speciality,speciality_);
}

Doctor::~Doctor()
{
    std::cout << "\nDoctor() destructor called..\n";
}


std::ostream &operator<<(std::ostream &os, Doctor &d)
{
    os << "Name:" <<d.name << "Expereince" << d.experience << "Speciality"<<d.speciality
    <<"salary"<<d.salary<<std::endl;
    return os;
}