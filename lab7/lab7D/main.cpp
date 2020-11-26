#include "transports.h"
#include <unistd.h>

int main()
{
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
    cout << "Enter distance: ";
    cin >> distance;
    cout << "Enter time: ";
    cin >> time;
    Transport transportWrite(id, distance, time);
    transports.writeToFile(_fileName, transportWrite);
    cout << "***READ ONE FROM FILE***" << endl;
    Transport transportRead = transports.readFromFile(fileName);
    cout << transportRead.get_info() << endl;
    cout << "***READ ALL FROM FILE***" << endl;
    transports.readAllFromFile(fileName);
    cout << "***WRITE ALL TO CONSOLE***" << endl;
    transports.writeAllToConsole();
    return 0;
}
