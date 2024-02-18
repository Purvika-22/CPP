#include "offline.h"

Offline::Offline() : Training()
{
}

Offline::Offline(const char *traineename, int budget, int participants, const char *material)
:Training(traineename,budget,participants,materials)
{
}

Offline::~Offline()
{
    std :: cout << "~Offline() called" << "\n";
}

void Offline::display()
{
    std ::cout << "Offline Training info"
               << "\n";
    std ::cout << "Name of the Trainee:" << traineename << "\n"
               << "Budget:" << budget << "\n"
               << " No. Of Participants:" << participants << "\n"
               << "Materials :" << materials << "\n";
}

void Offline::offlinemode()
{
    std::cout<<"child spl function offline mode training" << "\n";
}
