#include "prof_footballer.h"
#include <iostream>
#include <string>
    Prof_Footballer::Prof_Footballer(string last_name, string name, string second_name,
        int size_of_foot, int salary, int age_of_experience, string position, int number_of_trophies)
        : Footballer(last_name, name, second_name, size_of_foot), Employee(last_name, name, second_name, salary, age_of_experience)
    {
        this->position = position;
        this->number_of_trophies = number_of_trophies;
    }

    void Prof_Footballer::show()
    {
        Employee::show();
        cout << " " << position << " " << number_of_trophies;
    }
