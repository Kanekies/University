#include <iostream>
#include <fstream>
#include <ctime>
#include "comp.h"
using namespace std;

void read(string fileName, double* numbers, int n){
    ifstream fin;
    fin.open(fileName);
    for(int i = 0; i < n; i++){
        fin >> numbers[i];
    }
    fin.close();
}

void write(string fileName, double* numbers, int n){
    ofstream fout;
    fout.open(fileName);
    for(int i = 0; i < n; i++){
        numbers[i] = 1 + rand() % 50;
        fout << numbers[i] << endl;
    }
    fout.close();
}

void write(string fileName, COMP* comp_numbers, int n){
    ofstream fout;
    fout.open(fileName);
    for(int i = 0; i < n; i++){
        cout << comp_numbers[i].One() << " + " << comp_numbers[i].Second() << "i" << endl;
        fout << comp_numbers[i].One() << " + " << comp_numbers[i].Second() << "i" << endl;
    }
    fout.close();
}

int main()
{
    srand(time(NULL));
    string fileName = "file.txt";
    int n = 10;

    double numbers[n];
    write(fileName, numbers, n);

    double new_numbers[n];
    read(fileName, new_numbers, n);

    COMP comp_numbers[n / 2];
    int counter = 0;
    for(int i = 0; i < n; i += 2)
    {
        comp_numbers[counter] = *(new COMP(new_numbers[i], new_numbers[i + 1]));
        counter++;
    }

    write("comp_" + fileName, comp_numbers, n / 2);
    return 0;
}
