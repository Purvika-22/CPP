#include "HS.h"
#include <iostream>

HS::HS(const char *doctorName, int doctorAge, float doctorFee, const char *hospital):
Doctor(doctorName , doctorAge , doctorFee , hospital )
{
}

void HS::checkPatient()
{
    std::cout << "HS checks patient" << "\n";
}

