#include <iostream>
#include "vvod.h"
#include <map>
using namespace std;

istream& operator>>(istream& in, vvod& _vvod) {
    string type;
    cout << "Enter type of comparing: ";
    cin >> type; //"number", "login", "password"
    map<string, int> results;
    int count;
    cout << "Enter number of elements: ";
    cin >> count;
    for(int i = 0; i < count; i++) {
        string temp;
        cout << "Enter your " << i + 1 << " element: ";
        cin >> temp;
        results[temp] = _vvod.CompareTo(type, temp);
    }
    for(auto i = results.begin(); i != results.end(); i++)
        cout <<"\"" << (string)i->first << "\" bad symbols: " << (int)i->second << endl;
    return in;
}

int main()
{
    vvod in;
    cin >> in;
    return 0;
}
