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
    void override fillMap();
    void override saveMap();
    void override addPerson();
    void override printDetails();
    void override printDetailsFromHistory(string extraDetails = "");
    void override getDetails(int rec = 0);
    void override getDetailsFromHistory();
    void override removePerson();
};
#endif // !DOCTOR