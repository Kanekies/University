#ifndef ZAV_KAF_H
#define ZAV_KAF_H
#include "persona.h"

class Zav_kaf : public Persona
{
public:
    Zav_kaf();
    Zav_kaf(string, int, string);
    virtual int who();
    virtual int ask();
    virtual void print();
private:
    string state;
};

#endif // ZAV_KAF_H
