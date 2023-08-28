#ifndef TESTDECORATOR_H
#define TESTDECORATOR_H
#include <string>
#include <iostream>
#include "testable.h"
using namespace std;
class TestDecorator : public Testable
{
    protected:
        Testable* internalTestBed;
    public:
        TestDecorator(Testable*);
        Testable* getInternalTestBed();
        void setInternalTestBed(Testable*);
        virtual bool runTest();
};
#endif