#ifndef FOODCREATOR_H
#define FOODCREATOR_H
#include "Tochka.h"
#include <cstdlib>
#include <time.h>

class FoodCreator
{
    int mapWidth;
    int mapHeight;
    char sym;
public:
    FoodCreator(int mapWidth, int mapHeight, char sym);
    Tochka CreateFood();
};

#endif // FOODCREATOR_H
