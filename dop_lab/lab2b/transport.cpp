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
    this->route_distance = 0;
    this->route_time = 0;
}

string Transport::get_info()
{
    return string(this->route_id + " " + to_string(this->route_distance) + " " + to_string(this->route_time));
}
