// engineer.h
#ifndef ENGINEER_H
#define ENGINEER_H

#include "student.h"
#include <cstring>

class Engineer : public Student
{
protected:
    char specialization[20];

public:
    Engineer();
    Engineer(const char *name, const char *specialization, int age);
    ~Engineer();

    const char *getSpecialization() const { return specialization; }
    void setSpecialization(const char *specialization_) { strcpy(specialization, specialization_); }

    void sem();
    void display();
    void exam_details() override;  // Override the virtual function
};

#endif // ENGINEER_H
