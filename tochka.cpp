#include "Tochka.h"

Tochka::Tochka(short int _x, short int _y, char _sym){
    x = _x;
    y = _y;
    sym = _sym;
}

Tochka::Tochka(Tochka *p){
        x = p->x;
        y = p->y;
        sym = p->sym;
}

void Tochka::Move(short offset, Direction direction)
{
    if(direction == RIGHT)
        x = x + offset;
    else if(direction == LEFT)
        x = x - offset;
    else if(direction == UP)
        y = y - offset;
    else if(direction == DOWN)
        y = y + offset;
}

void Tochka::Draw()
{
    HANDLE hConsole_c = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(hConsole_c, pos);
    cout << sym;
}

void Tochka::Clear()
{
    sym = ' ';
    Draw();
}

bool Tochka::IsHit(Tochka p){
    return p.x == this->x && p.y == this->y;
}
