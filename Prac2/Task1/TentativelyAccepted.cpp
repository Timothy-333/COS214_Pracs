#include "TentativelyAccepted.h"
TentativelyAccepted::TentativelyAccepted(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties) : SmartContractState( smartContract, conditions, aggreeingParties, numParties)
{
    this->stateName = "TentativelyAccepted";
}
void TentativelyAccepted::add(string condition)
{
    aggreeingParties->clear();
    smartContract->setState(smartContract->negotiationState);
    smartContract->add(condition);
}
void TentativelyAccepted::remove(string condition)
{
    aggreeingParties->clear();
    smartContract->setState(smartContract->negotiationState);
    smartContract->remove(condition);
}
void TentativelyAccepted::accept(string party)
{
    aggreeingParties->push_back(party);
    if (aggreeingParties->size() >= numParties)
    {
        smartContract->setState(smartContract->acceptedState);
    }
}
void TentativelyAccepted::reject()
{
    smartContract->setState(smartContract->rejectedState);
}
void TentativelyAccepted::complete()
{
    throw "Only accepted contracts can complete";
}
TentativelyAccepted::~TentativelyAccepted()
{
}