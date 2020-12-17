#include "transports.h"
#include <unistd.h>

int main()
{
    cin.exceptions(ios::failbit | ios::badbit);
    string fileName = "all.txt";
    string _fileName = "one.txt";
    Transports transports;
    cout << "***READ ALL FROM CONSOLE***" << endl;
    transports.readAllFromConsole();
    cout << "***WRITE ALL TO CONSOLE***" << endl;
    transports.writeAllToConsole();
    cout << "***WRITE ALL TO FILE***" << endl;
    transports.writeAllToFile(fileName);
    cout << "***WRITE ONE TO FILE***" << endl;
    string id;
    double distance;
    int time;
    cout << "Enter id: ";
    cin >> id;
    while(true){
        try {
            cout << "Enter distance: ";
            cin >> distance;
            break;
        }  catch (exception& ex) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << ex.what() << endl;
            continue;
        }
    }
    while(true){
        try {
            cout << "Enter time: ";
            cin >> time;
            break;
        }  catch (exception& ex) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << ex.what() << endl;
            continue;
        }
    }


    Transport transportWrite(id, distance, time);
    transports.writeToFile(_fileName, transportWrite);
    cout << "***READ ONE FROM FILE***" << endl;
    Transport transportRead = transports.readFromFile(fileName);
    cout << transportRead.get_info() << endl;
    cout << "***READ ALL FROM FILE***" << endl;
    try {
        transports.readAllFromFile(fileName + "22222");
    }  catch (string ex) {
        cout << ex << endl;
        return -1;
    }

    cout << "***WRITE ALL TO CONSOLE***" << endl;
    transports.writeAllToConsole();
    return 0;
}
