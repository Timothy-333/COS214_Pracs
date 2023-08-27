#include "cargomemento.h"

// Default Constructor
cargoMemento::cargoMemento() : shipId(0), version(0), shipName(""), items(nullptr), currentLoad(0), capacity(0) {}

// Parameterized Constructor
cargoMemento::cargoMemento(string shipName, int shipId, int capacity, int currentLoad, string* items, int saveId)
    : shipId(shipId), version(saveId), shipName(shipName), items(items), currentLoad(currentLoad), capacity(capacity) {
        this->items = new string[currentLoad];
        for (int i = 0; i < currentLoad; i++)
        {
            this->items[i] = items[i];
        }
    }

// Getters
int cargoMemento::getShipId() { 
    return shipId; 
}
int cargoMemento::getVersion() { 
    return version; 
}
string cargoMemento::getShipName() { 
    return shipName; 
}
string* cargoMemento::getItems() { 
    return items; 
}
int cargoMemento::getCurrentLoad() { 
    return currentLoad; 
}
int cargoMemento::getCapacity() { 
    return capacity; 
}
