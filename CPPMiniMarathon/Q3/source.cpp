#include "header.h"

int Player ::id = 1;

void Player ::accept()
{
    std ::cout << "\n Enter player name:"
               << "\n";
    pname = new char[90];
    std ::cin >> pname;
    std ::cout << "\nEnter scores:"
               << "\n";
    for (int i = 0; i < 3; i++)
    {
        std ::cin >> scores[i];
    }
    std ::cout << "\n";
}

Player ::Player() : playerId(id++)
{
    pname = new char[10];
    strcpy(pname, "Hari");
    int b[3] = {90, 90, 90};
    for (int i = 0; i < 3; i++)
    {
        scores[i] = b[i];
    }
}

Player ::Player(const char *n, int m[]) : playerId(id++)
{

    pname = new char[strlen(n) + 1];
    strcpy(pname, n);
    for (int i = 0; i < 3; i++)
    {
        scores[i] = m[i];
    }
}

Player::Player(const Player &N) : playerId(id++)
{
    std::cout << "Copy constructor" << std::endl;
    // Allocate memory for pname
    pname = new char[strlen(N.pname) + 1];

    // Copy the content of N.pname to pname
    strcpy(pname, N.pname);

    // Copy the scores
    for (int i = 0; i < 3; i++)
    {
        scores[i] = N.scores[i];
    }
}

float Player::avg() const
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += scores[i];
    }
    return total / 3.0;
}
int Player ::operator==(const Player &n)
{
    return (strcmp(pname, n.pname) == 0);
}

int Player::operator<(const Player &player)
{
    return avg() < player.avg();
}

std ::ostream &operator<<(std ::ostream &os, const Player &player)
{
    std ::cout << "\nplayer id is:" << player.playerId << "\n";
    std ::cout << "\nplayer name is:" << player.pname << "\n";
    for (int i = 0; i < 3; i++)
    {
        std ::cout << "\nscores:" << i + 1
                   << "\n";
        std ::cout << player.scores[i];
    }
    std ::cout << "\n";
    std ::cout << "\nAverage is:" << player.avg();
    return os;
}

Player :: ~Player()
{
    delete[] pname;
}

void Player ::display() const
{

    std ::cout << "\n";
    std ::cout << "\nplayer id is:" << playerId << "\n";
    std ::cout << "\nplayer name is:" << pname << "\n";
    for (int i = 0; i < 3; i++)
    {
        std ::cout << "\nscores:" << i+1
               << "\n";
        std ::cout << scores[i]<<"\n";
    }
    std :: cout << "\nAverage is:" << avg() ;
}


char &Player :: operator[](int index)
{
    if(index >=0 && index <= strlen(pname))
    {
        char ch;
        std :: cout << "\nEnter the new character:"<<"\n"; //a
        std :: cin >> ch;
        pname[index] = ch ;    
    }
    return pname[index]; //a
}

//ruhul
//a . display()
//all
