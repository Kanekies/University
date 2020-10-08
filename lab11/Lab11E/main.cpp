#include <iostream>
#include <cmath>
#include "h1.h"
using namespace std;

int main()
{
    Time time1, time2;
    time1.SetHour(25); time1.SetMinutes(10); time1.SetSeconds(42);
    time2.SetHour(12); time2.SetMinutes(30); time2.SetSeconds(5);
    time1.PrintTime();
    time2.PrintTime();
    TimeDelta(time1, time2);
    TimeCompare(time1, time2);
    cout<<time1.HourMinDegree()<<endl;
    cout<<time2.HourMinDegree()<<endl;
    return 0;
}
