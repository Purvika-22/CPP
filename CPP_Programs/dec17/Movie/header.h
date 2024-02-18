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
