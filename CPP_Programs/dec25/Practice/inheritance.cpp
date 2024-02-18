#include <iostream>

class party
{
public:
    int meals;
    void food()
    {
        std ::cout << "How many no. of meals you want?"<< "\n";
        std ::cin >> meals;
    }
};

class Drinks
{
public:
    int drink;
    void liquids()
    {
        std ::cout << "How many no. of liquids you want?"<< "\n";
        std ::cin >> drink;
    }
};

class Bill : public party, public Drinks
{
public:
    int total_Bill;
    int total_meals;
    int total_drink;
    void total()
    {
        total_meals = meals * 120;
        total_drink = drink * 30;

        total_Bill = total_meals + total_drink;
        std ::cout << "Total Bill is:"
                   << "\n"
                   << total_Bill;
    }
};

int main()
{
    Bill b;
    b.food();
    b.liquids();
    b.total();
    return 0;
}