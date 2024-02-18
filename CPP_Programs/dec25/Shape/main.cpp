#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include <iostream>

int main()
{
    // Shape s;
    // s.display();
    // s.area();

    Shape *s1 = new Rectangle(20, 30);
    Rectangle *r = dynamic_cast<Rectangle *>(s1);
    if (r != nullptr)
    {
        r->area();
    }

   

    Rectangle r1;
    r1.accept();
    r1.display();

    Shape *sh = new Rectangle(2, 3);

    Circle *c = dynamic_cast<Circle *>(sh);
    if (c != nullptr)
    {
        c->area();
    }
    else
    {
        std ::cout << "\n**Wrong**"<<"\n";
    }

    delete c;

    return 0;
}