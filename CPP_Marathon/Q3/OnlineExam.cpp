#include "OnlineExam.h"
#include "exam.h"
OnlineExam::OnlineExam() : Exam()
{
    int m[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        marks[i] = m[i];
    }
}

OnlineExam::OnlineExam(const char *ecode_, int td_, int m_[], online_exam o_e)
    : Exam(ecode_, td_)
{
    for (int i = 0; i < 5; i++)
    {
        marks[i] = m_[i];
    }
}

OnlineExam::OnlineExam(OnlineExam &one)
{
    oe = one.oe;
    for (int i = 0; i < 5; i++)
    {
        marks[i] = one.marks[i];
    }
}

void OnlineExam::accept()
{
    int ch;
    std::cout << "\n 0.MEET \n 1.TEAMS \n2.ZOOM ";
    std::cout << "\nEnter choice :";
    std::cout << "\n";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        oe = MEET;
        break;
    case 1:
        oe = TEAMS;
        break;
    case 2:
        oe = ZOOM;
        break;
    default:
        break;
    }
    std::cout << "\nEnter Marks :";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> marks[i];
    }
    Exam::accept();
}

void OnlineExam::display()
{
    if (oe == 0)
    {
        std ::cout << "\n MEET ";
    }
    else if (oe == 1)
    {
        std::cout << "\n TEAMS ";
    }
    else if (oe == 2)
    {
        std ::cout << "\n ZOOM  ";
    }

    std::cout << "\ndisplay Marks :";
    for (int i = 0; i < 5; i++)
    {
        std::cout << marks[i];
    }
}

void OnlineExam::AverageMarks(OnlineExam oe_[], int size)
{
    int sum1 = 0;
    float avg = 0;
    for (int i = 0; i < 5; i++)
    {
        sum1 = sum1 + marks[i];
    }
    avg = (sum1) / 5;
    std ::cout << "\nAverage Marks = " << avg;
}
