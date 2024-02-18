#include "flight.h"

int Flight ::id = 0;

/* static int id;
    int flightObjects;
    long int flightNum;
    float distance;
    float fuel;
    float fare;*/

Flight::Flight() : flightObjects(++id), flightNum(1111), distance(100), fuel(10000), fare(1000)
{
}

Flight::Flight(int fobj, long int fnum, float dis, float fuel, float fare)
    : flightObjects(++id), flightNum(fnum), distance(dis), fuel(fuel), fare(fare)
{
}

Flight::Flight(const Flight &f)
    : flightObjects(f.id), flightNum(f.flightNum), distance(f.distance), fuel(f.fuel), fare(f.fare)
{
}

std::istream &operator>>(std::istream &is, Flight &f)
{
    std ::cout << "\nEnter flight Number : ";
    is >> f.flightNum;
    std ::cout << "\nFuel : ";
    is >> f.fuel;
    std ::cout << "\nDistance : ";
    is >> f.distance;
    std ::cout << "\nFare :";
    is >> f.fare;
    return is;
}

void Flight ::display() const
{
    std ::cout << "\nFlight objects : " << flightObjects;
    std ::cout << "\nEnter flight Number : " << flightNum;
    std ::cout << "\nFuel : " << fuel;
    std ::cout << "\nDistance : " << distance;
    std ::cout << "\nFare :" << fare;
}

std::ostream &operator<<(std::ostream &os, const Flight &f)
{
    os << "\nFlight objects : " << f.flightObjects;
    os << "\nEnter flight Number : " << f.flightNum;
    os << "\nFuel : " << f.fuel;
    os << "\nDistance : " << f.distance;
    os << "\nFare :" << f.fare;
    return os;
}

Flight search(Flight f[], int n, int element)
{
    int index = 0;
    for(int i=0;i<=n;i++)
    {
        if(f[i].getFlightObjects() == element)
        {
            index = i;
        }
    }
    return f[index];
}
