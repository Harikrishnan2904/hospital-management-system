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
    void override fillMap();
    void override saveMap();
    void override addPerson();
    void override printDetails();
    void override printDetailsFromHistory(string extraDetails = "");
    void override getDetails(int rec = 0);
    void override getDetailsFromHistory();
    void override removePerson();
};
#endif // !NURSE