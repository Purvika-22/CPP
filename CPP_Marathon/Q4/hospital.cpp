#include "hospital.h"
#include <cstring>

Hospital::Hospital()
{
    strcpy(Hospital_id, "90");
    strcpy(Hospital_name, "ABC");
}

Hospital::Hospital(const char *id_, const char *name_)
{
    strcpy(Hospital_id, id_);
    strcpy(Hospital_name, name_);
}

void Hospital::accept()
{
    std::cout << "\nEnter Hospital ID :";
    std::cin >> Hospital_id;
    std::cout << "\n Enter Hospital Name : ";
    std::cin >> Hospital_name;
    int ch;
    std::cout << "\n 1.Good \n 2.Avg \n3.Poor ";
    std::cout << "\nEnter choice :";
    std::cout << "\n";
    std ::cin >> ch;
    switch (ch)
    {
    case 0:
        ch = GOOD;
        break;
    case 1:
        ch = AVERAGE;
        break;
    case 2:
        ch = POOR;
        break;
    default:
        break;
    }
}

std::ostream &operator<<(std::ostream &os, Hospital &h)
{
    os << "\n Hospital ID : " << h.Hospital_id;
    os << "\n Hospital Name : " << h.Hospital_name;

    if (h.hr == 0)
    {
        std ::cout << "\n GOOD ";
    }
    else if (h.hr == 1)
    {
        std::cout << "\n AVERAGE ";
    }
    else if (h.hr == 2)
    {
        std ::cout << "\n ZOOM  ";
    }
    return os;
}
