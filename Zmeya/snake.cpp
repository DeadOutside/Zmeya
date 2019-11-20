#include <list>
#include "Tochka.h"
#include "direction.h"
#include "Figure.h"
#include "Snake.h"

Snake::Snake(Tochka tail, int length, Direction _direction)
{
    direction = _direction;
    for(short int i = 0; i<length;i++)
    {
        Tochka p(tail);
        p.Move(i,_direction);
        pList.push_back(p);

    }
}
Tochka Snake::GetNextPoint()
{
    Tochka head = pList.back();
    Tochka next(head);
    next.Move(1,direction);
    return next;
}
void Snake::Move()
{
    Tochka tail = pList.front();
    pList.pop_front();
    Tochka head = GetNextPoint();
    pList.push_back(head);

    tail.Clear();
    head.Draw();
}
