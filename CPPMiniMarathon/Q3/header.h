#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>

class Player
{
private:
    static int id;
    int playerId;

    char *pname;
    int scores[3];

public:

    Player();
    Player(const char *n, int m[]);
    Player(const Player &N);
    ~Player();

    void accept();
    void display() const;
    float avg() const;

    int operator==(const Player &player);

    int operator<(const Player &player);

    char &operator[](int index);

    int getPlayerId() const { return playerId; }
    void setPlayerId(int playerId_) { playerId = playerId_; }

    const char *getName() const { return pname; }

    void setName(const char *name_)
    {
        delete[] pname;
        pname = new char[strlen(name_) + 1];
        strcpy(pname, name_);
    }

    int getScores() const
    {
        for (int i = 0; i < 3; i++)
        {
            return scores[i];
        }
    }

    void setScores(int m[])
    {
        for (int i = 0; i < 3; i++)
        {
            scores[i] = m[i];
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const Player &rhs);

};

inline std::ostream &operator<<(std::ostream &os, const Player &rhs) {
    os << "playerId: " << rhs.playerId
       << " pname: " << rhs.pname;
       for(int i : rhs.scores)
       {
            std::cout << i << "\n";
       }
    return os;
}

#endif // HEADER_H

/*#include <string.h>
#include <ostream>
#ifndef HEADER_H
#define HEADER_H

class Player
{
private:
    static int _id;
    int _playerID;
    char *_playerName;
    int _scores[5];

    int *arr;

public:
//     Player() {}
//     ~Player() {}

//     const char *playerName() const { return _playerName; }
//     void setPlayerName(const char *playerName)
//     {
//         playerName = new char[strlen(playerName) + 1];
//         strcpy(_playerName, playerName);
//     }

//     int scores() const
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             return _scores[i];
//         }
//     }
//     void setScores(int scores[])
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             _scores[i] = scores[i];
//         }
//     }

//     int playerID() const { return _playerID; }
//     void setPlayerID(int playerID) { _playerID = playerID; }

//     int getArr() const
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             return arr[i];
//         }
//     }
//     void setArr(int arr_[])
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             arr[i] = arr_[i];
//         }
//     }
//     char &operator[](int index);

//     //->
//     //()
//     //*
//     //:: -> not possible

//     int operator->()
//     {
//         return _playerID;
//     }

//     char *operator()()
//     {
//         return _playerName;
//     }

//     // bool operator==(const Player &other) const;

//     bool operator==(const Player &other) const
//     {
//         for (int i = 0; i < 3; i++)
//         {
//             return _scores[i] == other._scores[i] && arr[i] == other.arr[i];
//         }
//     }

//     friend std::ostream &operator<<(std::ostream &os, const Player &rhs);
// };

// inline bool Player::operator==(const Player &other) const
// {
//     if (strcmp(_playerName, other._playerName) == 0)
//     {
//         return true;
//     }
//     return false;
// }

// inline std::ostream &operator<<(std::ostream &os, const Player &rhs)
// {
//     os << "_playerID: " << rhs._playerID
//        << " _playerName: " << rhs._playerName;
//     for (int i = 0; i < 3; i++)
//     {
//         os << " _scores: " << rhs._scores[i] << "\n"
//            << " arr: " << rhs.arr[i];
//     }
//     return os;
// }

// #endif // HEADER_H*/
