#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define FREEGLUT_STATIC
#define _LIB
#define FREEGLUT_LIB_PRAGMAS 0
#include "glut.h"
#include "game.h"
#include "snake.h"
#include "eat.h"
#include "wall.h"

#include <vector>
#include <iostream>

void display();//окно
void timer(int);
void sKeyboard(int key, int x, int y);//клавиатура
void initialize();
void start();
void wallFunc();
void tail();
void eatOmSnake();
void brkRegion();
void deathAWall();
