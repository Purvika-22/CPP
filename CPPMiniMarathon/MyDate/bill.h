#ifndef BILL_H
#define BILL_H

#include <iostream>
#include "date.h"
#include "customer.h"
class Bill
{
    static int billid;
    int billNum;
    int billAmt;
    Customer c;

public:

    Bill();
    Bill(Customer c,int billAmt_);

    void accept();
    void display();


    friend std::ostream &operator<<(std::ostream &os,const Bill &bill);

    int getBillNum() const { return billNum; }
    void setBillNum(int billNum_) { billNum = billNum_; }

    int getBillAmt() const { return billAmt; }
    void setBillAmt(int billAmt_) { billAmt = billAmt_; }
};

#endif // BILL_H
