#ifndef APPOINTMENT
#define APPOINTMENT

#include "./patient.hh"
#include "./doctor.hh"

class appointment
{
private:
    int id;
    doctor D;
    patient P;
    int hh; //hh -> start hour in 24 hour format;
public:
    appointment();
    ~appointment();
    void fillMap();
    void saveMap();
    void printDetails();
    void book();
    void fillDetails();
    void getDetails();
};
#endif // !APPOINTMENT