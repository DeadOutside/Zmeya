#ifndef TOCHKA_H
#define TOCHKA_H
#include <list>
#include <iostream>
#include <windows.h>
#include "direction.h"

using namespace std;

class Tochka
{
    public:
    short int x, y;

    Tochka();
    Tochka(short int _x, short int _y, char _sym);
    Tochka(Tochka *p);
    char sym;
    void Move(short int offset, Direction direction);
    void Draw();
    void Clear();
    bool IsHit(Tochka p);
};

#endif // TOCHKA_H
