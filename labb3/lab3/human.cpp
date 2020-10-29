#include "human.h"
#include <iostream>
#include <string>
        Human::Human(string last_name, string name, string second_name)
        {
            this->last_name = last_name;
            this->name = name;
            this->second_name = second_name;
        }

        void Human::show()
        {
            cout << this->last_name << " " << this->name << " " << this->second_name;
        }

