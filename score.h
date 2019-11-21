#ifndef SCORE_H
#define SCORE_H
#include <windows.h>
#include <iostream>
#include "foodcreator.h"
#include "Tochka.h"

using namespace std;

class Score
{
    int score;

public:
    Score();
    void Add();
    void Draw(short int x, short int y);
    void DrawPos(Tochka obj, short int _x,short int _y);
};

#endif // SCORE_H
