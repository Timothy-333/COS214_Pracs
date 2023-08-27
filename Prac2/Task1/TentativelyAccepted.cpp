#include "TentativelyAccepted.h"
TentativelyAccepted::TentativelyAccepted(SmartContract* smartContract) : SmartContractState(smartContract)
{
}
void TentativelyAccepted::add()
{
    cout << "TentativelyAccepted: add" << endl;
}
void TentativelyAccepted::remove()
{
    cout << "TentativelyAccepted: remove" << endl;
}
void TentativelyAccepted::accept()
{
    cout << "TentativelyAccepted: accept" << endl;
}
void TentativelyAccepted::reject()
{
    cout << "TentativelyAccepted: reject" << endl;
}
void TentativelyAccepted::complete()
{
    cout << "TentativelyAccepted: complete" << endl;
}
TentativelyAccepted::~TentativelyAccepted()
{
}