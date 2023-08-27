#include <iostream>
#include "ship.h"
#include "cargoship.h"
#include "cargomemento.h"

int main() {
    cargoShip myShip;
    string* strList = new string[10];
    for (int i = 0; i < 10; i++)
    {
        strList[i] = "cargo ";
        strList[i] += to_string(i);
    }
    myShip.setShipName("SS Enterprise");
    myShip.setShipId(42);
    myShip.setCapacity(11);
    myShip.setItems(strList);
    myShip.setCurrentLoad(10);
    myShip.addItem("cargo 11");
    myShip.addItem("cargo 12");
    std::cout << myShip.toString() << std::endl;
    myShip.setCapacity(12);
    myShip.addItem("cargo 13");
    myShip.addItem("cargo 14");

    std::cout << myShip.toString() << std::endl;

    cargoMemento newMemento;
    newMemento = myShip.save(1);
    for (int i = 0; i < 10; i++)
    {
        strList[i] = "cargo ";
        strList[i] += to_string(i+10);
    }

    myShip.setShipName("Not The SS Enterprise");
    myShip.setShipId(33);
    myShip.setCapacity(3);
    myShip.setItems(strList);
    myShip.setCurrentLoad(3);

    std::cout << myShip.toString() << std::endl;
    myShip.restore(newMemento);

    std::cout << myShip.toString() << std::endl;

    return 0;
}
