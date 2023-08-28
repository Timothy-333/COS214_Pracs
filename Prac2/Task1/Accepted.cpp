#include "accepted.h"
Accepted::Accepted(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties) : SmartContractState(smartContract, conditions, aggreeingParties, numParties)
{
    this->stateName = "Accepted";
}
void Accepted::add(string condition)
{
    throw "Contract is already accepted.";
}
void Accepted::remove(string condition)
{
    throw "Contract is already accepted.";
}
void Accepted::accept(string party)
{
    throw "Contract is already accepted.";
}
void Accepted::reject()
{
    throw "Contract is already accepted.";
}
void Accepted::complete(string party)
{
    auto iter = find(aggreeingParties->begin(), aggreeingParties->end(), party);
    if (iter != aggreeingParties->end()) {
        *iter = *iter + " (completed)";
    }
    else {
        throw "Party not found or has already completed";
    }
    if (all_of(aggreeingParties->begin(), aggreeingParties->end(), [](string s) {return s.find(" (completed)") != string::npos; })) {
        smartContract->setState(smartContract->completedState);
    }
}
Accepted::~Accepted()
{
}
