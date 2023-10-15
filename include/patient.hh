#ifndef PATIENT
#define PATIENT

#include "./person.hh"

class appointment;
class patient : public person
{
private:
    int height;
    int weight;
    bool hospitalized;
    bool alive;
    friend class appointment;

public:
    patient();
    void fillMap() override;
    void saveMap() override;
    void addPerson() override;
    void printDetails() override;
    void printDetailsFromHistory(string extraDetails = "") override;
    void getDetails(int rec = 0) override;
    void getDetailsFromHistory() override;
    void hospitalize();
    void reportADeath();
    void removePerson() override;
};
#endif