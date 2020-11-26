#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona
{
protected:
    Persona();
    Persona(string, int);
public:
    virtual void print() = 0;
    virtual int who() = 0;
    virtual int ask() = 0;
    string name;
    int age;
};

#endif // PERSONA_H
