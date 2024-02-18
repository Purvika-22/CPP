#ifndef HEADER_H
#define HEADER_H

#include<cstring>
class Loan
{
    static int lnumber;
    long int loannumber;
    float amount;
    char name[20];
    float interestamount=0.0;

public:
    Loan();
    Loan(float amount,const char *,float interestamount);
    
    float getAmount() const
    { 
        return amount;
    }
    void setAmount(float amount_)
    { 
        amount = amount_;
    }

    const char* getName() const 
    { 
        return name;
    }
    void setName(const char* name_)
    { 
        strcpy(name,name_);
    }

    float getInterestamount() const
    { 
        return interestamount;
    }
    void setInterestamount(float interestamount_)
    { 
        interestamount = interestamount_;
    }

    void add();
    void show();
    int calculateinterest();

    static Loan search(Loan l[],int size,int se);
    static Loan countcustomershighestinterest(Loan l[],int size);
};

#endif // HEADER_H
