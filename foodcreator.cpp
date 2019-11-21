#include "foodcreator.h"

FoodCreator::FoodCreator(int mapWidth, int mapHeight, char sym)
{
    this->mapWidth = mapWidth;
    this->mapHeight = mapHeight;
    this->sym = sym;
}
Tochka FoodCreator::CreateFood(){
    srand(time(NULL));
    short int x = rand()%mapWidth+1;
    short int y = rand()%mapHeight+1;
    return Tochka(x,y,sym);
}
