#include "basketballer.h"
#include <iostream>
#include <string>
    Basketballer::Basketballer(string last_name, string name, string second_name, int height) : Human(last_name, name, second_name)
    {
        this->height = height;
    }
    void Basketballer::Basketballer::show()
    {
        Human::show();
        cout << " " << this->height;
    }
