#include <iostream>
#include "vectortemplate.h"
using namespace std;

int main()
{
    VECTOR<int> v1(1, 4);
    VECTOR<int> v2(2, 3);
    v1 == v2 ? cout << "Ravni\n" : v1 > v2 ? cout << "Bolshe\n" : cout << "Menshe\n";
    return 0;
}
