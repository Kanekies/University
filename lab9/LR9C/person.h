#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class PERSON {
private:
    std::string name;
    int age;
public:
    PERSON() {
        name = "";
        age = 0;
    }

    PERSON(std::string name) : name(name) { }

    PERSON(int age) {
        this->age = age;
    }

    std::string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    bool operator<(const PERSON& p1) const {
        return p1.name > this->name;
    }
        //сортировка по возрасту
    inline bool operator()(const PERSON& p1, const PERSON& p2) const { return p1.age < p2.age; }
};

#endif // PERSON_H
