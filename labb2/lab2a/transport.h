#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<string>
using namespace std;
class Transport {
public:
    Transport(string route_id, double route_distance, int route_time);

    bool operator==(const Transport& t1);
    const Transport& operator= (const Transport& t);
    const Transport operator+(const Transport& t1);
    string get_info();
private:
    string route_id;
    double route_distance;
    int route_time;
};

#endif // TRANSPORT_H
