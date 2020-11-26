#include "prepod.h"

Prepod::Prepod() : Persona(){
    this->discipline = "none";
    this->degree = 0;
}

Prepod::Prepod(string name, int age, string discipline, int degree) : Persona(name, age){
    this->discipline = discipline;
    this->degree = degree;
}

int Prepod::who(){
    return 1;
}

int Prepod::ask(){
    return this->degree;
}

void Prepod::print(){
    cout << "Name: " << this->name << " Age: " << this->age
    << " Discipline: " << this->discipline << " Degree: " << this->degree << endl;
}
