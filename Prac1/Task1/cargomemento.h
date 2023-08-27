#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include <string>
using namespace std;
class cargoMemento {
public:
    int shipId;
    int version;

    cargoMemento();
    cargoMemento(string shipName, int shipId, int capacity, int currentLoad, string* items, int saveId);
    int getShipId();
    int getVersion();
    string getShipName();
    string* getItems();
    int getCurrentLoad();
    int getCapacity();

private:
    string shipName;
    string* items;
    int currentLoad;
    int capacity;
};

#endif // CARGOMEMENTO_H
