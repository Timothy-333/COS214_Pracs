#ifndef VULKANPRIMITIVE_H/*define*/
#define VULKANPRIMITIVE_H/*define*/

#include <string>
#include "primitive.h"

using namespace std;

class vulkanPrimitive: public primitive {
public:
    float xcoord;
    float ycoord;

    float getXCoord() const;
    void setXCoord(float x);

    float getYCoord() const;
    void setYCoord(float y);

    string toString() override;
};

#endif ///*define*/