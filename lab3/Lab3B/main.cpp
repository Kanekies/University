#include <iostream>
#include "library.h"
using namespace std;

bool Exist(LIBRARY* lib, int n, string name){
    for(int i = 0; i < n; i++){
        if(lib[i].isExist(name))
            return true;
    }
    return false;
}

int main()
{
    LIBRARY* library = new LIBRARY[3]{*(new LIBRARY("Ruslan i Ludmila", "Pushkin", 100, 0, true)),
    *(new LIBRARY("Evgeniy Onegin", "Pushkin", 140, 0, false)), *(new LIBRARY("Wingman", "Jack London", 100, 0, true))};

    string name1 = "Evgeniy Onegin";
    string name2 = "Evgeniy Onegin11";
    if(Exist(library, 3, name1))
        cout << "Exists!" << endl;
    else
        cout << "Don't exist!" << endl;
    if(Exist(library, 3, name2))
        cout << "Exists!" << endl;
    else
        cout << "Don't exist!" << endl;
    cout << endl;

    for(int i = 0; i < 3; i++){
        if(library[i].isAvailable())
            cout << "Available!" << endl;
        else
            cout << "Not available!" << endl;
    }
    cout << endl;

    library[2].takeBook();
    for(int i = 0; i < 3; i++){
        if(library[i].isAvailable())
            cout << "Available!" << endl;
        else
            cout << "Not available!" << endl;
    }
    return 0;
}
