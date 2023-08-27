#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "ship.h"
#include "cargomemento.h"
using namespace std;
class cargoShip : public ship {
public:
    int capacity;
    string* items;
    int currentLoad;

    cargoShip();

    int getCapacity();
    void setCapacity(int c);

    string* getItems();
    void setItems(string* i);

    void addItem(string item);
    void deleteItem(string item);

    int getCurrentLoad();
    void setCurrentLoad(int l);

    string toString();

    cargoMemento save(int saveId);

    void restore(cargoMemento restorePoint);

    ship* clone();
};

#endif // CARGOSHIP_H
