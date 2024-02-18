#include "Doctor.h"
#include <cstring>
#include <iostream>

Doctor::Doctor(const char *doctorName, int doctorAge, float doctorFee , const char* hospital) : _doctorAge(doctorAge) , _doctorFee(doctorFee)
{
    _doctorName = new char[strlen(doctorName) + 1];
    strcpy(_doctorName,doctorName);

    strcpy(_hospital,hospital);
}

void Doctor::checkPatient()
{
    std::cout << "DOCTOR CHECKS " << "\n";
}

std::ostream &operator<<(std::ostream &os, const Doctor &rhs) {
    os << "_doctorName: " << rhs._doctorName
       << " _doctorAge: " << rhs._doctorAge
       << " _doctorFee: " << rhs._doctorFee
       << " _hospital: " << rhs._hospital;
    return os;
}

