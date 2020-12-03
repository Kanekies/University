#ifndef SHABLON_H
#define SHABLON_H
#include <iostream>

template <typename T>
class Shablon
{
public:
    Shablon(){ t = 0; }
    Shablon(T t) { this->t = t; }
    void show() { std::cout << t << std::endl; }
    Shablon<T> operator+(const Shablon<T>& t2) { return Shablon<T>(this->t + t2.t); }
private:
    T t;
};

#endif // SHABLON_H
