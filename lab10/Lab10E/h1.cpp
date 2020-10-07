#include<h1.h>
#include<iostream>
void Massive::GenerateMas(int n, int m){
    mas.resize(0);
    mas.resize(n, vector<int>(m));
    for(int i = 0; i < mas.size(); i++)
        for(int j = 0; j < mas[0].size(); j++)
            mas[i][j] = rand() % 100 + 1;
}

void  Massive::PrintMas(){
    for(int i = 0; i < mas.size(); i++){
        for(int j = 0; j < mas[0].size(); j++){
            cout<<mas[i][j]<<' ';
        }
        cout<<endl;
    }
}

pair<int,int>  Massive::FindMin(){
    int min_ = 999999;
    int x, y;
    for(int i = 0; i < mas.size(); i++){
        for(int j = 0; j < mas[0].size(); j++){
            if(mas[i][j]<min_){
                x = i; y = j;
                min_ = mas[i][j];
            }
        }
    }
    return make_pair(x, y);
}

int  Massive::GetElem(int x, int y){
    return mas[x][y];
}

void  Massive::SetElem(int x, int y, int val){
    mas[x][y] = val;
}

void  Massive::GetSubmass(int n, int m, int x, int y){
    for(int i = x; i < x + n; i++){
        for(int j = y; j < y + m; j++){
            cout << mas[i][j] << ' ';
        }
        cout<<endl;
    }
}
