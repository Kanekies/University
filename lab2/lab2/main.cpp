#include "transport.h"
#include <iostream>

using namespace std;

int main()
{
    Transport t1("IBM", "12", 27.55, 75);
    Transport t2("Microsoft", "17", 13.6, 57);
    Transport t3;
    cin>>t3;
    cout<<t3<<endl;
    Transport t4=t1;
    Transport t5=t1;
    cout<<t4<<endl;
    t4=t4+t1;
    cout<<t4<<endl;
    if(t4==t1)
        cout<<"Ravni";
    else
        cout<<"Ne ravni";
    cout<<endl;
    if(t5==t1)
        cout<<"Ravni";
    else
        cout<<"Ne ravni";
    return 0;
}
