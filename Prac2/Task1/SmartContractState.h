#ifndef SMARTCONTRACTSTATE_H
#define SMARTCONTRACTSTATE_H
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "SmartContract.h"
class SmartContract;
using namespace std;
class SmartContractState
{
protected:
    SmartContract* smartContract;
    int numParties;
public:
    vector<string>* conditions;
    vector<string>* aggreeingParties;
    string stateName;
    SmartContractState(SmartContract*, vector<string>*, vector<string>*, int);
    virtual void add(string);
    virtual void remove(string);
    virtual void accept(string);
    virtual void reject();
    virtual void complete();
    virtual void complete(string);
    virtual ~SmartContractState();
};
#endif // "SmartContractState_H"