#include "zav_kaf.h"

Zav_kaf::Zav_kaf() : Persona(){
    this->state = "none";
}

Zav_kaf::Zav_kaf(string name, int age, string state) : Persona(name, age){
    this->state = state;
}

int Zav_kaf::who(){
    return 2;
}

int Zav_kaf::ask(){
    return this->age;
}

void Zav_kaf::print(){
    cout << "Name: " << this->name << " Age: " << this->age << " State: " << this->state << endl;
}
