#define _CRT_SECURE_NO_WARNINGS
#define FREEGLUT_STATIC
#define _LIB
#define FREEGLUT_LIB_PRAGMAS 0
#include<glut.h>
#include"Source.h"
#include<string>
#include<Windows.h>
using namespace std;
/*default settings*/
game settings;
eat eatSnake(10.0, settings.winWidth, settings.winHeight, settings.sizeBlock);//первый спавн еды
vector<wall> walls;
vector<snake> snakeT;

bool ifRoute, ifSpeed = false;
int kSpeed = 0;
int delayPlayer;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);//очищает буффер цветов
    eatSnake.draw();// рисует первую еду
    for (vector<wall>::iterator i = walls.begin(); i != walls.end(); i++)
        i->draw();//рисует стены по очереди в веркторе
    for (vector<snake>::iterator i = snakeT.begin(); i != snakeT.end(); i++)//прорисовка змеи
    {
        if (i == snakeT.begin())
            i->draw(settings._size_snake + 3, 1);//чтобы голова была больше чем телом
        else
            i->draw(settings._size_snake, 1);
    }
    glutSwapBuffers();//чтобы видеть змейку, а не начало
}

void tail()
{
    if (snakeT.size() > 1)
    {
        for (vector<snake>::iterator ip = snakeT.end(); (ip - 1) != snakeT.begin();)//способ прорисовки змеи
        {
            ip--;
            ip->x = (ip - 1)->x;
            ip->y = (ip - 1)->y;
        }
    }
}

void brkRegion()//если игра без стен чтобы вернуться на поле
{
    if (snakeT.front().x == settings.winWidth / 2)
    {
        snakeT.front().x = -settings.winWidth / 2 + settings.sizeBlock;
        return;
    }
    if (snakeT.front().x == -settings.winWidth / 2)
    {
        snakeT.front().x = settings.winWidth / 2 - settings.sizeBlock;
        return;
    }
    if (snakeT.front().y == settings.winHeight / 2)
    {
        snakeT.front().y = -settings.winHeight / 2 + settings.sizeBlock;
        return;
    }
    if (snakeT.front().y == -settings.winHeight / 2)
    {
        snakeT.front().y = settings.winHeight / 2 - settings.sizeBlock;
        return;
    }
}


void deathAWall()
{
    if (snakeT.front().x == settings.winWidth / 2 || snakeT.front().x == -settings.winWidth / 2 || snakeT.front().y == settings.winHeight / 2 || snakeT.front().y == -settings.winHeight / 2)
    {
        //что будет происходить при ударе в стену


        /*snakeT.clear();
        snake head(settings.posStartX, settings.posStartY);
        snakeT.push_back(head);
        eatSnake.reset();*/
        cout << endl << "__Game over__"<< endl << endl << endl;
        exit(0);

    }
}

void eatOmSnake()// чтобы змея удлиннялась когда мы съели
{
    if (eatSnake.om(snakeT.front().x, snakeT.front().y))
    {
        snake addTail(snakeT.back().x, snakeT.back().y);
        snakeT.push_back(addTail);
        system("cls");
        cout << "Score: " << snakeT.size()-1;
    }
}

void tailOmSnake()// за обрезание змеи
{
    if (snakeT.size() > 3)
    {
        for (int i = 2; i < snakeT.size(); i++)
            if (snakeT[0].x == snakeT[i].x && snakeT[0].y == snakeT[i].y)//проверяет не врезались ли мы в хвост
            {
                for (int j = snakeT.size() - i; j < snakeT.size(); j++)//удаляет все, что после того, что мы откусили
                    snakeT.pop_back();
                system("cls");
                cout << "Score: " << snakeT.size()-1;
                return;
            }
    }
}

