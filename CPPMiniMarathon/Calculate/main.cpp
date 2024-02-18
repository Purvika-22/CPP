#include "header.h"
#include <iostream>

int main()
{
    int purvika[5] = {100, 100, 100, 100, 100};
    Calculator c1(purvika, 5, 3);
    c1.display();

    Calculator c2(c1);
    c2.display();

    if (c1 == c2)
    {
        std ::cout << "\nBoth are equal";
    }
    else
    {
        std ::cout << "\nNE";
    }

    int res = c2 + 23;
    c2.display();

    Calculator c3(purvika, 15, 35);
    Calculator c4(purvika, 52, 33);
    
    ++c3;
    c3.display();

    c4++;
    c4.display();

    std ::cout << "\nenter index: ";
    int index;

    std::cin >> index;

    std::cout << c4[index];

    return 0;
}