#include <iostream>
#include "header.h"

int main()
{
    const int MAX_OBJECTS = 100;
    Flight *f1 = new Flight[MAX_OBJECTS];

    int option = -1;
    static int count = 0;

    do
    {
        std ::cout << "***WELCOME***" << std ::endl;
        std ::cout << "Choose an option from below" << std::endl;
        std ::cout << "1:To add flight details:" << std::endl;
        std ::cout << "2:To display current flight details:" << std::endl;
        std ::cout << "3:Search for a flight:" << std::endl;
        std ::cout << "4:To display all flight details:" << std::endl;
        std ::cout << "5:To Quit:" << std::endl;
        std :: cin >> option;

        if(option == 1 )
        {
            count++;
            f1[count].feedInfo();
            f1[count].calculateFuelQuantity();
        }
        if(option == 2)
        {
            f1[count].showInfo();
        }
        if(option ==3 )
        {
            int temp;
            std :: cout <<"Enter the element to find:"<<std::endl;
            std :: cin >> temp;
            for(int i=0;i<count ; i++)
            {
                if(f1[i].getFlightNumber() == temp )
                {
                    f1[i].showInfo();
                }
            }
        }
        if(option == 4)
        {
            for(int i=0;i<=count;i++)
            {
                f1[i].showInfo();
            }
        }
    }while(option!=5);
    delete [] f1;

    return 0;
}