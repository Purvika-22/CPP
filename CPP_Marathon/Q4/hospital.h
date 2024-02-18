#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <cstring>
enum Hospital_rating
{
    GOOD ,
    AVERAGE,
    POOR
};

class Hospital
{
    Hospital_rating hr;

    char Hospital_id[20];
    char Hospital_name[20];

public:
    Hospital();
    Hospital(const char *, const char *);

    void accept();
    friend std::ostream &operator<<(std::ostream &os, Hospital &h);

    Hospital_rating getHr() const { return hr; }
    void setHr(const Hospital_rating &hr_) { hr = hr_; }

    const char *hospitalId() const { return Hospital_id; }
    void setHospitalId(const char *hospitalId) { strcpy(Hospital_id, hospitalId); }

    const char *hospitalName() const { return Hospital_name; }
    void setHospitalName(const char *hospitalName) { strcpy(Hospital_name, hospitalName); }
};

#endif // HOSPITAL_H
