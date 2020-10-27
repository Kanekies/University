#ifndef PROF_FOOTBALLER_H
#define PROF_FOOTBALLER_H
#include "footballer.h"
#include"employee.h"
#include <string>
#include<iostream>
using namespace std;
class Prof_Footballer : private Footballer, public Employee {
public:
    Prof_Footballer(string last_name, string name, string second_name,
        int size_of_foot, int salary, int age_of_experience, string position, int number_of_trophies);
    void show();
private:
    string position;
    int number_of_trophies;
};

#endif // PROF_FOOTBALLER_H
