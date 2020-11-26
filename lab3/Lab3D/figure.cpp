#include "figure.h"

FIGURE::FIGURE(){
    this->a = 0;
    this->b = 0;
}

FIGURE::FIGURE(int a, int b){
    this->a = a;
    this->b = b;
}

void FIGURE::set(int a, int b){
    this->a = a;
    this->b = b;
}
