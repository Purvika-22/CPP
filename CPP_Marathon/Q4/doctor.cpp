#include "doctor.h"

Doctor::Doctor() : Doctor_fees(2000)
{
    strcpy(doctor_id, "219227");
    strcpy(doctor_name, "Dileep");
    strcpy(doctor_speciality, "HS");
    strcpy(registered_hospital_name, "Suraksha");
}

Doctor::Doctor(const char *d_id, const char *d_name, const char *speciality_, const char *reg_hsptl, float fee)
    : Doctor_fees(fee)
{
    strcpy(doctor_id, d_id);
    strcpy(doctor_name, d_name);
    strcpy(doctor_speciality, speciality_);
    strcpy(registered_hospital_name, reg_hsptl);
}

void Doctor::accept()
{
    std::cout << "\n**Enter Doctor Details**";
    std ::cout << "\nEnter Doctor ID :";
    std::cin >> doctor_id;
    std::cout << "\nEnter Doctor Name :";
    std::cin >> doctor_name;
    std::cout << "\nEnter Doctor Speciality :";
    std::cin >> doctor_speciality;
    std::cout << "\nEnter the Registered Hospital : ";
    std::cin >> registered_hospital_name;
}

int Doctor::calcTax()
{
    return Doctor_fees * 0.2;
}

std::ostream &operator<<(std::ostream &os, Doctor &d)
{
    os << "\n** Doctor Details**";
    os << "\nDoctor ID :" << d.doctor_id;
    os << "\nDoctor Name :" << d.doctor_name;
    os << "\n Doctor Speciality :" << d.doctor_speciality;
    os << "\nRegistered Hospital : " << d.registered_hospital_name;
    return os;
}
