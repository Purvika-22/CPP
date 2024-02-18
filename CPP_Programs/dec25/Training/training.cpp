#include "training.h"
#include <cstring>

Training::Training() : budget(10000), participants(100)
{
    std ::cout << "Training()  called"
               << "\n";
    strcpy(traineename, "Varun");
    strcpy(materials, "PDF");
}

Training::Training(const char *tname_, double b, int p, const char *materials_)
    : budget(b), participants(p)
{
    std ::cout << "Training(......)  called"
               << "\n";
    strcpy(traineename, tname_);
    strcpy(materials, materials_);
}

Training::~Training()
{
    std ::cout << " ~Training() called"
               << "\n";
}

void Training::accept()
{
    std::cout << "Enter trainee name:"
              << "\n";
    std::cin >> traineename;
    std ::cout << " Enter trainee budget:"
               << "\n";
    std::cin >> budget;
    std::cout << "Enter No. of participants:";
    std::cin >> participants;
    std::cout << "Enter material :";
    std::cin >> materials;
}

void Training::display()
{
    std ::cout << "\n*****Training info******"
               << "\n";
    std ::cout << "Name of the Trainee:" << traineename << "\n"
               << "Budget:$" << budget << "\n"
               << " No. Of Participants:" << participants <<"people"<< "\n"
               << "Materials :" << materials << "\n";
}
