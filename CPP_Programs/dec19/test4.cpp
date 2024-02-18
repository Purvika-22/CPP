//char array,char pointer and then string

#include<iostream>
class BankAccount
{
    int accno;
    std :: string cname;
    double balance;
    public:
    BankAccount(int accno=0,std::string nm="Yashna",double b=0) 
    //combnation of default and parameterized
    {
        accno = accno;
        cname = nm;
        balance = b;
    }

    void display()
    {
        std :: cout << accno <<" " << cname << " " << balance << std :: endl;
    }

};
//smart pointer
class Factory
{
    BankAccount *b;
    public:
    Factory()
    {
        b = new BankAccount();
    }
    Factory(int no,std::string nm,double bal)
    {
        b = new BankAccount(no,nm,bal);
    }
    ~Factory()
    {
        delete b;
    }
    BankAccount* operator ->()
    {
        return b; 
    }
};

int main()
{
    Factory f1; //f1 means object of bank account created
    f1->display();

    return 0;
}