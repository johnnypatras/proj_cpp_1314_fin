#ifndef vehicle_H
#define vehicle_H

class Vehicle
{
public:
	Vehicle(int , bool, float);
	Vehicle(void);
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

	//Methodos metakinisis gia ola ta oximata.
private:
	int speed, movement;
	int X,Y;
	int notrepaired;
	bool state;
	float resistance;
};

#endif