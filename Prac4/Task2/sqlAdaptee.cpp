#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "sqlAdaptee.h"
sqlAdaptee::sqlAdaptee()
{
}
string sqlAdaptee::convertStringToPreCondition(string _string) 
{
    string select = "SELECT ";
    string from = " FROM ";
    
    // Find the position of "SELECT " and " FROM "
    size_t selectPos = _string.find(select);
    size_t fromPos = _string.find(from);
    
    // Extract the parts of the query
    string columns = _string.substr(selectPos + select.length(), fromPos - selectPos - select.length());
    string table = _string.substr(fromPos + from.length());
    
    // Construct the new query
    string newQuery = "FROM " + table + " SELECT " + columns;
    
    return newQuery;
}
