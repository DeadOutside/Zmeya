#ifndef LIST_H
#define LIST_H
#include <list>
#include "Tochka.h"

//using namespace std;

class Figure
{
protected:
    list<Tochka> pList;
public:
    void Draw()
    {
        for(Tochka p: pList)
        {
           p.Draw();
        }
    }

};
#endif // LIST_H
