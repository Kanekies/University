#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    srand(time(NULL));
    ofstream fout;

    fout.open("file.txt", ios::binary);
    for(int i = 0; i < 10; i++){
        int number = 1 + rand() % 10;
        fout.write((char*)&number, sizeof(number));
    }
    fout.close();

    ifstream fin("file.txt", ios::binary);
    int n[10];
    for(int i = 0; i < 10; i++)
        fin.read((char*)&n[i], sizeof(n[i]));
    fin.close();

    if(n[4] % 2 == 0){
        for(int i = 0; i < 4; i++)
            n[i] = 77;
        for(int i = 5; i < 10; i++)
            n[i] = 88;
    }

    fout.open("file.txt", ios::binary);
    for(int i = 0; i < 10; i++)
        fout.write((char*)&n[i], sizeof(n[i]));
    fout.close();

    for(int i = 0; i < 10; i++)
        cout << n[i] << " ";
    return 0;
}
