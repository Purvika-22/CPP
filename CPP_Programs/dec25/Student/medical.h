#ifndef MEDICAL_H
#define MEDICAL_H

#include "student.h"

class Medical : public Student
{
public:
    Medical();
    Medical(const char *name, int age);
    ~Medical();

    void exam_details() override;

};

#endif // MEDICAL_H
