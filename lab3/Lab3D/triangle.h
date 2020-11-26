#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"

class Triangle : public FIGURE
{
public:
    Triangle();
    Triangle(int, int);
    virtual void show();
};

#endif // TRIANGLE_H
