#ifndef STUDENT_H
#define STUDENT_H
#include "persona.h"

class Student : public Persona
{
public:
    Student();
    Student(string, int, int[]);
    virtual int who();
    virtual int ask();
    virtual void print();
private:
    int marks[5];
};

#endif // STUDENT_H
