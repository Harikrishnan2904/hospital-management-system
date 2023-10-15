#ifndef DOCTOR
#define DOCTOR
#include <string>

#include "./person.hh"

class appointment;
class doctor : public person
{
private:
    string type;
    int appointmentsBooked;
    friend class appointment;

public:
    doctor();
    void  fillMap() override;
    void saveMap() override;
    void addPerson() override;
    void printDetails() override;
    void printDetailsFromHistory(string extraDetails = "") override;
    void getDetails(int rec = 0) override;
    void getDetailsFromHistory() override;
    void removePerson() override;
};
#endif