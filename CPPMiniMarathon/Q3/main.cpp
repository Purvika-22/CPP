
#include<iostream>
#include"header.h"

int main()
{
    int b[3] = {34,34,34};
    Player p ; 
    // std::cout << p() << "\n";
    //std::cout << 
    p.accept();
    p.display();
    std :: cout << p;

    Player p1(p);
    p1.display();

    Player p2("Bhalu",b);
    Player p3("Balu",b);


    int comparison = (p2==p3);
    if(comparison)
    {
        std :: cout <<"\nBoth are equal";
    }
    else
    {
        std::cout<<"\n Not equal";
    }

    int less_than = (p2 < p3);

    if(less_than)
    {
        std :: cout << "\nLess than" ;
    }
    else
    {
        std :: cout << "\n Not less than";
    }
    
    int index;
    std :: cout << "\nEnter the index:" << "\n";
    std  :: cin >> index ;
    std::cout << "New Name: " << p[index];

    return 0;
}

