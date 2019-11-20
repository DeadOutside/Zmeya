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
    Snake(Tochka tail, int length, Direction _direction);
    Tochka GetNextPoint();
    void Move();
};
#endif // SNAKE_H
