#include "triangle.h"

Triangle::Triangle() : FIGURE(){}

Triangle::Triangle(int a, int b) : FIGURE(a, b){}

void Triangle::show(){
    cout << "Square is: " << (this->a * this->b) / 2.0 << endl;
}
