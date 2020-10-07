#ifndef H1_H
#define H1_H
class Time{
    public:
        int GetHour();
        int GetMinutes();
        int GetSeconds();
        void SetHour(int a);
        void SetMinutes(int a);
        void SetSeconds(int a);
        void PrintTime();
        double HourMinDegree();

    private:
        int hours = 0;
        int minutes = 0;
        int seconds = 0;
};
void TimeDelta(Time a, Time b);
void TimeCompare(Time a, Time b);
#endif // H1_H
