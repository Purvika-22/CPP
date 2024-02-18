#ifndef DOCTOR_H
#define DOCTOR_H
#include <ostream>
#include <cstring>

class Doctor
{
private:
    char *_doctorName;
    int _doctorAge{40};
    float _doctorFee{0.0f};
    char _hospital[20];

public:
    Doctor() = default;
    Doctor(const char *doctorName, int doctorAge, float doctorFee, const char *hospital);

    ~Doctor() {}

    virtual void checkPatient() ;



    const char *doctorName() const { return _doctorName; }
    void setDoctorName(const char *doctorName)
    {
        delete [] doctorName;
        _doctorName = new char[strlen(doctorName) + 1];
        strcpy(_doctorName, doctorName);
    }

    int doctorAge() const { return _doctorAge; }

    float doctorFee() const { return _doctorFee; }
    void setDoctorFee(float doctorFee) { _doctorFee = doctorFee; }

    const char *hospital() const { return _hospital; }
    void setHospital(const char *hospital) { strcpy(_hospital, hospital); }

    void setDoctorAge(int doctorAge) { _doctorAge = doctorAge; }

    friend std::ostream &operator<<(std::ostream &os, const Doctor &rhs);
};

#endif // DOCTOR_H
