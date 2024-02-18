#include "Doctor.h"

class HS : public Doctor
{
private:
    /* data */
public:
    HS() = default;
    HS(const char *doctorName, int doctorAge, float doctorFee, const char *hospital);

    void checkPatient() override;

    ~HS() {}
};