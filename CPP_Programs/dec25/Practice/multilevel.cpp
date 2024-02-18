#include <iostream>

class phy
{
public:
    int phy_marks;

  //  phy() : phy_marks(0) {} // Constructor to initialize phy_marks

    void physics()
    {
        std::cout << "Enter PHY marks: ";
        std::cin >> phy_marks;
    }
};

class che : public phy
{
public:
    int che_marks;

    //che() : che_marks(0) {} // Constructor to initialize che_marks

    void chemistry()
    {
        std::cout << "Enter CHE marks: ";
        std::cin >> che_marks;
    }
};

class math : public che
{
public:
    int math_marks;
    int total;

   // math() : che(), math_marks(0), total(0) {} // Constructor to initialize base class members

    void maths()
    {
        std::cout << "Enter MATH marks: ";
        std::cin >> math_marks;
    }

    void result()
    {
        total = phy_marks + che_marks + math_marks;
        std::cout << "Total Marks: " << total;
    }
};

int main()
{
    math m;
    m.physics();
    m.chemistry();
    m.maths();
    m.result();

    return 0;
}
