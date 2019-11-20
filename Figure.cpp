#include "Figure.h"

using namespace std;

void Figure::Draw()
{
    for(Tochka p: pList)
    {
       p.Draw();
    }
}
