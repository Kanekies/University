#pragma once
#include <string>

using namespace std;

class Train
{
public:
    Train();
    Train(const string& _dest, int _t_id, string _d_time);

    void SetDest(const string& _dest);
    void SetTID(int _t_id);
    void SetDT(string _d_time);

    const string& GetDest() const;
    int GetTID() const;
    string GetDT() const;

    string GetInfo() const;
private:
    string dest;
    int t_id;
    string d_time;
};

