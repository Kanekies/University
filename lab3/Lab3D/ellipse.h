#ifndef ELLIPSE_H
#define ELLIPSE_H
#define _USE_MATH_DEFINES
#include <figure.h>
#include <cmath>

class Ellipse : public FIGURE
{
public:
    Ellipse();
    Ellipse(int, int);
    virtual void show();
};

#endif // ELLIPSE_H
