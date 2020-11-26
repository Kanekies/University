#include "vuz.h"

VUZ::VUZ(){}

VUZ::VUZ(vector<Persona*> persons){
    this->Shtat = persons;
}

void VUZ::show(){
    for_each(this->Shtat.begin(), this->Shtat.end(), [](Persona* p){
        if(typeid(*p) == typeid(Prepod)){
            if(p->age < 50)
                p->print();
        }
        else if(typeid(*p) == typeid(Student)){
            if(p->ask() >= 1)
                p->print();
        }
    });
}

void VUZ::add(Persona* p){
    this->Shtat.push_back(*&p);
}
