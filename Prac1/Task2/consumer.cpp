#include "consumer.h"
#include <cstring>
#include <iostream>

using namespace std;

string consumer::printData(string s) {
    string parsedData = parseData(s);
    return parsedData;
}