#ifndef DENTIST_H
#define DENTIST_H

#include "Doctor.h"

class Dentist : public Doctor
{
private:
    /* data */
public:
    Dentist() = default;
    Dentist(const char *doctorName, int doctorAge, float doctorFee, const char *hospital);

    void checkPatient() override;

    void RootCanal();

    ~Dentist() {}
};

#endif // DENTIST_H
