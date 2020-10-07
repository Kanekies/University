#include<h1.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    Massive mas;
    mas.GenerateMas(5, 6);
    mas.PrintMas();

    pair<int,int> min_ = mas.FindMin();
    cout<<min_.first<<' '<<min_.second<<endl;

    cout<<mas.GetElem(1, 1)<<endl;
    mas.SetElem(1, 1, 10);
    cout<<mas.GetElem(1, 1)<<endl;
    mas.GetSubmass(2, 3, 3, 1);
    return 0;
}
