#include <iostream>
#include <sstream>
#include "table.h"
using namespace std;

int main()
{
    cout << "Enter start number of table: ";
    int *n = new int;
    cin >> *n;
    Table *table = new Table(n);

    for(int i = 0; i < *n; i++)
    {
        cout << "Enter " << (i) + 1 << " id: ";
        cin >> *table->data[i].route_id;
        cout << "Enter " << (i) + 1 << " distance: ";
        cin >> *table->data[i].route_distance;
        cout << "Enter " << (i) + 1 << " time: ";
        cin >> *table->data[i].route_time;
    }
    while(true)
    {
        cout << "What do u wanna do?(0 - exit, 1 - add_record, 2 - delete_record, 3 - sort, 4 - show): ";
        string *mode = new string;
        cin >> *mode;
        if(*mode == "0")
            break;
        else if(*mode == "1")
        {
            string *id = new string;
            double *distance = new double;
            int *time = new int;
            cout << "Enter id: ";
            cin >> *id;
            cout << "Enter distance: ";
            cin >> *distance;
            cout << "Enter time: ";
            cin >> *time;
            table->add_record(new Transport(id, distance, time));
        }
        else if(*mode == "2")
        {
            table->delete_record();
            cout << "Success!" << endl;
        }
        else if(*mode == "3")
        {
            table->sort();
            cout << "Success!" << endl;
        }
        else if(*mode == "4")
            table->show();
    }
    return 0;
}
