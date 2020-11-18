#include "employee.h"
#include <iostream>
#include <string>
    Employee::Employee(string last_name, string name, string second_name, int salary, int age_experience) : Human(last_name, name, second_name)
    {
        this->salary = salary;
        this->age_experience = age_experience;
    }
    void Employee::show()
    {
        Human::show();
        cout << " " << this->salary<< " " << this->age_experience;
    }
