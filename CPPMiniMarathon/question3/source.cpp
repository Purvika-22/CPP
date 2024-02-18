#include "header.h"
#include <cstring>
#include <iostream>

int Player::idcount = 1;

Player::Player()
{
    playerid = idcount++;
    pname = new char[20];
    strcpy(pname, "Shiva");
    int b[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        scores[i] = b[i];
    }
}

Player::Player(const char *n, int m[])
{
    playerid = idcount++;
    pname = new char[strlen(n) + 1];
    strcpy(pname, n);
    for (int i = 0; i < 3; i++)
    {
        scores[i] = m[i];
    }
}

Player::Player(const Player &other) // const classname &var
{
    playerid = other.idcount++;
    pname = new char[strlen(other.pname) + 1];
    strcpy(pname, other.pname);

    for (int i = 0; i < 3; ++i)
    {
        scores[i] = other.scores[i];
    }
}

float Player::average() const
{
    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += scores[i];
    }
    return total / 3;
}

void Player::accept()
{
    std::cout << "Enter the name is:" << std::endl;
    std::cin >> pname;
    std::cout << "Enter the scores:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> scores[i];
    }
    std::cout << std::endl;
}

Player::~Player()
{
    delete[] pname;
}

int Player::operator==(const Player &other)
{
    return (strcmp(this->pname, other.pname)==0);
}

int Player::operator<(const Player &other)
{
    return ((this->average()) < (other.average()));
}

char &Player::operator[](int index)
{
    if ((index >= 0 && index < strlen(pname)))
    {
        char m;
        std::cout << "Enter your desired character:" << std::endl;
        std::cin >> m;
        pname[index] = m;
    }
    return pname[index];
    
}

void Player::display() const
{
    std::cout << "The player id is: " << playerid << std::endl;
    std::cout << "The name is: " << pname << std::endl;
    std::cout << "The scores are:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "The Average is: " << average() << std::endl;
    std::cout << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Player &p1)
{
    os << "Overloading <<" << std::endl;
    os << "The player id is: " << p1.playerid << std::endl;
    os << "The name is: " << p1.pname << std::endl;
    os << "The scores are:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << p1.scores[i] << " ";
    }
    os << std::endl;
    os << "The Average is: " << p1.average() << std::endl;
    os << std::endl;
    return os;
}