// ------------------------------------------------------------------header.h--------------------------------------------------------
#ifndef HEADER_H
#define HEADER_H
#include<cstring>
#include<iostream>

class Player
{
    static int idcount;
    int playerid;
    char *pname; 
    int scores[3];

public:

    Player();
    Player(const char *n, int m[]);
    Player(const Player &other);

    const char* getPname() const
    {
        return pname;
    }

    void setPname(const char* pname_) 
    {
        delete[] pname; // Free previous memory if any
        pname = new char[strlen(pname_) + 1];
        strcpy(pname, pname_);
    }

    int getScores() const 
    {
        for (int i = 0; i < 3; ++i)
        {
            return scores[i];
        }
    }

    void setScores(int m[])
    { 
        for (int i = 0; i < 3; ++i)
        {
            scores[i] = m[i];
        }
    }

    void accept();
    void display() const;
    float average() const;

    ~Player();

    int operator==(const Player& other);

    int operator<(const Player & other);

    char& operator[](int index);

    friend std::ostream& operator<<(std::ostream& os, const Player& p1);
};

#endif // HEADER_H