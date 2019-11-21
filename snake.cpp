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

void Snake::Handle(int key){
    if (key == 75)
        direction = LEFT;
    else if (key == 77)
        direction = RIGHT;
    else if (key == 72)
        direction = UP;
    else if(key == 80)
        direction = DOWN;
}

bool Snake::Eat(Tochka food){
    Tochka head = GetNextPoint();
    if(head.IsHit(food)){
        food.sym = head.sym;
        pList.push_back(food);
        return true;
    }
    else return false;
}
