#ifndef NURSE
#define NURSE
#include <string>

#include "./person.hh"

class nurse : public person
{
private:
    string type;

public:
    nurse();
    void fillMap() override;
    void saveMap() override;
    void addPerson() override;
    void printDetails() override;
    void printDetailsFromHistory(string extraDetails = "") override;
    void getDetails(int rec = 0) override;
    void getDetailsFromHistory() override;
    void removePerson() override;
};
#endif // !NURSE