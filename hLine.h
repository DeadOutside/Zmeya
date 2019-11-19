#ifndef HLINE_H
#define HLINE_H
#include "Figure.h"
#include "Tochka.h"
#include <list>

using namespace std;

class hLine : public Figure
{

public:
    hLine(short int xLeft,short int xRight,short int y, char sym)
    {
        for(short int x=xLeft;x<=xRight;x++)
        {
            Tochka p(x,y,sym);
            pList.push_back(p);

        }
    }
};
#endif // HLINE_H
