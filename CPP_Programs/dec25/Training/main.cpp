#include <iostream>
#include "online.h"
#include "offline.h"
#include "training.h"

int main()
{
    // Training h1;
    // h1.display();

    // Training h2("Fathima", 23000, 2, "Notes");
    // // h.accept();
    // h2.display();

    // Training h3;
    // // h3.accept();
    // h3.display();

    // Online o1;
    // o1.accept();
    // o1.display();

    Training *h4 = new Online();
    // h4 -> accept();
    Online *on = dynamic_cast<Online *>(h4);
    if (on != nullptr)
    {
        on->onlinemode();
    }
    else
    {
        std::cout << "\n---Wrong choice---\n";
    }

    delete h4;

    return 0;
}