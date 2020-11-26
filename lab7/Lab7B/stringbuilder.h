#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H
#include <string>
#include <iostream>
using namespace std;

class StringBuilder
{
public:
    StringBuilder();
    StringBuilder(string);
    void show();
    string _show();
    friend ostream& operator<<(ostream&, StringBuilder&);
private:
    string text;
};

#endif // STRINGBUILDER_H
