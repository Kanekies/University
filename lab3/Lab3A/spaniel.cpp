#include "spaniel.h"

SPANIEL::SPANIEL(){
    this->color = "None";
    cout << "Constructor SPANIEL without parameters" << endl;
}

SPANIEL::SPANIEL(SOBAKA& dog, string color){
    this->age = dog.get_age();
    this->weight = dog.get_weight();
    this->color = color;
    cout << "Constructor SPANIEL with parameters" << endl;
}

SPANIEL::~SPANIEL(){
    cout << "Destructor SPANIEL!" << endl;
}

void SPANIEL::show(){
    SOBAKA::show();
    cout << " Color: " << this->color << endl;
}
