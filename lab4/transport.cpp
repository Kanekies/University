#include "transport.h"

Transport::Transport()
{
    this->route_id = new string;
    this->route_distance = new double;
    this->route_time = new int;
}

Transport::Transport(string *route_id, double *route_distance, int *route_time) : Transport()
{
    *this->route_distance = *route_distance;
    *this->route_time = *route_time;
    *this->route_id = *route_id;
}

Transport::Transport(const Transport& t) : Transport()
{
    route_id = t.route_id;
    route_distance = t.route_distance;
    route_time = t.route_time;
}

void Transport::show()
{
    cout << "id: " << *route_id << " distance: " << *route_distance << " time: " << *route_time << endl;
}

Transport::~Transport()
{
    delete this->route_id;
    delete this->route_distance;
    delete this->route_time;
}
