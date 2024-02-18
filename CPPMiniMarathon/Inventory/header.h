// #ifndef HEADER_H
// #define HEADER_H

// #include <iostream>
// #include <cstring>

// class Inventory
// {

// private:
//     char description_of_product[50] ;
//     int balance_stock;

//     int product_code;
//     static int id;

// public:
//     Inventory();
//     Inventory(const char *des, int balance_stock);
//     Inventory(const Inventory &obj);
//     // Inventory(const char *des = "", int balance_stock = 0, int product_code = 0);
//     ~Inventory();

//     void accept();
//     void display() const;
//     // static Inventory search(Inventory i[], int size, int search);
//     void purchase_stock();
//     void sell_stock();

//     friend std::ostream &operator<<(std::ostream &os, const Inventory &inventory);

//     int balanceStock() const { return balance_stock;}
//     void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

   
//     const char *getDescriptionOfProduct() const { return description_of_product; }
//     void setDescriptionOfProduct(const char * descriptionOfProduct) { strcpy(description_of_product,descriptionOfProduct); }

//     int getProductCode() const { return product_code; }
//     void setProductCode(int productCode) { product_code = productCode; }
// };

// void search(Inventory i[], int size, int search);

// #endif // HEADER_H


#ifndef HEADER_H
#define HEADER_H
#include<cstring>
class Inventory
{
    char * des;
    int product_code;
    int balance_stock;
    static int id;

    public:
    Inventory();
    Inventory(const char *,int );
    Inventory(const Inventory &i);
    static Inventory search(Inventory i[], int size, int search);

    void accept();
    void display();

    void sell_stock();
    void purchase_stock();

    const char * getDes() const 
    {
         return des; 
    }
    void setDes(const char  * des_) 
    {
         des = new char[strlen(des_) + 1];
         strcpy(des,des_);
    }

    int getProductCode() const { return product_code; }
    void setProductCode(int productCode) { product_code = productCode; }

    int balanceStock() const { return balance_stock; }
    void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

    
};

Inventory search(Inventory[],int,int);

#endif // HEADER_H
