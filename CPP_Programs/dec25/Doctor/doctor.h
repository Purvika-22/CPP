#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include<cstring>

class Doctor
{
protected:
    char name[20];
    int experience;
    double salary;

private:
    char speciality[20];

public:
    virtual void checkpatient();
    Doctor();
    Doctor(const char *name, const char *speciality, int experience, double salary);
    virtual ~Doctor();

    const char* getName() const { return name; }
    void setName(const char* name_) { strcpy(name,name_); }

    int getExperience() const { return experience; }
    void setExperience(int experience_) { experience = experience_; }

    const char* getSpeciality() const { return speciality; }
    void setSpeciality(const char* speciality_) { strcpy(speciality, speciality_); }

    double getSalary() const { return salary; }
    void setSalary(double salary_) { salary = salary_; }
    
    friend std::ostream &operator<<(std::ostream &os, Doctor &d);
};

#endif // DOCTOR_H
