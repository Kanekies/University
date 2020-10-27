#ifndef PROF_BASKETBALLER_H
#define PROF_BASKETBALLER_H
#include "basketballer.h"
#include"employee.h"
#include <string>
#include<iostream>
using namespace std;
class Prof_Basketballer : private Basketballer, public Employee {
public:
    Prof_Basketballer(string last_name, string name, string second_name,
        int size_of_foot, int salary, int age_of_experience, string position, string team);
    void show();
private:
    string position;
    string team;
};

#endif // PROF_BASKETBALLER_H
