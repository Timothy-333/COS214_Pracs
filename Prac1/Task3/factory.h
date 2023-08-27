#ifndef FACTORY_H/*define*/
#define FACTORY_H/*define*/

#include <string>
#include "window.h"
#include "primitive.h"

using namespace std;

class factory {
public:
    virtual window* createWindow() = 0;
    virtual primitive* createPrimitive() = 0;
};

#endif ///*define*/