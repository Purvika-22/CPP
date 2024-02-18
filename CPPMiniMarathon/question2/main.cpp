#include <iostream>
#include "header.h"

int main()
{

    Loan *l = new Loan[10];
    int flag = 1;

    int index = 0;
    while (flag)
    {
        int ch;
        std::cout << "Enter 1)Add\n 2)search\n 3)countcustomers\n 4)show\n 5)Exit\n";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            if (index > 5)
            {
                std::cout << "Enter only five records" << std::endl;
            }
            else
            {
                l[index++].add();
            }
            break;
        case 2:
            int search;
            std::cout << "Enter search element:";
            std::cin >> search;
            Loan::search(l, search, index).show();
            break;
        case 3:
            Loan::countcustomershighestinterest(l, index).show();
            break;
        case 4:
            for (int i = 0; i < index; ++i)
            {
                l[i].show();
            }
            break;
        case 5:
            flag = 0;
            break;
        default:
            std::cout << "Invalid choice!\n";
        }
    }

    delete[] l;

    return 0;
}