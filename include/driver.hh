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
    void fillMap() override;
    void saveMap()override;
    void addPerson() override;
    void printDetails() override;
    void printDetailsFromHistory(string extraDetails = "") override;
    void getDetails(int rec = 0) override;
    void getDetailsFromHistory() override;
    void removePerson() override;
};
#endif // !DRIVER