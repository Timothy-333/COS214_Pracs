#include <iostream>
#include <string>
#include "SmartContractState.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Rejected.h"
#include "Completed.h"
#include "SmartContract.h"
using namespace std;

int main()
{
    SmartContract* smartContract = new SmartContract();
    SmartContractState* negotiation = new Negotiation(smartContract);
    SmartContractState* tentativelyAccepted = new TentativelyAccepted(smartContract);
    SmartContractState* accepted = new Accepted(smartContract);
    SmartContractState* rejected = new Rejected(smartContract);
    SmartContractState* completed = new Completed(smartContract);
    return 0;
}