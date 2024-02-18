#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include "hospital.h"
#include <cstring>

class Doctor : public Hospital
{
private:
    char doctor_id[20];
    char doctor_name[30];
    char doctor_speciality[30];
    char registered_hospital_name[50];
    float Doctor_fees;

public:
    Doctor();
    Doctor(const char *, const char *, const char *, const char *, float);

    void accept();
    friend std::ostream &operator<<(std::ostream &os, Doctor &d);

    int calcTax();

    const char *doctorId() const { return doctor_id; }
    void setDoctorId(const char *doctorId) { strcpy(doctor_id, doctorId); }

    const char *doctorName() const { return doctor_name; }
    void setDoctorName(const char *doctorName) { strcpy(doctor_name, doctorName); }

    const char *doctorSpeciality() const { return doctor_speciality; }
    void setDoctorSpeciality(const char *doctorSpeciality) { strcpy(doctor_speciality, doctorSpeciality); }

    const char *registeredHospitalName() const { return registered_hospital_name; }
    void setRegisteredHospitalName(const char *registeredHospitalName) { strcpy(registered_hospital_name, registeredHospitalName); }

    float doctorFees() const { return Doctor_fees; }
    void setDoctorFees(float doctorFees) { Doctor_fees = doctorFees; }
};

#endif // DOCTOR_H
