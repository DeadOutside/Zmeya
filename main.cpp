#include <iostream>
#include <windows.h>
#include <list>
#include "Tochka.h"
#include "hLine.h"
#include "vLine.h"
#include "Figure.h"
#include "Snake.h"
#include "direction.h"

using namespace std;

int main()
{
    COORD screenSize;
    screenSize.X = 80;
    screenSize.Y = 25;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),screenSize);
    //ПОЛЕ
    hLine uLine(0,80,0,'#');
    hLine dLine(0,80,25,'#');
    vLine lLine(0,25,0,'#');
    vLine rLine(0,25,80,'#');
    uLine.Draw();
    dLine.Draw();
    lLine.Draw();
    rLine.Draw();
    //ЗМІЙКА
    Tochka p(4,5,'*');
    Snake snake(p,5,RIGHT);
    snake.Draw();
    return 0;
}
