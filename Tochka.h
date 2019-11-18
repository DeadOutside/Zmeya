#ifndef TOCHKA_H
#define TOCHKA_H
#include <iostream>
#include <windows.h>

using namespace std;

class Tochka
{
    short int x, y;
    char sym;
public:
    Tochka();
    Tochka(short int _x, short int _y, char _sym)
    {
        x = _x; y = _y; sym = _sym;
    }
    void Draw()
    {
        HANDLE hConsole_c = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = {x, y};
        SetConsoleCursorPosition(hConsole_c, pos);
        cout << sym;
    }
};
#endif // TOCHKA_H
