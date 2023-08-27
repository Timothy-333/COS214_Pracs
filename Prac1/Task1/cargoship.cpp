#include "cargoship.h"
#include <cstring>
#include <iostream>
#include <string>

using namespace std;
// Constructor
cargoShip::cargoShip() : capacity(0), items(nullptr), currentLoad(0) {}

// Getters and setters
int cargoShip::getCapacity()
{
    return capacity;
}

void cargoShip::setCapacity(int c) 
{
    string* tempItems = new string[c];
    
    if (items != nullptr) 
    {
        int copyCount = std::min(capacity, c); // Copy minimum of old and new capacity
        for (int i = 0; i < copyCount; i++) 
        {
            tempItems[i] = items[i];
        }
        delete[] items; // Delete old items array
    }
    
    items = tempItems;
    capacity = c;
}

string *cargoShip::getItems()
{
    return items;
}

void cargoShip::addItem(string item)
{
    if (currentLoad < capacity)
    {
        items[currentLoad] = item;
        currentLoad++;
    }
    else
    {
        cout << "Ship is full" << endl;
    }
}

void cargoShip::deleteItem(string item)
{
    int count = -1;
    for (int i = 0; i < capacity; i++)
    {
        if (strcasecmp(items[i].c_str(), item.c_str()) == 0)
        {
            count = i;
            items[i] = "";
            break;
        }
    }

    if (count > -1)
    {
        
    }
}

void cargoShip::setItems(string *i)
{
    if (items != nullptr)
    {
        items = new string[capacity];
    }
    int counter = 0;
    while (i[counter] != "")
    {
        counter++;
    }
    counter--;
    if (counter > capacity)
    {
        counter = capacity;
    }
    for (int j = 0; j < counter; j++)
    {
        items[j] = i[j];
        currentLoad++;
    }
}

int cargoShip::getCurrentLoad()
{
    return currentLoad;
}

void cargoShip::setCurrentLoad(int l)
{
    currentLoad = l;
}

// toString() method
string cargoShip::toString()
{
    // Implement the logic to convert the cargoShip object to a string representation
    // and return the string.
    string str = "Ship " + to_string(getShipId()) + ": " + getShipName() + "\nload: " + to_string(getCurrentLoad()) + "/" + to_string(getCapacity()) + "\n";
    str += "Items: \n";
    if (capacity <= 0)
    {
        str += "No items onboard.";
    }
    else 
    {
        for (int i = 0; i < capacity; i++)
        {
            if (items[i] != "")
            {
                str += "item " + to_string(i) + ": " + items[i] + "\n";
            }
            else
            {
                str += "item " + to_string(i) + ": empty\n";
            }
        }
    }

    return str;
}

// save() method
cargoMemento cargoShip::save(int saveId)
{
    // Implement the logic to save the current state of the cargoShip object into a cargoMemento
    // and return the cargoMemento object.
    // For example:
    return cargoMemento(shipName, shipId, capacity, currentLoad, items, saveId);
}

// restore() method
void cargoShip::restore(cargoMemento restorePoint)
{
    // Implement the logic to restore the state of the cargoShip object from the given cargoMemento.
    // For example:
    capacity = restorePoint.getCapacity();
    items = restorePoint.getItems();
    currentLoad = restorePoint.getCurrentLoad();
    shipName = restorePoint.getShipName();
    shipId = restorePoint.getShipId();
}

// clone() method
ship *cargoShip::clone()
{
    // Implement the logic to create and return a new cargoShip object that is a copy of the current object.
    // For example:
    return new cargoShip(*this);
}
