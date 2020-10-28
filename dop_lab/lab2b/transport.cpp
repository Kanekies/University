#include "transport.h"
#include<iostream>
#include<cstring>
Transport::Transport(string route_id, double route_distance, int route_time)
{
    this->route_id = route_id;
    this->route_distance = route_distance;
    this->route_time = route_time;
}

bool operator==(const Transport&, const Transport&);

const Transport operator+(const Transport&, const Transport&);

int Transport::operator[] (const char* c)
{
    return strlen(c);
}

void Transport::operator() ()
{
    this->route_id="";
    this->route_distance = 0;
    this->route_time = 0;
}
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
string Transport::get_info()
{
    return string(this->route_id + " " + to_string(this->route_distance) + " " + to_string(this->route_time));
}
