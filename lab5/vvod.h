#ifndef VVOD_H
#define VVOD_H
#include <string>
#include <iostream>
using namespace std;

class vvod
{
public:
    vvod();
    int CompareTo(string type, string value);
    friend istream& operator>>(istream& in, vvod& _vvod);
};

#endif // VVOD_H
