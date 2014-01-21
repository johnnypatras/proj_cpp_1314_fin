#include <iostream>
#include <time.h>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>

#include "vehicle.h"
#include "analyzer.h"

#include <iostream>

using namespace std;


Vehicle::Vehicle(int s, bool st, float re, int Xin, int Yin):speed(s), state(st), resistance(re), X(Xin), Y(Yin)
{
}


Vehicle::~Vehicle()
{
    
}


//set methods
void Vehicle::setspeed(int s)
{speed = s;}

void Vehicle::setstate(bool st)
{state = st;}

void Vehicle::setresistance(float re)
{resistance = re;}

void Vehicle::setmovement(bool init)
{
	if(init = true)
		movement = 0;
	else
		movement++;
}

  void Vehicle::setXY(int Xin,int Yin){ 
     X=Xin;
     Y=Yin;     
  }

  void Vehicle::setnotrepaired(void)
  {
	if(notrepaired>15)
		this->~Vehicle();

	  notrepaired++;}

//get methods
int Vehicle::getspeed()
{return speed;}

bool Vehicle::getstate()
{return state;}

float Vehicle::getresistance()
{return resistance;}

int Vehicle::getmovement()
{return movement;}

int Vehicle::getX()
{return X;}

int Vehicle::getY()
{return Y;}

//general methods
void move()
{}