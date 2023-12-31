#ifndef AMBULANCE
#define AMBULANCE
#include <string>

#include "./driver.hh"
#include "./address.hh"

class ambulance
{
private:
    int id;
    string model;
    string manufacturer;
    string vrn;
    bool idle;
    address add;
    driver D;

public:
    ambulance();
    void fillMap();
    void saveMap();
    void addAmbulance();
    void printDetails();
    void printDetailsFromHistory(string extraDetails = "");
    void getDetails(int rec = 0);
    void getDetailsFromHistory();
    void send();
    void reportArrival();
    void removeAmbulance();
};
#endif