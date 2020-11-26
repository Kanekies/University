#include "persona.h"

Persona::Persona(){
    this->name = "";
    this->age = 0;
}

Persona::Persona(string name, int age){
    this->name = name;
    this->age = age;
}
