#include"h1.cpp"
#include "Train.h"
#include "ctime"
#include "string"
#include <stdlib.h>
#include <iostream>

using namespace std;
const int st_size = 15;
Train station[st_size];

static string cities[] =
{
    "Cherkasy", "Chernivtsi", "Chernihiv",
    "Dnipro",
    "Herson",
    "Kharkiv", "Kyiv",
    "Odesa",
    "Poltava",
    "Zaporozhia"
};

string random_city()
{
    return cities[rand() % cities->length()];
}

void auto_fill(Train& t)
{
    t.SetDest(random_city());
    t.SetTID(rand() % 1000);
    string month_s, date_s, hour_s, min_s;
    int  month= rand() % 12 + 1,
        date= rand() % 31 + 1
        ,hour= rand() % 24
        ,min= rand() % 60;
    if (month < 10) month_s = '0' + to_string(month);
    else month_s = to_string(month);

    if (date < 10) date_s = '0' + to_string(date);
    else date_s = to_string(date);

    if (hour < 10) hour_s = '0' + to_string(hour);
    else hour_s = to_string(hour);

    if (min < 10) min_s = '0' + to_string(min);
    else min_s = to_string(min);

    t.SetDT(to_string(rand() % 10 + 2015) + '/'
        + month_s + '/'
        + date_s + '/'
        + hour_s + ':'
        + min_s);
}

void ID_sort(Train station[st_size]) {
    for (int startIndex = 0; startIndex < st_size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < st_size; ++currentIndex)
        {
            if (station[currentIndex].GetTID() < station[smallestIndex].GetTID())
                smallestIndex = currentIndex;
        }
        swap(station[startIndex], station[smallestIndex]);
    }
}

void dest_sort(Train station[st_size]) {
    for (int startIndex = 0; startIndex < st_size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < st_size; ++currentIndex)
        {
            if (station[currentIndex].GetDest() < station[smallestIndex].GetDest())
                smallestIndex = currentIndex;
            else if (station[currentIndex].GetDest() == station[smallestIndex].GetDest()) {
                if (station[currentIndex].GetDT() < station[smallestIndex].GetDT())
                    smallestIndex = currentIndex;
            }
        }
        swap(station[startIndex], station[smallestIndex]);
    }
}

void search_train(Train station[st_size]) {
    int buff_id = -1;
    int train_id = 0;
    do {
    cout << "Please input train ID for getting info" << endl;
    cin >> train_id;
        for (int i = 0; i < st_size; i++) {
            if (station[i].GetTID() == train_id) buff_id = i;
        }
        if (buff_id != -1) {
            cout << station[buff_id].GetInfo() << endl;
            break;
        }
        else {
            cout << "Train with selected ID wasn't found" << endl;
        }
    } while (true);

}

int main()
{
    srand(time(nullptr));
    int id;
    cout << "Randomly generated array of trains\n";
    for (int i = 0; i < st_size; i++) {
        auto_fill(station[i]);
        cout << station[i].GetInfo() << endl;
    }
    cout << "Sorted array of trains by ID\n";
    ID_sort(station);
    for (int i = 0; i < st_size; i++) {
        cout << station[i].GetInfo() << endl;
    }
    cout << "Sorted array of trains by destination\n";
    dest_sort(station);
    for (int i = 0; i < st_size; i++) {
        cout << station[i].GetInfo() << endl;
    }
}
