#include"transport.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Transport tramvay("12", 27.55, 75);
    Transport _tramvay("12", 27.55, 75);
    Transport trolleybus("17", 13.6, 57);

    tramvay == trolleybus ? cout << "1" << endl : cout << "0" << endl;
    tramvay == _tramvay ? cout << "1" << endl : cout << "0" << endl;
    tramvay = tramvay + trolleybus;
    cout << tramvay.get_info() << endl;
    tramvay = tramvay + _tramvay;
    cout << tramvay.get_info() << endl;

    cout << tramvay[tramvay.get_info().c_str()] << endl;

    tramvay();
    cout << tramvay.get_info() << endl;
    return 0;
}
