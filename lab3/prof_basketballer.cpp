#include "prof_basketballer.h"
#include <iostream>
#include <string>
    Prof_Basketballer::Prof_Basketballer(string last_name, string name, string second_name,
        int height, int salary, int age_of_experience, string position, string team)
        : Basketballer(last_name, name, second_name, height), Employee(last_name, name, second_name, salary, age_of_experience)
    {
        this->position = position;
        this->team = team;
    }
    void Prof_Basketballer::show()
    {
        Employee::show();
        cout << " " << position << " " << team;
    }

