#ifndef TARGET_H
#define TARGET_H
#include <string>
#include <iostream>
using namespace std;
class target 
{
    public:
        target();
        virtual string convertString(string) = 0;
};
#endif