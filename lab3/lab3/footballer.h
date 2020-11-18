#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include "human.h"
#include <string>
#include<iostream>
class Footballer : virtual public Human {
public:
    Footballer(string last_name, string name, string second_name, int size_of_foot);
    virtual void show();
 private:
    int size_of_foot;
};

#endif // FOOTBALLER_H
