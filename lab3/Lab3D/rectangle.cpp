#include "rectangle.h"

Rectangle::Rectangle():FIGURE(){}

Rectangle::Rectangle(int a, int b):FIGURE(a, b){}

void Rectangle::show(){
    cout << "Square is: " << a * b << endl;
}
