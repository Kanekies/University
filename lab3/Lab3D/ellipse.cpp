#include "ellipse.h"

Ellipse::Ellipse() : FIGURE(){}

Ellipse::Ellipse(int a, int b) : FIGURE(a, b){}

void Ellipse::show(){
    cout << "Square is: " << M_PI * a * b << endl;
}
