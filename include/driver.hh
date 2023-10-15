#ifndef DRIVER
#define DRIVER
#include <string>

#include "./person.hh"

class ambulance;
class driver : public person
{
private:
    string licenseNumber;
    bool idle;
    friend class ambulance;

public:
    driver();
    void override fillMap();
    void override saveMap();
    void override addPerson();
    void override printDetails();
    void override printDetailsFromHistory(string extraDetails = "");
    void override getDetails(int rec = 0);
    void override getDetailsFromHistory();
    void override removePerson();
};
#endif // !DRIVER