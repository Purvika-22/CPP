#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <cstring>

class Product
{
    static int id;
    int productId;
    char *name;
    char brand[10];
    float price;
    float taxAmt;

public:
    Product();
    Product(const char *, const char *, float price, float taxAmt);
    ~Product();
    Product(const Product &p);
    friend std::ostream &operator<<(std::ostream &os, const Product &pobj);

    void accept();
    void display();
    int calTax();
    // static int calculateTotalTax(Product [],int);
    // static float avgPrice(Product [],int);
    // static int highestPrice(Product [],int);
    // static void searchProductByID(Product [],int,int);
    // static Product searchProductByBrand(Product [],int,const char []);

    int getProductId() const { return productId; }
    void setProductId(int productId_) { productId = productId_; }

    const char *getName() const
    {
        return name;
    }
    void setName(const char *name_)
    {
        name = new char[strlen(name_) + 1];
        strcpy(name, name_);
    }

    float getPrice() const { return price; }
    void setPrice(float price_) { price = price_; }

    float getTaxAmt() const { return taxAmt; }
    void setTaxAmt(float taxAmt_) { taxAmt = taxAmt_; }

    const char* getBrand() const { return brand; }
    void setBrand(const char* brand_) { strcpy(brand,brand_); }
};

int calculateTotalTax(Product[], int);
float avgPrice(Product[], int);
int highestPrice(Product[], int);
Product searchProductByID(Product[], int, int);
Product searchProductByBrand(Product[], int, const char[]);

#endif // PRODUCT_H
