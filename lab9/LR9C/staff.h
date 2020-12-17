#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <map>
#include "person.h"
#include <ctime>

class STAFF {
private:
    std::map<PERSON, int> map1;
    std::map<PERSON, int, PERSON> map2;
public:
    void Insert(std::string name, int age) {
        map1.insert(std::make_pair(*(new PERSON(name)), rand() % 11 - 5));
        map2.insert(std::make_pair(*(new PERSON(age)), rand() % 11 - 5));
    }

    void Insert(PERSON& p) {
        srand(time(NULL));
        map1.insert(std::make_pair(p, rand() % 10));
    }

    void Show() {
        for(auto i = map1.begin(); i != map1.end(); i++)
            std::cout << "Name: " << ((PERSON)i->first).get_name() << " Age: " << ((PERSON)i->first).get_age() << std::endl;
    }

    void Show(std::string prop) {
        if(prop =="name")
            for(auto i = map1.begin(); i != map1.end(); i++)
                std::cout << "Name: " << ((PERSON)i->first).get_name() << std::endl;
        else
            for(auto i = map2.begin(); i != map2.end(); i++)
                std::cout << "Age: " << ((PERSON)i->first).get_age() << std::endl;
    }

    void Delete(std::string name) {
        for(auto i = map1.begin(); i != map1.end();)
            if(((PERSON)i->first).get_name() == name)
                map1.erase(i);
            else
                ++i;
    }

    void Delete(int age) {
        for(auto i = map2.begin(); i != map2.end();)
            if(((PERSON)i->first).get_age() == age)
                map2.erase(i);
            else
                ++i;
    }

    PERSON Find(std::string name){
        for(auto i = map1.begin(); i != map1.end(); i++)
            if(((PERSON)i->first).get_name() == name)
                return *(new PERSON(((PERSON)i->first).get_name()));
        return *(new PERSON(""));
    }

    PERSON Find(int age){
        for(auto i = map2.begin(); i != map2.end(); i++)
            if(((PERSON)i->first).get_age() == age)
                return *(new PERSON(((PERSON)i->first).get_age()));
        return *(new PERSON(0));
    }
};

#endif // STAFF_H
