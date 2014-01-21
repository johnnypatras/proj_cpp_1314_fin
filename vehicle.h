#ifndef vehicle_H
#define vehicle_H

#include <iostream>
#include <time.h>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Vehicle
{
public:
        int X,Y;
	Vehicle(int , bool, float, int, int);
	~Vehicle(void);
	
        
	//set methods
	void setspeed(int);
	void setstate(bool);
	void setresistance(float);
	void setmovement(bool);
	void setXY(int ,int );
	void setnotrepaired(void);

	//get methods
	int getspeed(void);
	int getmovement(void);
	bool getstate(void);
	float getresistance(void);
        int getX(void);
        int getY(void);
        
	//Methodos metakinisis gia ola ta oximata.
        void move(void);
        
        

        
private:
	int speed, movement;
	
	int notrepaired;
	bool state;
	float resistance;

};


#endif