void timer(int)
{
    ifRoute = true;
    tail();
    eatOmSnake();
    tailOmSnake();
    if (!settings.onWalls)
        brkRegion();
    else
        deathAWall();
    if (ifSpeed && kSpeed < 5)//граница для ускорения
        kSpeed++;
    else
    {
        settings.delay = delayPlayer;
        kSpeed = 0;
        ifSpeed = false;
    }
    if (snakeT.front().getN() == "-x")
        snakeT.front().x -= 10;
    if (snakeT.front().getN() == "+x")
        snakeT.front().x += 10;
    if (snakeT.front().getN() == "-y")
        snakeT.front().y -= 10;
    if (snakeT.front().getN() == "+y")
        snakeT.front().y += 10;
    glutPostRedisplay();// перерисовка змейка
    glutTimerFunc(settings.delay, timer, 0);//таймер через делей значение "0"
}

void sKeyboard(int key, int x, int y)//направление змейки
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
        if (snakeT.front().getN() == "-x" && !ifSpeed)
        {
            settings.delay = delayPlayer / 4;
            ifSpeed = true;
            break;
        }
        if (!(snakeT.front().getN() == "+x") && ifRoute)
            snakeT.front().setN("-x");
        break;
    case GLUT_KEY_RIGHT:
        if (snakeT.front().getN() == "+x" && !ifSpeed)
        {
            settings.delay = delayPlayer / 4;
            ifSpeed = true;
            break;
        }
        if (!(snakeT.front().getN() == "-x") && ifRoute)
            snakeT.front().setN("+x");
        break;
    case GLUT_KEY_UP:
        if (snakeT.front().getN() == "+y" && !ifSpeed)
        {
            settings.delay = delayPlayer / 4;
            ifSpeed = true;
            break;
        }
        if (!(snakeT.front().getN() == "-y") && ifRoute)
            snakeT.front().setN("+y");
        break;
    case GLUT_KEY_DOWN:
        if (snakeT.front().getN() == "-y" && !ifSpeed)
        {
            settings.delay = delayPlayer / 4;
            ifSpeed = true;
            break;
        }
        if (!(snakeT.front().getN() == "+y") && ifRoute)
            snakeT.front().setN("-y");
        break;
    }
    ifRoute = false;
}
void initialize()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);//цвет фона
    glMatrixMode(GL_PROJECTION);//команды относятся к проекту.
    glLoadIdentity();// считывает текущую матрицу
    glOrtho(-settings.winWidth / 2, settings.winWidth / 2,
        -settings.winHeight / 2, settings.winHeight / 2,
        -5.0, 5.0);//преобразует изображение в соответствии с плоскостями
    glMatrixMode(GL_MODELVIEW);
}

void start()
{
    cout << "Enter delay (max - 1000, min - 10, default - 100) : ";
    cin >> delayPlayer;
    if (delayPlayer < 10 || delayPlayer>1000)
        cout << "default delay set";
        delayPlayer = 100;
    settings.delay = delayPlayer;
    while (1)
    {
        cout << "Enter game mode (walls - 1 or without walls - 0) :";
        int ch;
        cin >> ch;
        if (ch == 1 || ch == 0)
        {
            if (ch == 1)
                settings.onWalls = true;
            else
                settings.onWalls = false;
            break;
        }
        system("cls");
   }
    snake head(settings.posStartX, settings.posStartY);
    snakeT.push_back(head);//добавить голову в вектор змеи
    if (settings.onWalls)
        wallFunc();
}

void wallFunc()//добавляет стены в ветор
{
    wall w0(-250, -250, -250, 250);
    wall w1(-250, 250, -250, -250);
    wall w2(250, -250, 250, 250);
    wall w3(250, 250, -250, 250);
    w0.size = w1.size = w2.size = w3.size = settings.sizeBlock;
    walls.push_back(w0);
    walls.push_back(w1);
    walls.push_back(w2);
    walls.push_back(w3);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);//позволяет создавать окно  
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);//способы задачи цветов
    glutInitWindowSize(settings.winWidth, settings.winHeight);//за размер окна
    glutInitWindowPosition(settings.posWinWidth, settings.posWinHeight);//где будет окно
    glutCreateWindow("Kursovaya snake");// название окошка
    glutTimerFunc(settings.delay, timer, 0);//скорость змеи
    glutDisplayFunc(display);// что будет в окне
    glutSpecialFunc(sKeyboard);//клавиатура
    start();
    initialize();
    glutMainLoop();// запускает все
    return 0;
}
