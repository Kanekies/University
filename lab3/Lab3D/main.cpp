#include <iostream>
#include <vector>
#include <algorithm>
#include "triangle.h"
#include "rectangle.h"
#include "ellipse.h"

using namespace std;

int main()
{
    //FIGURE *f = new FIGURE(5, 5); ***нельзя создать экземпляр абстрактного класса***

    Triangle t(3, 4);
    Rectangle r(3, 4);
    Ellipse e(3, 4);
    vector<FIGURE*> v;
    v.push_back(&t);
    v.push_back(&r);
    v.push_back(&e);

    for_each(v.begin(), v.end(), [](FIGURE* f){
        f->show();
    });

    return 0;
}
