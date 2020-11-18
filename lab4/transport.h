#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

using namespace std;

class Transport
{
public:
    string *route_id;
    double *route_distance;
    int *route_time;

    Transport();
    Transport(string *route_id, double *route_distance, int *route_time);
    Transport(const Transport& t);
    void show();
    ~Transport();
};

#endif // TRANSPORT_H
