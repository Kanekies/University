#include "transport.h"

Transport::Transport(string route_id, double route_distance, int route_time)
{
    this->route_id = route_id;
    this->route_distance = route_distance;
    this->route_time = route_time;
}

bool Transport::operator==(const Transport& t1)
{
    if (t1.route_id == this->route_id && t1.route_distance == this->route_distance && t1.route_time == this->route_time) return true;
    return false;
}

const Transport&  Transport::operator= (const Transport& t)
{
    if (this == &t) return *this;
    this->route_id = t.route_id;
    this->route_distance = t.route_distance;
    this->route_time = t.route_time;
    return *this;
}

const Transport  Transport::operator+(const Transport& t1)
{
    if (this->route_id != t1.route_id) return *this;
    this->route_distance += t1.route_distance;
    this->route_time += t1.route_time;
    return *this;
}

string Transport::get_info()
{
    return string(this->route_id + " " + to_string(this->route_distance) + " " + to_string(this->route_time));
}
