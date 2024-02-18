#include "exam.h"
#include <cstring>
Exam::Exam() : timeDuration(90)
{
    strcpy(examCode, "ABC");
}

Exam::Exam(const char *ecode_, int time_) : timeDuration(time_)
{
    strcpy(examCode, ecode_);
}

// void Exam::display()
// {
//     std::cout<<"in exam dislpay"<<std::endl;
// }

void Exam::accept()
{
    int ch;
    std::cout << "\nEnter choice :";
    std::cout << "\n 0.UNIT_TEST \n 1.MID_TERM \n2.END_SEM ";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        et = UNIT_TEST;
        break;
    case 1:
        et = MID_TERM;
        break;
    case 2:
        et = END_SEM;
        break;
    default:
        break;
    }
}
