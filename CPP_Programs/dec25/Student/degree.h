#ifndef DEGREE_H
#define DEGREE_H

#include "student.h"

class Degree : public Student
{
protected:
    char specialization[90];

public:
    Degree();
    Degree(const char *name, const char *specilization, int age);
    ~Degree();

    void exam_details() override;
};

#endif // DEGREE_H
