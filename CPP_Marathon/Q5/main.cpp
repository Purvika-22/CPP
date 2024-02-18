#include <iostream>
#include "movie.h"

void getDetails(Movie *m, int size, std::string id)
{
    for (int i = 0; i < size; i++)
    {
        if (m[i].getMovieId() == id)
        {
            std::cout << m[i];
            return;
        }
    }
    std::cout << "movie with id " << id << " is not found" << std::endl;
}

void bookTickets(Movie *m, int size, std::string name)
{
    for (int i = 0; i < 3; i++)
    {
        if (m[i].getMovieName() == name)
        {
            m[i].setSeats(m[i].getSeats() - 1);
        }
    }
}

void calcAverage(Movie *m, int size, std::string name)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (m[i].getMovieName() == name)
        {
            int *price = m[i].getPrice();
            for (int j = 0; j < 3; j++)
            {
                sum += price[j];
            }
            break;
        }
    }
    std::cout << "the average is :" << sum / 3;
}

int main()
{
    int n;
    std::cout << "enter how many objects have to be created for movie: ";
    std::cin >> n;
    Movie *m = new Movie[n];
    int curr = 0;
    std::cout << "********************" << std::endl;
    bool flag = true;
    std::string s;
    while (flag)
    {
        int choice;
        std::cout << "choose an option \n1:register a movie \n2:display the movie details\n3:book a ticket\n4:search movie\n5:calculate average \n6:exit";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            m[curr++].accept();
            break;
        case 2:
            std::cout << "displaying the movie details: " << std::endl;
            for (int i = 0; i < curr; i++)
            {
                std::cout << m[i];
            }
            break;
        case 3:
            bookTickets(m, n, "asd");
            break;
        case 4:
            std::cout << "enter movie id to search :";
            std::cin >> s;
            getDetails(m, n, s);
        case 5:
            calcAverage(m, n, "asd");
        case 6:
            flag = false;
            break;
        }
    }
    delete[] m;
    return 0;
}
