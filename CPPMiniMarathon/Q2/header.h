#ifndef HEADER_H
#define HEADER_H

#include <cstring>
class Loan
{
    static int loancounter;
    int loannumber;
    int amount;
    char *name;
    int interestamount;

public:
    Loan();
    Loan(int am, const char *nm, int interestam);
    Loan(const Loan &other);

    int getLoannumber() const { return loannumber; }
    void setLoannumber(int loannumber_) { loannumber = loannumber_; }

    int getAmount() const { return amount; }
    void setAmount(int amount_) { amount = amount_; }

    const char *getName() const
    {
        return name;
    }
    void setName(const char *name_)
    {
        name = new char[strlen(name_) + 1];
        strcpy(name, name_);
    }
    void accept();
    void display();
    ~Loan() ;

    int getInterestamount() const { return interestamount; }
    void setInterestamount(int interestamount_) { interestamount = interestamount_; }

    // int calculateinterest();
};
Loan highestinterest(Loan l[], int size);
Loan search(Loan l[], int size, int se);

#endif // HEADER_H
