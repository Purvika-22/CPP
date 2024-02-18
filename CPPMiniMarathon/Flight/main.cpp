#include <iostream>
#include "flight.h"
#include <cstring>
int main()
{
    Flight *f = new Flight[50];
    int index = -1;
    int ch;
    do
    {
        std ::cout << "\n---------Welcome--------------";
        std ::cout << "\nChoose an option";
        std ::cout << "\n1.To add flight detials";
        std ::cout << "\n2.to search for a flight";
        std ::cout << "\n3.to search for current flight";
        std ::cout << "\n4.To display all flight details";
        std ::cout << "\n5.QUIT";
        std ::cout << "\nEnter your choice : ";
        std ::cin >> ch;
        switch (ch)
        {
        case 1:
            if (index < 49)
            {
                std ::cin >> f[++index];
            }
            else
            {
                std ::cout << "\nNA";
            }
            break;
        case 2:
            int element;
            std ::cout << "\nEnter the flight obj: ";
            std ::cin >> element;
            search(f, index+1, element).display();
            break;
        case 3:
            f[index].display();
            break;
        case 4:
            for (int i = 0; i <= index; i++)
            {
                f[i].display();
            }
            break;

        case 5:
            std ::cout << "\nQUIT";
            break;
        default:
            std ::cout << "\nInvalid Choice";
            break;
        }
    } while (ch != 5);
    delete[] f;
    return 0;
}