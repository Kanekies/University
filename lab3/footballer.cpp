#include "footballer.h"

    Footballer::Footballer(string last_name, string name, string second_name, int size_of_foot) : Human(last_name, name, second_name)
    {
        this->size_of_foot = size_of_foot;
    }

    void Footballer::show()
    {
        Human::show();
        cout << " " << this->size_of_foot;
    }
