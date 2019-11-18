#include <iostream>
#include <windows.h>
#include "Tochka.h"
#include "hLine.h"
#include "vLine.h"
//#include "tochka.h"

using namespace std;
int main()
{
    COORD screenSize;
    screenSize.X = 80;
    screenSize.Y = 25;
    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE),screenSize);
    Tochka obj(2,2,'+');
    obj.Draw();
    hLine uLine(0,80,0,'#');
    uLine.Draw();
    hLine dLine(0,80,25,'#');
    dLine.Draw();
    vLine lLine(0,25,0,'#');
    lLine.Draw();
    vLine rLine(0,25,80,'#');
    rLine.Draw();
    return 0;
}
