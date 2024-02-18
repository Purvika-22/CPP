#include <iostream>
#include "header.h"
#include <cstring>

int Movie ::id = 0;

Movie::Movie() : movieid(id++), releaseyear(0)
{
    std::strcpy(title, "ABCD");
    std::strcpy(director, "XYZ");
    std::strcpy(genre, "dramatic");
    tc = GOLD;
}

void Movie::setP(int n)
{
    p = new char[n + 1];
}
Movie :: ~Movie()
{
    delete [] p;
}
Movie::Movie(int pubyear, const char *title_, enum TicketCategory t) : movieid(id++), releaseyear(pubyear)
{
    id++;
    strcpy(title, title_);
    tc = t;
}

Movie::Movie(const char *movietitle, const char *moviedirector, int moviereleaseyear, const char *moviegenre) : movieid(id++), releaseyear(moviereleaseyear)
{
    std::strcpy(title, movietitle);
    std::strcpy(director, moviedirector);
    std::strcpy(genre, moviegenre);
}

void Movie::displayDetails() const
{
    std::cout << "\n Movie id is: " << movieid;
    std ::cout << "\nMovie name is: " << title;
    std ::cout << "\nMovie director is: " << director;
    std ::cout << "\nMovie released in the year: " << releaseyear;
    std ::cout << "\nMovie genre is: \n"
               << genre;
    std::cout << "\n Movie Characters are:\n";
    for (int j = 0; j < 3; j++)
    {
        std::cout << p[j];
    }

    switch (tc)
    {
    case 0:
        std::cout << "\nPrice of your ticket is 1500";
        break;
    case 1:
        std::cout << "\nPrice of your ticket is 1000";
        break;
    case 2:
        std::cout << "\nPrice of your ticket is 500";
        break;
    default:
        std::cout << "\nInvlaid choice";
    }
}

void acceptdetails(Movie mv[], int size)
{
    bool flag = false;
    char name[20], director[20], genre[20];
    int year;
    for (int i = 0; i < size; i++)
    {
        flag = true;
        std ::cout << "\nEnter details:\n";
        std ::cout << "\nEnter Movie name:\n";
        std ::cin >> name;
        mv[i].setTitle(name);
        std ::cout << "\nEnter Movie director:\n";
        std ::cin >> director;
        mv[i].setDirector(director);
        std ::cout << "\nEnter Movie year:\n";
        std ::cin >> year;
        mv[i].setReleaseyear(year);
        std ::cout << "\nEnter Movie genre:\n";
        std ::cin >> genre;
        mv[i].setGenre(genre);
        int size;
        std::cout << "Enter no of movie characters";
        std::cin >> size;
        mv[i].setP(size);
        for (int j = 0; j < size; j++)
        {
            std::cin >> mv[i].p[j];
        }

        std ::cout << "\nEnter the ticket category 1:Platinum 2:Gold 3:Silver" << std::endl;
        int choice;
        std ::cin >> choice;
        switch (choice)
        {
        case 1:
            mv[i].tc = PLATINUM;
            break;
        case 2:
            mv[i].tc = GOLD;
            break;
        case 3:
            mv[i].tc = SILVER;
            break;
        default:
            std::cout << "Invlaid choice";
        }
    }
    if (flag == false)
    {
        std ::cout << "Not updated";
    }
}

void searchelement(Movie mv[], int size, const char *element)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if(mv[i].getTitle() == element)
        // if (strcmp(mv[i].getTitle(), element) == 0)
        {
            std ::cout << "Movie found with the title " << mv[i].getTitle() << "\t which was released in the year " << mv[i].getReleaseyear();
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        std ::cout << "\n Movie with the title " << element << "\t Not found " << std ::endl;
    }
}


#ifndef HEADER_H
#define HEADER_H

#include <cstring>

enum TicketCategory
{
    PLATINUM,
    GOLD,
    SILVER
};

class Movie
{
private:
    static int id;
    int movieid;
    char title[100];
    char director[50];
    int releaseyear;
    char genre[50];

public: 
    char *p;
    enum TicketCategory tc;

public:
    // Constructors
    Movie();
    ~Movie(); 

    Movie(int, const char *, enum TicketCategory);
    Movie(const char *movietitle, const char *moviedirector, int moviereleaseyear, const char *moviegenre);

    // Function to display movie details
    void displayDetails() const;

    const char *getTitle() const { return title; }
    void setTitle(const char *title_) { strcpy(title, title_); } 
    

    int getReleaseyear() const { return releaseyear; }
    void setReleaseyear(int releaseyear_) { releaseyear = releaseyear_; }

    const char *getGenre() const { return genre; }
    void setGenre(const char *genre_) { strcpy(genre, genre_); }

    char *getP() const { return p; }
    void setP(int n);

    const char *getDirector() const { return director; }
    void setDirector(const char *director_) { strcpy(director, director_); }
};

void acceptdetails(Movie[], int);
void searchelement(Movie[], int, const char *);

#endif // HEADER_H
