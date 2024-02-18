#include "OfflineExam.h"

OfflineExam::OfflineExam() : Exam()
{
}

OfflineExam::OfflineExam(const char *ecode_, int td_,offline_exam off_ex ,std::string newLoc )
    : Exam(ecode_, td_)
{
    examLocation = newLoc;
}

void OfflineExam::accept()
{
    Exam::accept();
    int ch;
    std::cout << "\n 1.CPP \n 2.DS \n3.JAVA ";
    std::cout << "\nEnter choice :";
    std::cout << "\n";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        ofe = CPP;
        break;
    case 1:
        ofe = DS;
        break;
    case 2:
        ofe = JAVA;
        break;
    default:
        break;
    }

}

void OfflineExam::display()
{
   
    if (ofe == 0)
    {
        std ::cout << "\n CPP ";
    }
    else if (ofe == 1)
    {
        std::cout << "\n DS ";
    }
    else if (ofe == 2)
    {
        std ::cout << "\n JAVA  ";
    }

}

void OfflineExam::changeLocation(std::string loc)
{
    examLocation = loc;
    std::cout<<"New Loc : " << examLocation;    
}
