#ifndef PRIMITIVE_H/*define*/
#define PRIMITIVE_H/*define*/

#include <string>

using namespace std;

class primitive {
public:
    string shape;

    primitive();
    string getShape() const;
    void setShape(string shape);

protected:
    virtual string toString() = 0; 
};

#endif ///*define*/