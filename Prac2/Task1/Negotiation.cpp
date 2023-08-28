#include "Negotiation.h"
Negotiation::Negotiation(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties) : SmartContractState(smartContract, conditions, aggreeingParties, numParties)
{
    this->stateName = "Negotiation";
}
Negotiation::~Negotiation()
{
}
void Negotiation::add(string condition)
{
    conditions->push_back(condition);
}
void Negotiation::remove(string condition)
{
    auto iter = find(conditions->begin(), conditions->end(), condition);
    if (iter != conditions->end()) {
        conditions->erase(iter);
    }
    else {
        throw "Condition not found";
    }
}
void Negotiation::accept(string party)
{
    aggreeingParties->push_back(party);
    smartContract->setState(smartContract->tentativelyAcceptedState);
}
void Negotiation::reject()
{
    smartContract->setState(smartContract->rejectedState);
}
void Negotiation::complete()
{
        throw "Only accepted contracts can complete";
}