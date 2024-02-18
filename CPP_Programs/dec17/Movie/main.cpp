#include <iostream>
#include "header.h"

int main()
{
    Movie m1;
    // Movie m2("title", "director", 1992, "genre");

    int n;
    std ::cout << "\n Enter the number of Movies that u want to enter : ";
    std ::cin >> n;

    Movie *mptr = new Movie[n];

    acceptdetails(mptr, n);
    // void searchelement(Movie[],int,const char *);
    char ele[20];
    std::cout << "Enter the movie title :";
    std::cin >> ele;
    searchelement(mptr, n, ele);
    for (int i = 0; i < n; i++)
    {
        mptr[i].displayDetails();
    }

    delete[] mptr;
    return 0;
}