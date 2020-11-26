#include "transport.h"

Transport::Transport(){
    this->route_id = "";
    this->route_distance = 0;
    this->route_time = 0;
}

Transport::Transport(string route_id, double route_distance, int route_time){
    this->route_id = route_id;
    this->route_distance = route_distance;
    this->route_time = route_time;
}

const Transport& Transport::operator= (const Transport& t)
{
    if (this == &t) return *this;
    this->route_id = t.route_id;
    this->route_distance = t.route_distance;
    this->route_time = t.route_time;
    return *this;
}

string Transport::get_info(){
    return string(this->route_id + " " + to_string(this->route_distance) + " " + to_string(this->route_time));
}
