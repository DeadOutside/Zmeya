#include "score.h"

Score::Score()
{
    score = 0;
}

void Score::Draw(short int x, short int y){
    HANDLE hConsole_c = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(hConsole_c, pos);
    cout << "Score:" << score;
}

void Score::Add(){
    ++score;
}
void Score::DrawPos(Tochka obj, short int _x,short int _y){
    HANDLE hConsole_c = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {_x, _y};
    SetConsoleCursorPosition(hConsole_c, pos);
    cout << "X=" << obj.x << " Y=" << obj.y;
}
