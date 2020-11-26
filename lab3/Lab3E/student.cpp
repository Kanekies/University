#include "student.h"

Student::Student() : Persona(){
    for(int i = 0; i < 5; i++)
        this->marks[i] = 0;
}

Student::Student(string name, int age, int marks[5]) : Persona(name, age){
    for(int i = 0; i < 5; i++)
        this->marks[i] = marks[i];
}

int Student::who(){
    return 3;
}

int Student::ask(){
    int result = 0;
    for(int i = 0; i < 5; i++)
        if(this->marks[i] == 2)
            result++;
    return result;
}

void Student::print(){
    cout << "Name: " << this->name << " Age: " << this->age << " Marks: ";
    for(int i = 0; i < 5; i++)
        cout << this->marks[i] << " ";
    cout << endl;
}
