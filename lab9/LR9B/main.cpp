#include <iostream>
#include <map>
#include "name.h"
#include "number.h"
using namespace std;

int main()
{
    map<NAME, NUMBER> phonebook; //создание ассоциативного массива

    //заполнение его
    phonebook[*(new NAME("Gleb"))] = *(new NUMBER("+380660171862"));
    phonebook[*(new NAME("Ilya"))] = *(new NUMBER("+380683424672"));
    phonebook[*(new NAME("Dima"))] = *(new NUMBER("+380933098891"));
    phonebook[*(new NAME("Pasha"))] = *(new NUMBER("+380999567908"));
    phonebook[*(new NAME("Danil"))] = *(new NUMBER("+380972382964"));

    //вывод
    for(map<NAME, NUMBER>::iterator i = phonebook.begin(); i != phonebook.end(); i++)
        cout << ((NAME)i->first).get() << ": " << ((NUMBER)i->second).get() << endl;

    //поиск по ключу
    map<NAME, NUMBER>::iterator it = phonebook.find(*(new NAME("Gleb")));
    if(it != phonebook.end())
        cout << "Gleb's number: " << ((NUMBER)it->second).get() << endl;
    else
        cout << "NOT FOUND!" << endl;

    it = phonebook.find(*(new NAME("Gleb11111")));
    if(it != phonebook.end())
        cout << "Gleb's number: " << ((NUMBER)it->second).get() << endl;
    else
        cout << "NOT FOUND!" << endl;

    //вывод по первой букве
    char key = 'D';
    for(map<NAME, NUMBER>::iterator i = phonebook.begin(); i != phonebook.end(); i++)
        if(((NAME)i->first).get()[0] == key)
            cout << ((NAME)i->first).get() << ": " << ((NUMBER)i->second).get() << endl;

        //удаление по первой букве
    for(auto i = phonebook.begin(); i != phonebook.end();)
        if(((NAME)i->first).get()[0] == key)
            i = phonebook.erase(i);
        else
            ++i;

    cout << "New map:" << endl;
    for(map<NAME, NUMBER>::iterator i = phonebook.begin(); i != phonebook.end(); i++)
        cout << ((NAME)i->first).get() << ": " << ((NUMBER)i->second).get() << endl;
    return 0;
}
