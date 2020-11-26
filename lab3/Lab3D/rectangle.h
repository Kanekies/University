#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "figure.h"

class Rectangle : public FIGURE
{
public:
    Rectangle();
    Rectangle(int, int);
    virtual void show();
};

#endif // RECTANGLE_H
