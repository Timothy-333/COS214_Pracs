#include "Completed.h"
Completed::Completed(SmartContract* smartContract, vector<string>* conditions, vector<string>* aggreeingParties, int numParties) : SmartContractState(smartContract, conditions, aggreeingParties, numParties)
{
    this->stateName = "Completed";
}
Completed::~Completed()
{
}

