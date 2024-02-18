#ifndef DENTIST_H
#define DENTIST_H

#include "doctor.h"

class Dentist : public Doctor
{
public:
    Dentist();
    Dentist(const char *name, const char *specialty, int experience, double salary);
    void checkpatient() override;
    void rootcanal();
    void display();
    ~Dentist();
};

#endif // DENTIST_H
