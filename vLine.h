#ifndef VLINE_H
#define VLINE_H
#include <list>
#include "Tochka.h"

class vLine
{
    list<Tochka> pList;
public:
    vLine(short int yUp,short int yDown,short int x, char sym)
    {
        for(short int y=yUp;y<=yDown;y++)
        {
            Tochka p(x,y,sym);
            pList.push_back(p);

        }
    }
    void Draw()
    {
        for(Tochka p: pList)
        {
           p.Draw();
        }
    }
};
#endif // VLINE_H
