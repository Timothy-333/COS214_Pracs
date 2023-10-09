#include "adapter.h"
adapter::adapter(sqlAdaptee* _sqlAdaptee) : target()
{
    this->sql_adaptee = _sqlAdaptee;
}
string adapter::convertString(string _string)
{
    return sql_adaptee->convertStringToPreCondition(_string);
}