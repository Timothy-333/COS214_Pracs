#include "vulkanwindow.h"

vulkanPrimitive* vulkanWindow::getPrimitives() const {
    return primitives;
}

void vulkanWindow::setPrimitives(vulkanPrimitive* newPrimitives) {
        // Limit the number of primitives to 3
    int newPrimitiveCount = 0;
    this->primitiveCapacity = 9;
    this->primitives = new vulkanPrimitive[9];

    if (newPrimitives) {
        // Copy up to 3 primitives from the newPrimitives array to the primitives array
        for (int i = 0; i < 9; ++i) 
        {
            if (newPrimitives != nullptr) 
            {
                ++newPrimitiveCount;
            } else {
                break;  // Stop copying if encountering a nullptr
            }
        }

        this->primitiveCount = newPrimitiveCount;

        for (int i = 0; i < newPrimitiveCount; ++i) 
        {
            if (newPrimitives != nullptr) 
            {
                primitives[i] = newPrimitives[i];
            } 
        }
    }
}

string vulkanWindow::toString() {
    string result = "Vulkan window " + to_string(getScreenWidth()) + "x" + to_string(getScreenHeight()) + "\n";

    if (getPrimitiveCount() > 9) {
        result += "Only up to 9 primitives are allowed.";
    } else {
        for(int i = 0; i < this->primitiveCount; i++)
        {
            this->primitives[i].toString();
        }
    }
    
    return result;
}
