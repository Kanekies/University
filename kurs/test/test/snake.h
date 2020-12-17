#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define FREEGLUT_STATIC
#define _LIB
#define FREEGLUT_LIB_PRAGMAS 0
#include "glut.h"
#include <string>
class snake
{
public:
    int x, y;
    int sX, sY;
    char* snakeRoute;
    snake(int _x, int _y);
    void draw(float _size, bool color);
    void setN(const char* c);
    const char* getN();
    void death();
    ~snake();
};
