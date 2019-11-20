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
    void Draw();
};
#endif // LIST_H
