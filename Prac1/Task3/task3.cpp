#include <iostream>
#include <vector>
#include <string>

// Forward declarations
class Primitive;
class OpenGLPrimitive;
class VulkanPrimitive;
class Window;
class OpenGLWindow;
class VulkanWindow;
class Factory;
class OpenGLFactory;
class VulkanFactory;

class Primitive
{
protected:
    std::string shape;

public:
    Primitive(const std::string &s) : shape(s) {}
    virtual ~Primitive() {}

    const std::string &getShape() const { return shape; }
    void setShape(const std::string &s) { shape = s; }

    virtual std::string toString() const = 0;
};

class OpenGLPrimitive : public Primitive
{
private:
    float xcoord;
    float ycoord;

public:
    OpenGLPrimitive(const std::string &s, float x, float y) : Primitive(s), xcoord(x), ycoord(y) {}

    float getXCoord() const { return xcoord; }
    float getYCoord() const { return ycoord; }
    void setXCoord(float x) { xcoord = x; }
    void setYCoord(float y) { ycoord = y; }

    std::string toString() const override
    {
        return "OpenGL " + shape + ":\nX coordinate: " + std::to_string(xcoord) + "\nY coordinate: " + std::to_string(ycoord);
    }
};

class VulkanPrimitive : public Primitive
{
private:
    float xcoord;
    float ycoord;

public:
    VulkanPrimitive(const std::string &s, float x, float y) : Primitive(s), xcoord(x), ycoord(y) {}

    float getXCoord() const { return xcoord; }
    float getYCoord() const { return ycoord; }

    void setXCoord(float x) { xcoord = x; }
    void setYCoord(float y) { ycoord = y; }

    std::string toString() const override
    {
        return "Vulkan " + shape + ":\nX coordinate: " + std::to_string(xcoord) + "\nY coordinate: " + std::to_string(ycoord);
    }
};

class Window
{
protected:
    int screenHeight;
    int screenWidth;
    int primitiveCount;
    int primitiveCapacity;
    std::vector<Primitive *> primitives;

public:
    Window(int height, int width, int capacity) : screenHeight(height), screenWidth(width), primitiveCount(0), primitiveCapacity(capacity) {}
    virtual ~Window()
    {
        for (Primitive *p : primitives)
        {
            delete p;
        }
    }

    int getScreenHeight() const { return screenHeight; }
    int getScreenWidth() const { return screenWidth; }
    int getPrimitiveCount() const { return primitiveCount; }
    int getPrimitiveCapacity() const { return primitiveCapacity; }

    void setScreenHeight(int height) { screenHeight = height; }
    void setScreenWidth(int width) { screenWidth = width; }
    void setPrimitiveCount(int count) { primitiveCount = count; }
    void setPrimitiveCapacity(int capacity) { primitiveCapacity = capacity; }
    
    const std::vector<Primitive *> &getPrimitives() const { return primitives; }
    void setPrimitives(const std::vector<Primitive *> &p) 
    { 
        //make a deep copy
        primitives.clear();
        for (Primitive *prim : p)
        {
            primitives.push_back(prim);
        }
    }

    virtual void addPrimitive(Primitive *p)
    {
        if (primitiveCount < primitiveCapacity)
        {
            primitives.push_back(p);
            primitiveCount++;
        }
    }

    virtual std::string toString() const = 0;
};

class OpenGLWindow : public Window
{
public:
    OpenGLWindow(int height, int width) : Window(height, width, 3) {}

    void addPrimitive(Primitive *p) override
    {
        if (primitiveCount < primitiveCapacity)
        {
            primitives.push_back(p);
            primitiveCount++;
            std::cout << "Added primitive to OpenGL window successfully" << std::endl;
            std::cout << "Primitive count: " << std::to_string(primitiveCount) << std::endl;
        }
        else
        {
            std::cout << "Cannot add more than 3 primitives to OpenGL window." << std::endl;
        }
    }
    std::string toString() const override
    {
        std::string result = "OpenGL window " + std::to_string(screenWidth) + "x" + std::to_string(screenHeight) + ":\n";
        for (const Primitive *p : primitives)
        {
            result += p->toString() + "\n";
        }
        return result;
    }
};

class VulkanWindow : public Window
{
public:
    VulkanWindow(int height, int width) : Window(height, width, 9) {}

    void addPrimitive(Primitive *p) override
    {
        if (primitiveCount < primitiveCapacity)
        {
            primitives.push_back(p);
            primitiveCount++;
            std::cout << "Added primitive to Vulkan window successfully" << std::endl;
            std::cout << "Primitive count: " << std::to_string(primitiveCount) << std::endl;
        }
        else
        {
            std::cout << "Cannot add more than 9 primitives to Vulkan window." << std::endl;
        }
    }
    std::string toString() const override
    {
        std::string result = "Vulkan window " + std::to_string(screenWidth) + "x" + std::to_string(screenHeight) + ":\n";
        for (const Primitive *p : primitives)
        {
            result += p->toString() + "\n";
        }
        return result;
    }

};

class Factory
{
public:
    virtual ~Factory() {}

    virtual Window *createWindow(int height, int width) = 0;
    virtual Primitive *createPrimitive(const std::string &shape, float x, float y) = 0;
};

class OpenGLFactory : public Factory
{
public:
    Window *createWindow(int height, int width) override
    {
        return new OpenGLWindow(height, width);
    }

    Primitive *createPrimitive(const std::string &shape, float x, float y) override
    {
        return new OpenGLPrimitive(shape, x, y);
    }
};

class VulkanFactory : public Factory
{
public:
    Window *createWindow(int height, int width) override
    {
        return new VulkanWindow(height, width);
    }

    Primitive *createPrimitive(const std::string &shape, float x, float y) override
    {
        return new VulkanPrimitive(shape, x, y);
    }
};

int main()
{
    OpenGLFactory openglFactory;
    VulkanFactory vulkanFactory;

    Window *openglWindow = openglFactory.createWindow(800, 600);
    Window *vulkanWindow = vulkanFactory.createWindow(1024, 768);

    Primitive *openglPrimitive = openglFactory.createPrimitive("Triangle", 10.0f, 20.0f);
    Primitive *openglPrimitive2 = openglFactory.createPrimitive("Square", 5.0f, 5.0f);
    Primitive *vulkanPrimitive = vulkanFactory.createPrimitive("Circle", 30.0f, 40.0f);
    std::vector <Primitive *> primitives;
    primitives.push_back(openglPrimitive);
    primitives.push_back(openglPrimitive2);

    openglWindow->setPrimitives(primitives);
    openglWindow->addPrimitive(openglPrimitive);
    openglWindow->addPrimitive(openglPrimitive);
    std::cout << std::endl;
    vulkanWindow->addPrimitive(vulkanPrimitive);
    vulkanWindow->addPrimitive(vulkanPrimitive);

    std::cout << std::endl;
    std::cout << openglWindow->toString() << std::endl;
    std::cout << vulkanWindow->toString() << std::endl;

    //delete openglWindow;
    //delete vulkanWindow;

    return 0;
}
