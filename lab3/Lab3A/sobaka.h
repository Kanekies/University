#ifndef SOBAKA_H
#define SOBAKA_H
#include <iostream>
using namespace std;

class SOBAKA
{
public:
    SOBAKA();
    SOBAKA(int, int);
    ~SOBAKA();
    void golos();
    virtual void show();
    int get_weight();
    int get_age();
protected:
    int weight;
    int age;
};

#endif // SOBAKA_H
