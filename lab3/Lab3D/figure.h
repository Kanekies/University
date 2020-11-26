#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;

class FIGURE
{
public:
    FIGURE();
    FIGURE(int, int);
    virtual void show() = 0;
    void set(int, int);

    int a, b;
};

#endif // FIGURE_H
