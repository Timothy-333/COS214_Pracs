#include "odataconsumer.h"
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

string odataConsumer::parseData(string s)
{
      string str = s;
    size_t openRemoved = 0;
    size_t closeRemoved = 0;
    string open = "<section>";
    string close = "</section>";
    size_t pos = str.find(open);
    while (pos != std::string::npos) {
        str.erase(pos, open.length());
        pos = str.find(open, pos);
        openRemoved++;
    }

    pos = str.find(close);
    while (pos != std::string::npos) {
        str.erase(pos, close.length());
        pos = str.find(close, pos);
        closeRemoved++;
    }

    if (openRemoved == closeRemoved)
    {
        return str;
    }
    else
    {
        return "Invalid XML";
    }
}