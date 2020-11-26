#include "comp.h"

COMP::COMP(){
    this->one = 0;
    this->second = 0;
}

COMP::COMP(double one, double second){
    this->one = one;
    this->second = second;
}

double COMP::One(){
    return this->one;
}

void COMP::One(double one){
    this->one = one;
}

double COMP::Second(){
    return this->second;
}

void COMP::Second(double second){
    this->second = second;
}
