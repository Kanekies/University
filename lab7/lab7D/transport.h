#include <string>
#ifndef TRANSPORT_H
#define TRANSPORT_H

using namespace std;

class Transport
{
public:
    Transport();
    Transport(string, double, int);
    const Transport& operator= (const Transport&);
    string get_info();
private:
    string route_id;
    double route_distance;
    int route_time;
};

#endif // TRANSPORT_H
