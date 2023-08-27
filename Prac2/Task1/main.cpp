#include <iostream>
#include <string>
#include "SmartContractState.h"
#include "Negotiation.h"
#include "TentativelyAccepted.h"
#include "Accepted.h"
#include "Rejected.h"
#include "Completed.h"
using namespace std;

int main()
{
    SmartContractState* negotiation = new Negotiation();
    SmartContractState* tentativelyAccepted = new TentativelyAccepted();
    SmartContractState* accepted = new Accepted();
    SmartContractState* rejected = new Rejected();
    SmartContractState* completed = new Completed();
    return 0;
}