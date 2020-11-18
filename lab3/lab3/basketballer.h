#ifndef BASKETBALLER_H
#define BASKETBALLER_H
#include"human.h"
#include <string>
#include<iostream>
using namespace std;
class Basketballer : virtual public Human {
public:
    Basketballer(string last_name, string name, string second_name, int height);
    virtual void show();
private:
    int height;
};

#endif // BASKETBALLER_H
