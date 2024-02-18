#include <cstring>
#include <iostream>

class Phone
{
private:
    static int cnt;
    int phoneid;
    char *name;
    double price;

    std::string _features;

public:
    Phone();
    // Phone(const char[], double);

    Phone(const char[] , double , std::string features);

    ~Phone();

    friend void operator<<(std::ostream &os, Phone &p);
    static int getCount() { return cnt; }

    void accept();
    void display() const; // making the method as constant so it is not modify the atributes

    int getPhoneid() const { return phoneid; }
    void setPhoneid(int phoneid_) { phoneid = phoneid_; }

    double getPrice() const { return price; }
    void setPrice(double price_) { price = price_; }

    char *getName() const { return name; }

    void setName(char *name_)
    {
        delete name;
        name = new char[strlen(name_) + 1];
        strcpy( name , name_);
    }
};
