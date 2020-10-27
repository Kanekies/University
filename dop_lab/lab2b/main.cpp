#include"transport.h"
#include <iostream>
#include <string>
using namespace std;



bool operator==(const Transport& t1, const Transport& t2)
{
    if (t1.route_id == t2.route_id && t1.route_distance == t2.route_distance && t1.route_time == t2.route_time) return true;
    return false;
}

const Transport operator+(const Transport& t1, const Transport& t2)
{
    if (t2.route_id != t1.route_id) return t1;
    return Transport(t1.route_id, t1.route_distance + t2.route_distance, t1.route_time + t2.route_time);
}

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
