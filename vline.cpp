#include "vLine.h"

vLine::vLine(short int yUp,short int yDown,short int x, char sym)
{
    for(short int y=yUp;y<=yDown;y++)
    {
        Tochka p(x,y,sym);
        pList.push_back(p);

    }
}
