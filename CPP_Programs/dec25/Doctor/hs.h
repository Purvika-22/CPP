#ifndef HS_H
#define HS_H

#include <iostream>
#include "doctor.h"

class HS : public Doctor
{
public:
    void heartsurgery();
    void checkpatient() override;
    friend std::ostream &operator<<(std::ostream &os, HS &hs);
    HS();
    HS(const char *name, const char *speciality, int experience, double salary);
    ~HS();
};

#endif // HS_H
