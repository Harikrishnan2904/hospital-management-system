#ifndef PATIENT
#define PATIENT

#include "./person.hh"

class appointment;
class patient : public person
{
private:
    int height; //in cms;
    int weight; //in pounds;
    bool hospitalized;
    bool alive;
    friend class appointment;

public:
    patient();
    void override fillMap();
    void override saveMap();
    void override addPerson();
    void override printDetails();
    void override printDetailsFromHistory(string extraDetails = "");
    void override getDetails(int rec = 0);
    void override getDetailsFromHistory();
    void hospitalize();
    void reportADeath();
    void override removePerson();
};
#endif // !PATIENT