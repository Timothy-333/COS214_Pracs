#include "SmartContractState.h"
SmartContractState::SmartContractState(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties)
{
    this->smartContract = smartContract;
    this->conditions = conditions;
    this->aggreeingParties = aggreeingParties;
    this->numParties = numParties;
}
void SmartContractState::add(string condition)
{
    throw "Cannot add condition to this state";
}
void SmartContractState::remove(string condition)
{
    throw "Cannot remove condition from this state";
}
void SmartContractState::accept(string party)
{
    throw "Cannot accept in this state";
}
void SmartContractState::reject()
{
    throw "Cannot reject in this state";
}
void SmartContractState::complete()
{
    throw "Cannot complete in this state";
}
void SmartContractState::complete(string party)
{
    throw "Cannot complete in this state";
} 
SmartContractState::~SmartContractState()
{
}