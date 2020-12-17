#include <iostream>
#include <fstream>
#include <string>
#include "stringbuilder.h"
using namespace std;

int main()
{
    StringBuilder strBuilder("teSst1_SsTtrin1123gG!");
    string fileName = "file.txt";
    ofstream fout;
    try {
        ifstream fin(fileName);
        if(fin.fail())
            throw "File has been created";
    }
    catch(const char* ex){
        cout << ex << endl;
        fout.open(fileName);
    }
    fout << strBuilder;
    cout << strBuilder;
    return 0;
}
