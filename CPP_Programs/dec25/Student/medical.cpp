#include "medical.h"

Medical::Medical() : Student()
{
}

Medical::Medical(const char *name, int age) : Student(name, age)
{
}

Medical::~Medical()
{
    std ::cout << "~Medical() called"<< "\n";
}

void Medical::exam_details()
{
     std::cout << "Medical exam details for a medico student.\n";
}
