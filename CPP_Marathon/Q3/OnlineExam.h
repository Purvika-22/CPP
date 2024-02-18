#ifndef ONLINEEXAM_H
#define ONLINEEXAM_H

#include <iostream>
#include "exam.h"

enum online_exam
{
    MEET,
    TEAMS,
    ZOOM
};
class OnlineExam : public Exam
{
public:
    float marks[5];

    enum online_exam oe;

    OnlineExam();
    OnlineExam(const char *, int, int[], online_exam);
    OnlineExam(OnlineExam &one);

    void accept() override;
    void display() override;

    void AverageMarks(OnlineExam[], int);

    online_exam getOe() const { return oe; }
    void setOe(const online_exam &oe_) { oe = oe_; }
};

#endif // ONLINEEXAM_H
