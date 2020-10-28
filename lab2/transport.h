#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<string>
#include<iostream>
using namespace std;
class Transport {
public:
    Transport();
    Transport(string name, string route_id, double route_distance, int route_time);
     bool operator==(const Transport& t1);
    const Transport& operator= (const Transport& t);
    const Transport operator+(const Transport& t1);
    friend ostream& operator<<(ostream& out, const Transport& t);
    friend istream& operator>>(istream& in, Transport& t);
    double get_route_distance();
    int get_route_time();
    string get_name();
    void set_name( string name);
    string get_route_id();
    void set_route_distance(double route_distance);
    void set_route_time(int route_time);
    void set_route_id(string route_id);
private:
    string route_id;
    double route_distance;
    int route_time;
    string name;
};

#endif // TRANSPORT_H
