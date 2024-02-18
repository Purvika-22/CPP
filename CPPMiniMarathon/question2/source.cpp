#include"header.h"
#include<iostream>

int Loan::lnumber=1;

Loan::Loan()
{
    loannumber=lnumber++;
    amount=50;
    strcpy(name,"KPIT");
    interestamount=0;
}

Loan::Loan(float a, const char * nm, float i):amount(a),interestamount(i)
{
    loannumber=lnumber++;
    strcpy(name,nm);
    
}

void Loan::add()
{
    std::cout<<"Enter the amount is:"<<std::endl;
    std::cin>>amount;
    std::cout<<"Enter the name is:"<<std::endl;
    std::cin>>name;
    std::cout<<"Enter the interest amount is:"<<std::endl;
    std::cin>>interestamount;
    std::cout<<std::endl;
}

void Loan::show()
{
    std::cout<<"The loan number is:"<<loannumber<<std::endl;
    std::cout<<"The amount is:"<<amount<<std::endl;
    std::cout<<"The name is:"<<name<<std::endl;
    std::cout<<"The interest rate amount is:"<<calculateinterest()<<std::endl;
    std::cout<<std::endl;
}

Loan Loan::search(Loan l[], int size,int se)
{
    int index=0;
    for(int i=0;i<size;i++)
    {
        if(l[i].loannumber==se)
        {
            index=i;
        }
    }
    return l[index];
}



int Loan::calculateinterest()
{
    
    if(amount<100000 && amount>0)
    {
        interestamount=interestamount+interestamount*0.02;
        
    }
    else if(amount>100000 && amount<=500000)
    {
        interestamount=interestamount+interestamount*0.05;
    }
    else if(amount>500000 && amount<=1500000)
    {
        interestamount=interestamount+interestamount*0.1;
    }
    else
    {
        interestamount=interestamount+interestamount*0.2;
    }
    return interestamount;
}

Loan Loan::countcustomershighestinterest(Loan l[], int size)
{
    std::cout<<"The customer having highest loan interest amount is:"<<std::endl;
    float max=l[0].amount;
    int index=0;
    for(int i=1;i<size;i++)
    {
        if(max<l[i].amount)
        {
            index=i;
        }
    }
    return l[index];
}
