#include "x.h"

X::X(){
    this->value = 0;
}

X::X(int x){
    this->value = x;
}

void X::show(){
    cout << this->value << endl;
}
