#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "human.h"
#include <string>
#include<iostream>
using namespace std;

class Employee : private Human {
public:
    Employee(string last_name, string name, string second_name, int salary, int age_experience);
    void show();
private:
    int salary;
    int age_experience;
};

#endif // EMPLOYEE_H
