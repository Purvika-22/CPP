#include "online.h"
#include "training.h"
#include <cstring>

Online::Online() : Training()
{
}

Online::Online(const char *platform_, int d)
    : Training(traineename, budget, participants, materials), duration(d)
{
    strcpy(platform, platform_);
}

Online::~Online()
{
    std ::cout << "~Online() called"
               << "\n";
}

void Online::accept()
{
    // std::cout << "Enter trainee name:"
    //           << "\n";
    // std::cin >> traineename;
    // std ::cout << " Enter trainee budget:"
    //            << "\n";
    // std::cin >> budget;
    // std::cout << "Enter No. of participants:";
    // std::cin >> participants;
    // std::cout << "Enter material :";
    // std::cin >> materials;
    Training ::accept();
    std::cout<<"Enter the trainee details:"<<"\n";
    std::cout << "Enter duration(hrs):";
    std::cin >> duration;
    std::cout << "Enter platform :";
    std::cin >> platform;
}

void Online::display()
{
    Training ::display();
    std ::cout << "Online Training info"
               << "\n";
    std::cout << "Enter duration(hrs):" << duration;
    std::cout << "Enter platform :" << platform;
}

void Online::onlinemode()
{
    std ::cout << "child spl function Online mode training:"
               << "\n";
}
