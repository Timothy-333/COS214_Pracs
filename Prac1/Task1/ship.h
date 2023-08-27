#ifndef SHIP_H
#define SHIP_H

#include <string>
using namespace std;
class ship {
public:
   string shipName;
   int shipId;

   string getShipName();
   void setShipName(string s);

   int getShipId();
   void setShipId(int i);

protected:
    virtual ship* clone();
};

#endif // SHIP_H
