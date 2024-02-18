#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

enum MovieRating
{
    U,
    R,
    A
};

enum Shows
{
    SHOW1,
    SHOW2,
    SHOW3
};

class Movie
{
    std::string movieName;
    std::string movieId;
    std::string movieDirector;
    enum MovieRating mRating;
    int runTime;
    std::string cast[3];
    
    static int seats;
    int price[3];

public:
    Movie();
    Movie(std::string, std::string, std::string, enum MovieRating, int, std::string *, int *);
    friend std::ostream &operator<<(std::ostream &os, Movie &m);
    void accept();

    int getRunTime() const { return runTime; }
    void setRunTime(int runTime_) { runTime = runTime_; }

    enum MovieRating getMRating() const { return mRating; }
    void setMRating(const enum MovieRating &mRating_) { mRating = mRating_; }

    std::string getMovieDirector() const { return movieDirector; }
    void setMovieDirector(const std::string &movieDirector_) { movieDirector = movieDirector_; }

    std::string getMovieId() const { return movieId; }
    void setMovieId(const std::string &movieId_) { movieId = movieId_; }

    std::string getMovieName() const { return movieName; }
    void setMovieName(const std::string &movieName_) { movieName = movieName_; }

    void setCast(const std::string &cast_)
    {
        for (int i = 0; i < 3; i++)
        {
            cast[i] = cast_[i];
        }
    }

    int *getPrice() { return price; }
    void setPrice(int *price_)
    {
        for (int i = 0; i < 3; i++)
        {
            price[i] = price_[i];
        }
    }

    static int getSeats() { return Movie::seats; }
    static void setSeats(int seats) { Movie::seats = seats; }

};

#endif // MOVIE_H

