#ifndef PK1_H
#define PK1_H
#include "x.h"

class PK1 : public X
{
public:
    PK1(int);
    int* numbers();
    int get_count();

    int modulo;
    int denominator;
};

#endif // PK1_H
