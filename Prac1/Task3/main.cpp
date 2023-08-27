#include <iostream>
#include "openglfactory.h"
#include "openglwindow.h"
#include "openglprimitive.h"
#include "vulkanfactory.h"
#include "vulkanprimitive.h"
#include "vulkanwindow.h"

using namespace std;

int main() {
    vulkanFactory factory;

    vulkanWindow* w = dynamic_cast<vulkanWindow*>(factory.createWindow());

    vulkanPrimitive* p = dynamic_cast<vulkanPrimitive*>(factory.createPrimitive());

    w->setPrimitives(p);

    cout << w->toString() << endl;  // Outputs "vulkanWindow"

    return 0;
}
