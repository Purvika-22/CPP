#include "degree.h"

Degree::Degree() : Student()
{
}

Degree::Degree(const char *name, const char *specilization, int age)
:Student(name,age)
{
}

Degree::~Degree()
{
    std :: cout <<"~Degree() called"<< "\n";
}

void Degree::exam_details()
{
     std::cout << "exam details for a degree student.\n";
}
