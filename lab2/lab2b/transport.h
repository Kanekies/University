#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<string>
using namespace std;
class Transport {
public:
    Transport(string route_id, double route_distance, int route_time);

    friend bool operator==(const Transport&, const Transport&);
    friend const Transport operator+(const Transport&, const Transport&);
    int operator[] (const char* c);

    void operator() ();

    string get_info();
private:
    string route_id;
    double route_distance;
    int route_time;
};

#endif // TRANSPORT_H
