#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include<iostream>
using namespace std;
class Human
{
public:
    Human(string last_name, string name, string second_name);
    virtual void show();
private:
    string name;
    string last_name;
    string second_name;
};




#endif // HUMAN_H
