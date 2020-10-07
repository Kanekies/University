#include"h1.h"
#include<iostream>
#include <iomanip>
using namespace std;

        int Time::GetHour(){
            return hours;
        }
        int Time::GetMinutes(){
            return minutes;
        }
        int Time::GetSeconds(){
            return seconds;
        }
        void Time::SetHour(int a){
            int time = (hours+a)*3600 + minutes * 60 + seconds;
            if(time<0|| time > 86399)
                cout<<"Error";
            else{
                seconds = time % 60;
                minutes = time / 60 % 60;
                hours = time / 3600 % 24;
            }
        }
        void Time::SetMinutes(int a){
            int time = hours * 3600 + (minutes+a) * 60 + seconds;
            if(time<0|| time > 86399)
                cout<<"Error";
            else{
                seconds = time % 60;
                minutes = time / 60 % 60;
                hours = time / 3600 % 24;
            }
        }
        void Time::SetSeconds(int a){
            int time = hours * 3600 + minutes * 60 + seconds + a;
            if(time<0 || time > 86399)
                cout<<"Error";
            else{
                seconds = time % 60;
                minutes = time / 60 % 60;
                hours = time / 3600 % 24;
            }
        }
        void Time::PrintTime(){
            cout<<setw(2)<<setfill('0')<<hours<<':';
            cout<<setw(2)<<setfill('0')<<minutes<<':';
            cout<<setw(2)<<setfill('0')<<seconds<<endl;
        }
        double Time::HourMinDegree(){
            double hourAngle = hours % 12 * 30 + minutes * 0.5 + seconds * (1.0/120);
            double minAngle = minutes * 6 + seconds * 0.1;
            return abs(hourAngle-minAngle);
        }

void TimeDelta(Time a, Time b){
    int time1 = a.GetHour()*3600 + a.GetMinutes()*60 + a.GetSeconds();
    int time2 = b.GetHour()*3600 + b.GetMinutes()*60 + b.GetSeconds();
    int timedelta = abs(time1-time2);
    cout<<setw(2)<<setfill('0')<<timedelta/3600<<':';
    cout<<setw(2)<<setfill('0')<<timedelta%3600/60<<':';
    cout<<setw(2)<<setfill('0')<<timedelta%60<<endl;
}

void TimeCompare(Time a, Time b){
    int time1 = a.GetHour()*3600 + a.GetMinutes()*60 + a.GetSeconds();
    int time2 = b.GetHour()*3600 + b.GetMinutes()*60 + b.GetSeconds();
    cout<< ((time1>time2) ? "First" : "Second")<<endl;
}
