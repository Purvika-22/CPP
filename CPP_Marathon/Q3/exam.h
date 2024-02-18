#ifndef EXAM_H
#define EXAM_H

#include<iostream>
#include<cstring>
enum exam_type
{
    UNIT_TEST ,
    MID_TERM,
    END_SEM
};

class Exam
{
    exam_type et;
    
    char examCode[20];
    int timeDuration;

    public:

    Exam();
    Exam(const char*, int);

    virtual void accept();
    virtual void display()=0;

    exam_type getEt() const { return et; }
    void setEt(const exam_type &et_) { et = et_; }

    const char* getExamCode() const { return examCode; }
    void setExamCode(const char* examCode_) { strcpy(examCode,examCode_); }

    int getTimeDuration() const { return timeDuration; }
    void setTimeDuration(int timeDuration_) { timeDuration = timeDuration_; }
};

#endif // EXAM_H
