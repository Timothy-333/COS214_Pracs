#ifndef WINDOW_H/*define*/
#define WINDOW_H/*define*/

#include <string>

using namespace std;

class window {
public:
    int screenHeight;
    int screenWidth;
    int primitiveCount;
    int primitiveCapacity;

    int getScreenHeight() const;
    void setScreenHeight(int height);

    int getScreenWidth() const;
    void setScreenWidth(int width);

    int getPrimitiveCount() const;
    void setPrimitiveCount(int count);

    int getPrimitiveCapacity() const;
    void setPrimitiveCapacity(int capacity);
    ~window();

protected:
    virtual string toString() = 0;
};

#endif ///*define*/