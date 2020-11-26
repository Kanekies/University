#ifndef VUZ_H
#define VUZ_H
#include "prepod.h"
#include "student.h"
#include "zav_kaf.h"
#include <vector>
#include <algorithm>

class VUZ
{
public:
    VUZ();
    VUZ(vector<Persona*>);
    void show();
    void add(Persona* p);
private:
    vector<Persona*> Shtat;
};

#endif // VUZ_H
