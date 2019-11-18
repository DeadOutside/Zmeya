#ifndef HLINE_H
#define HLINE_H
#include "Tochka.h"
#include <list>

using namespace std;

class hLine
{
    list<Tochka> pList;
public:
    hLine(short int xLeft,short int xRight,short int y, char sym)
    {
        for(short int x=xLeft;x<=xRight;x++)
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
#endif // HLINE_H
