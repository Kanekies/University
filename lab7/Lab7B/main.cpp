#include <iostream>
#include <fstream>
#include "stringbuilder.h"
using namespace std;

int main()
{
    StringBuilder strBuilder("teSst1_SsTtrin1123gG!");
    ofstream fout("file.txt");
    fout << strBuilder;
    cout << strBuilder;
    return 0;
}
