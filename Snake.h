#ifndef SNAKE_H
#define SNAKE_H
#include <list>
#include "Tochka.h"
#include "direction.h"
#include "Figure.h"

class Snake : public Figure
{
    Direction direction;
public:
    Snake(Tochka tail, int length, Direction _direction)
    {
        direction = _direction;
        list<Tochka> pList;
        for(short int i = 0; i<length;i++)
        {
            Tochka p(tail);
            p.Move(i,_direction);
            pList.push_back(p);

        }
    }
    Tochka GetNextPoint()
    {
        Tochka head = pList.back();
        Tochka next(head);
        next.Move(1,direction);
        return next;
    }
    void Move()
    {
        Tochka tail = pList.back();
        pList.remove(tail);
        Tochka head = GetNextPoint();
        pList.push_back(head);

        tail.Clear();
        head.Draw();
    }

};
#endif // SNAKE_H
