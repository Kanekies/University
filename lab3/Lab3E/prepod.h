#ifndef PREPOD_H
#define PREPOD_H
#include "persona.h"

class Prepod : public Persona
{
public:
    Prepod();
    Prepod(string, int, string, int);
    virtual int who();
    virtual int ask();
    virtual void print();
private:
    string discipline;
    int degree;
};

#endif // PREPOD_H
