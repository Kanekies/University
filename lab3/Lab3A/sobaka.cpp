#include "sobaka.h"

SOBAKA::SOBAKA(){
    this->weight = 0;
    this->age = 0;
    cout << "Constructor SOBAKA without parameters!" << endl;
}

SOBAKA::SOBAKA(int weight, int age){
    this->weight = weight;
    this->age = age;
    cout << "Constructor SOBAKA with parameters!" << endl;
}

SOBAKA::~SOBAKA(){
    cout << "Destructor SOBAKA!" << endl;
}

void SOBAKA::golos(){
    weight >= 10 ? cout << "GAV!" : cout << "gav!";
}

void SOBAKA::show(){
    cout << "Age: " << this->age << " Weight: " << this->weight;
}

int SOBAKA::get_age(){
    return this->age;
}

int SOBAKA::get_weight(){
    return this->weight;
}
