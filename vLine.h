#ifndef VLINE_H
#define VLINE_H
#include <list>
#include "Figure.h"
#include "Tochka.h"

using namespace std;

class vLine : public Figure
{
public:
    vLine(short int yUp,short int yDown,short int x, char sym);
};
#endif // VLINE_H
