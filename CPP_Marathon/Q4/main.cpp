#include <iostream>
#include "hospital.h"
#include "doctor.h"
int main()
{
    int n;
    std::cout << "\nEnter the n :";
    std::cin >> n;

    Hospital *hospitals_arr = new Doctor[n];
    hospitals_arr->accept();

    int N;
    std::cout << "\nEnter the N :";
    std::cin >> N;
    Doctor *d = new Doctor[N];
    d->accept();

    std::cout << d->calcTax();
    char user_doc_name[30];
    std::cout << "\nEnter Doctor name : ";
    std::cin >> user_doc_name;
    for (int i = 0; i < N; i++)
    {
        if (strcmp(user_doc_name, d[i].doctorName()) == 0)
        {
            std::cout << d[i];
        }
    }

    int h_hr;
    std::cout << "\nGive you Rating :";
    
    std ::cin >> h_hr;

    if (h_hr == 0)
    {
        std ::cout << "\n GOOD ";
    }
    else if (h_hr == 1)
    {
        std::cout << "\n AVERAGE ";
    }
    else if (h_hr == 2)
    {
        std ::cout << "\n POOR  ";
    }

    return 0;
}