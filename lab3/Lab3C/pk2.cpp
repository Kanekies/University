#include "pk2.h"

PK2::PK2(int x) : PK1(x){
    this->denominator = 5;
    this->modulo = 2;
}

void PK2::show(){
    PK1 temp_pk1(this->value);
    int* temp_res1 = temp_pk1.numbers();
    int* temp_res2 = this->numbers();
    cout << "First if: ";
    for(int i = 0; i < temp_pk1.get_count(); i++)
        cout << temp_res1[i] << " ";
    cout << endl;
    cout << "Second if: ";
    for(int i = 0; i < this->get_count(); i++)
        cout << temp_res2[i] << " ";
    cout << endl;
}
