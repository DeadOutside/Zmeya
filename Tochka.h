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
    Tochka(Tochka *p);
    void Move(short int offset, Direction direction);
    void Draw();
    void Clear();
};

#endif // TOCHKA_H
