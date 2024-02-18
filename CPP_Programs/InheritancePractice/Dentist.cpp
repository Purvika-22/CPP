#include "Dentist.h"
#include <iostream>

Dentist::Dentist(const char *doctorName, int doctorAge, float doctorFee, const char *hospital):
Doctor(doctorName , doctorAge , doctorFee , hospital )
{
}

void Dentist::checkPatient()
{
    std::cout << "DENTIST checks patient" << "\n";
}

void Dentist::RootCanal()
{
    std::cout << "DENTIST ROOT CANAL TREATMENT " << "\n";
}
