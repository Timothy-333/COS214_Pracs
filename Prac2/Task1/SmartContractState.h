#ifndef SMARTCONTRACTSTATE_H
#define SMARTCONTRACTSTATE_H
#include <string>
using namespace std;
class SmartContractState
{
private:
    /* data */
public:
    SmartContractState(/* args */);
    virtual void add();
    virtual void remove();
    virtual void accept();
    virtual void reject();
    virtual void complete();
    ~SmartContractState();
};
#endif // "SmartContractState_H"