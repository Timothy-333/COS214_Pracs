#ifndef SMARTCONTRACTSTATE_H
#define SMARTCONTRACTSTATE_H
#include <string>
class SmartContract;
using namespace std;
class SmartContractState
{
protected:
    SmartContract* smartContract;
public:
    SmartContractState(SmartContract*);
    virtual void add();
    virtual void remove();
    virtual void accept();
    virtual void reject();
    virtual void complete();
    ~SmartContractState();
};
#endif // "SmartContractState_H"