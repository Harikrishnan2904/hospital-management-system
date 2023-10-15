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
    int hh;
public:
    appointment();
    void fillMap();
    void saveMap();
    void printDetails();
    void book();
    void fillDetails();
    void getDetails();
};
#endif