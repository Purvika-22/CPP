#include <iostream>
#include <cstring>

enum HOBBIES
{
    READING,
    SINGIGNG,
    DANCING
};

class Person
{
    char name[20];
    enum HOBBIES hb;

public:
    HOBBIES ho;

    Person()
    {
        strcpy(name, "kamal");
        hb = READING;
    }
    Person(const char *nm, enum HOBBIES h)
    {
        strcpy(name, nm);
        hb = h;
    }
    void accept()
    {
        std ::cout << "\nEnter the name:";
        std ::cin >> name;
        std ::cout << "\n Enter your hobby 0-READING,1-SINGIGNG,2-DANCING" << std::endl;
        int h;
        std ::cin >> h;
        switch (h)
        {
        case 0:
            hb = READING;
            break;
        case 1:
            hb = SINGIGNG;
            break;
        case 2:
            hb = DANCING;
            break;
        default:
            hb = READING;
            break;
        }
    }

    void display()
    {
        std ::cout << "\n Your name:" << name;
        std ::cout << "\n Your hobby";
        // int h;
        // std ::cin >> h;
        switch (ho)
        {
        case 0:
            std ::cout << "\nREADING";
            break;
        case 1:
            std ::cout << "\nSINGIGNG";
            break;
        case 2:
            std ::cout << "\nDANCING";
            break;
        default:
            break;
        }
    }
};
int main()
{
    Person p1;
    return 0;
}