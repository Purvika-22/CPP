#include<iostream>
#include"header.h"

int main()
{
    int a[3]={50,50,50};
    Player p1("Prasanth",a);
    p1.display();

    Player p2(p1);
    p2.display(); //copy ctor

    // p2.accept();
    // p2.display();

    std::cout<<p1;

    Player p3("Ramu",a);
    Player p4("kavi",a);

    int comparison=(p3==p4); //comparison for name
    
    if(comparison)
    {
        std::cout<<"Both are equal"<<std::endl;
    }
    else
    {
        std::cout<<"Both are not equal"<<std::endl;
    }

    int less=(p3<p4);
    if(less)
    {
        std::cout<<"less than";
    }
    else
    {
        std::cout<<"Not less than";
    }

    int index;
    std::cout<<"Enter your desired index:"<<std::endl;
    std::cin>>index;
    p4[index];
    p4.display();

    return 0;
}
