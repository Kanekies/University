#include <iostream>
#include "spaniel.h"
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    SOBAKA sobaka(10, 3);
    sobaka.golos();
    cout << endl;
    SPANIEL spaniel(sobaka, "red");
    spaniel.golos();
    cout << endl;
    return 0;
}
