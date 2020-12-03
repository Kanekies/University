#include <iostream>
#include "shablon.h"
using namespace std;

int main() {
    Shablon<int> iSh1(3);
    Shablon<int> iSh2(4);
    Shablon<double> dSh1(3.33);
    Shablon<double> dSh2(3.33);
    /*try {
        (iSh1 + iSh2).show();
        (dSh1 + dSh2).show();
    } catch (int ex) {
        cout<<"Error with code: " <<ex<<endl;
    }*/
    (iSh1 + iSh2).show();
    (dSh1 + dSh2).show();
    return 0;
}
