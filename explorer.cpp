#include "vehicle.h"
#include "explorer.h"

using namespace std;

Explorer::Explorer(int s, bool st, float re, int Xin, int Yin):Vehicle(s, st, re, Xin, Yin)
{
}

Explorer::~Explorer(void)
{
}

void Explorer::check(void)
{
    int tx,ty;
    tx = getX();
    ty = getY();

    tx--;
    ty--;
    //xartisedafous[position(tx,ty)].getdanger();
    
}