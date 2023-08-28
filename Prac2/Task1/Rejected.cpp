#include "Rejected.h"
Rejected::Rejected(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties) : SmartContractState(smartContract, conditions, aggreeingParties, numParties)
{
    this->stateName = "Rejected";
}
Rejected::~Rejected()
{
}