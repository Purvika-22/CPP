#ifndef OFFLINEEXAM_H
#define OFFLINEEXAM_H

#include <iostream>
#include "exam.h"

enum offline_exam
{
    CPP,
    DS,
    JAVA
};
class OfflineExam : public Exam
{
    // char examLocation[30];

    std::string examLocation;

public:

    enum offline_exam ofe;

    OfflineExam();
    OfflineExam(const char *, int, enum offline_exam,std::string);

    void accept() override;
    void display() override;

    void changeLocation(std::string);

    offline_exam getOfe() const { return ofe; }
    void setOfe(const offline_exam &ofe_) { ofe = ofe_; }

    std::string getExamLocation() const { return examLocation; }
    void setExamLocation(const std::string &examLocation_) { examLocation = examLocation_; }
};

#endif // OFFLINEEXAM_H
