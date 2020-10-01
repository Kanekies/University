#include "Train.h"

Train::Train()
    : Train("", 0, "")
{

}

Train::Train(const string& _dest, int _t_id, string _d_time)
{
    dest = _dest;
    t_id = _t_id;
    d_time = _d_time;
}

void Train::SetDest(const string& _dest)
{
    dest = _dest;
}

void Train::SetTID(int _t_id)
{
    t_id = _t_id;
}

void Train::SetDT(string _d_time)
{
    d_time = _d_time;
}

const string& Train::GetDest() const
{
    return dest;
}

int Train::GetTID() const
{
    return t_id;
}

string Train::GetDT() const
{
    return d_time;
}

string Train::GetInfo() const
{
    return string("Train " + to_string(t_id) + " going to " + dest + " departure at " + d_time);
}

