#ifndef H1_H
#define H1_H
#include<vector>
using namespace std;
class Massive {
    public:
        void GenerateMas(int n, int m);
        void PrintMas();
        pair<int,int> FindMin();
        int GetElem(int x, int y);
        void SetElem(int x, int y, int val);
        void GetSubmass(int n, int m, int x, int y);
    private:
        vector<vector<int> > mas;
};
#endif // H1_H
