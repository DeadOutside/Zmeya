#include "hLine.h"
#include <list>
#include "Tochka.h"
#include "Figure.h"

using namespace std;

hLine::hLine(short int xLeft,short int xRight,short int y, char sym)
{
    for(short int x=xLeft;x<=xRight;x++)
    {
        Tochka p(x,y,sym);
        pList.push_back(p);

    }
}
