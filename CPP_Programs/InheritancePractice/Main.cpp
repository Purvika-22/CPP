#include "Doctor.h"
#include "Dentist.h"

int main()
{
    Doctor *d = new Dentist("ADoctor", 34, 6700.7f, "KIMS");
    d->checkPatient();

    Dentist *den = dynamic_cast<Dentist *>(d);

    if (den != nullptr)
    {
        den->RootCanal();
    }

    delete d;
}