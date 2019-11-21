#include <iostream>
#include <windows.h>
#include <list>
#include <conio.h>
#include "Tochka.h"
#include "hLine.h"
#include "vLine.h"
#include "Figure.h"
#include "Snake.h"
#include "direction.h"
#include "foodcreator.h"
#include "score.h"

using namespace std;

int main()
{
    const int MapX=80;
    const int MapY=25;
    COORD screenSize;
    screenSize.X = 80;
    screenSize.Y = 25;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),screenSize);
    //ПОЛЕ
    hLine uLine(0,MapX+1,0,'#');
    hLine dLine(0,MapX+1,MapY+1,'#');
    vLine lLine(1,MapY,0,'#');
    vLine rLine(1,MapY,MapX+1,'#');
    uLine.Draw();
    dLine.Draw();
    lLine.Draw();
    rLine.Draw();
    //ЗМІЙКА
    Tochka p(2,2,'*');
    Snake snake(p,2,RIGHT);
    snake.Draw();
    int key = 1;
    FoodCreator foodcreator(MapX,MapY,'@');
    Tochka food = foodcreator.CreateFood();
    Score score;
    food.Draw();
    score.Draw(83,0);
    score.DrawPos(food,83,3);
    while(true)
    {
        if(snake.Eat(food)){
            food = foodcreator.CreateFood();
            food.Draw();
            score.Add();
            score.Draw(83,0);
            score.DrawPos(food,83,3);
        }

        else {
        snake.Move();
        }

        Sleep(150);

        if(kbhit())
        {
            key = getch();
            snake.Handle(key);
        }

    }
    return 0;
}
