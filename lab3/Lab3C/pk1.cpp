#include "pk1.h"
#include <cmath>

PK1::PK1(int x) : X(x){
    this->denominator = 7;
    this->modulo = 3;
}

int PK1::get_count(){
    return (int)floor((this->value - this->modulo) / (double)this->denominator) + 1;
}

int* PK1::numbers(){
    int* result = new int[get_count()];
    int counter = 0;
    if(this->value >= this->modulo)
        for(int i = this->modulo; i <= this->value; i += this->denominator){
            result[counter] = i;
            counter++;
        }
    else
        return nullptr;
    return result;
}
