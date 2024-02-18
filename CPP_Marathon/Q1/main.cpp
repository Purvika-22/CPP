#include <iostream>
#include "user.h"

int main()
{
    User *u = new User[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin>>u[i];
    }

    User u1("19A1", "Harsha", "CSE");
    User u2("19A2", "Vardhan", "CSE");

    int comparision = (u1 == u2);
    if (comparision)
    {
        std ::cout << "\nDepart are equal";
    }
    else
    {
        std ::cout << "\n Depart not equal";
    }

    try
    {
        char element[20];
        std::cout << "\n Enter department :";
        std ::cin >> element;
        find(u, 3, element);
    }
    catch (NoUserFound e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}

