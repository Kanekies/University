#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "transport.h"
#ifndef TRANSPORTS_H
#define TRANSPORTS_H

class Transports
{
public:
    Transports();
    Transports(vector<Transport>);
    Transport readFromFile(string);
    void readAllFromConsole();
    void readAllFromFile(string);
    void writeToFile(string, Transport);
    void writeAllToConsole();
    void writeAllToFile(string);
private:
    vector<Transport> transports;
};

#endif // TRANSPORTS_H
