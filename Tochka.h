#ifndef TOCHKA_H
#define TOCHKA_H
#include <list>
#include <iostream>
#include <windows.h>
#include "direction.h"

using namespace std;

class Tochka
{
    short int x, y;
    char sym;
public:
    Tochka();
    Tochka(short int _x, short int _y, char _sym);
    Tochka(Tochka *p)
    {
        x = p->x;
        y = p->y;
        sym = p->sym;
    }
    void Move(short int offset, Direction direction)
    {
        if(direction == RIGHT)
            x = x + offset;
        else if(direction == LEFT)
            x = x - offset;
        else if(direction == UP)
            y = y + offset;
        else if(direction == DOWN)
            y = y - offset;
    }
    void Draw()
    {
        HANDLE hConsole_c = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = {x, y};
        SetConsoleCursorPosition(hConsole_c, pos);
        cout << sym;
    }
    void Clear()
    {
        sym = ' ';
        Draw();
    }
};

#endif // TOCHKA_H
