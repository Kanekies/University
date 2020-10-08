#include <iostream>
#include <ctime>
#include"h1.h"
using namespace std;

int main()
{
    srand (time(NULL));
    Sets set_1;
    Sets set_2(4, 100, 5);
    Sets set_3(set_1.GetSet(), 5);
    cout<<set_1.MaxElem()<<endl;
    cout<<set_2.MaxElem()<<endl;
    cout<<set_3.MaxElem()<<endl;
    set_1.Print();
    set_2.Print();
    set_3.Print();
    set<int> result;
        cout<<endl;
    result = union_set(set_1,set_2);
    for(set<int> ::iterator i = result.begin(); i != result.end(); i++)
    {
        cout<<*i<<' ';
    }
        cout<<endl;
    result = intersection_set(set_1,set_2);
    for(set<int> ::iterator i = result.begin(); i != result.end(); i++)
    {
        cout<<*i<<' ';
    }
    cout<<endl;
    result = difference_set(set_1,set_2);
    for(set<int> ::iterator i = result.begin(); i != result.end(); i++)
    {
        cout<<*i<<' ';
    }
        cout<<endl;
    result = symmetric_difference_set(set_1,set_2);
    for(set<int> ::iterator i = result.begin(); i != result.end(); i++)
    {
        cout<<*i<<' ';
    }
    return 0;
}
