#include <iostream>
#include "account.h"
int main()
{
    Account a;
    try
    {
        a.withdraw();
    }
    catch (LowBalException e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}