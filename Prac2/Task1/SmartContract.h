#ifndef SMARTCONTRACT_H
#define SMARTCONTRACT_H
#include <iostream>
#include <string>
#include "SmartContractState.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Rejected.h"
#include "Completed.h"
using namespace std;
class SmartContract
{
private:
    SmartContractState* currentState;
    SmartContractState* negotiationState;
    SmartContractState* tentativelyAcceptedState;
    SmartContractState* acceptedState;
    SmartContractState* rejectedState;
    SmartContractState* completedState;
public:
    SmartContract(/* args */);
    void add();
    void remove();
    void accept();
    void reject();
    void complete();
    void setState(SmartContractState* state);
    ~SmartContract();
};
#endif // SMARTCONTRACTSTATE_H