    #include "tv.h"

    Tv::Tv() : Device()
    {
    }

    Tv::Tv(const char *brand, const char *color, int releaseYear, int price, float discount)
    :Device(brand,color,releaseYear,price,discount)
    {
    }

    Tv::~Tv()
    {
        std :: cout << "~TV() called";
    }

    void Tv::display()
    {
        std::cout << "TV info:\n";
        std::cout << "Brand: " << getBrand() << "\n"
                << "Color: " << getColor() << "\n"
                << "Release Year: " << getReleaseYear() << "\n"
                << "Price: " << getPrice() << "\n"
                << "Discount: " << getDiscount() << "\n";
    }

    void Tv::switchoff()
    {
        std :: cout << "\nYour TV is switched off";
    }

    void Tv::switchon()
    {
        std :: cout << "\nYour TV is switched on";
    }
