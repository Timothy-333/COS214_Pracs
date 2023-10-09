#ifndef ADAPTER_H
#define ADAPTER_H
#include <string>
#include <iostream>
#include "target.h"
#include "sqlAdaptee.h"
using namespace std;
class adapter : public target
{
    private:
        sqlAdaptee* sql_adaptee;
    public:
        adapter(sqlAdaptee*);
        string convertString(string);
};
#endif