#include <iostream>
#include <string>
#include "target.h"
#include "adapter.h"
#include "sqlAdaptee.h"

using namespace std;

int main() 
{
    sqlAdaptee* sql_adaptee = new sqlAdaptee();
    target* target = new adapter(sql_adaptee);
    string sqlInput = "SELECT * FROM table";
    cout << "Original string: " << sqlInput << endl << "Changed to: " << target->convertString(sqlInput) << endl;
    sqlInput = "SELECT * FROM Homes";
    cout << "Original string: " << sqlInput << endl << "Changed to: " << target->convertString(sqlInput) << endl;
    return 0;
}
