#include <iostream>
class Account
// instead of struct keyword uses class
// everything in CPP we can implement with the struct keyword but class is preferrable
{
    // data members , attributes ,instance fields
    int accno;
    char name[20], address[80]; 
    // the data that not chnages frequently --> static
    double balance;             // the value that changes frequently --> dynamic

    // behaviour / member functions
    void depositATM() 
    // you can create it global function but we will not because
    //if you treat that as global then all the onther members 
    //can access it compiler will unaBLE TO FINDOUT
    {
    }

    void withdrwATM()
    {
    }

    void withdrwslip()
    {
    }

    void onlinetransfer()
    {
    }

    void checkbal()
    {
    }
};
void deposit(Car c1) // it is not suggestable but it will not gives the error
// because Entity and its functionality has to be represented as one unit
{
    Car c1;
}
void withdrw()
{
}
void checkbal()
{
    Animal a;
}
struct Car
{
};

struct Animal
{
};

int main()
{
    return 0;
}