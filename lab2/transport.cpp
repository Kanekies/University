#include "transport.h"

Transport::Transport()
{
    this->name="";
    this->route_id = "";
    this->route_distance = 0;
    this->route_time = 0;
}
Transport::Transport(string name, string route_id, double route_distance, int route_time)
{
    this->name=name;
    this->route_id = route_id;
    this->route_distance = route_distance;
    this->route_time = route_time;
}

const Transport&  Transport::operator= (const Transport& t)
{
    if (this == &t) return *this;
    this->route_id = t.route_id;
    this->route_distance = t.route_distance;
    this->route_time = t.route_time;
    return *this;
}
bool Transport::operator==(const Transport& t1)
{
    if (t1.name == this->name && t1.route_id == this->route_id && t1.route_distance == this->route_distance && t1.route_time == this->route_time) return true;
    return false;
}

const Transport  Transport::operator+(const Transport& t1)
{
    this->name+=t1.name;
    this->route_id+=t1.route_id;
    this->route_distance += t1.route_distance;
    this->route_time += t1.route_time;
    return *this;
}
int Transport::get_route_time()
{
    return this->route_time;

}
double Transport::get_route_distance()
{
    return this->route_distance;
}
string Transport::get_route_id()
{
    return this->route_id;
}
void Transport::set_route_id(string route_id)
{
this->route_id=route_id;
}
string Transport::get_name()
{
    return this->name;
}
void Transport::set_name(string name)
{
this->name=name;
}
void Transport::set_route_time(int route_time)
{
this->route_time=route_time;
}
void Transport::set_route_distance(double route_distance)
{
this->route_distance=route_distance;
}
ostream& operator<<(ostream& out, const Transport& t)
{
    out<<"Name: "<<t.name<<" Route_id: "<<t.route_id<<" Route_distance: "<<t.route_distance<<" Route_time: "<<t.route_time;
    return out;
}
istream& operator>>(istream& in, Transport& t)
{
    cout<<"Name: ";
    in>>t.name;
    cout<<"Route_id: ";
    in>>t.route_id;
    cout<<"Route_distance: ";
    in>>t.route_distance;
    cout<<"Route_time: ";
    in>>t.route_time;
    return in;
}
