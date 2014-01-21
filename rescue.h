#ifndef rescue_H
#define rescue_H

#include "vehicle.h"

using namespace std;

class Rescue : public Vehicle
{
public:
	Rescue(int =10,bool  =true ,float =0.4, int =0, int =12);
	~Rescue(void);

	//set methods
	//void setrescued(void);

	//get methods



	//Prepei na kratame ton arithmo ton oximaton pou esose
	//kai na elegxei gia pithanon simata voitheias ta 
	//opoia proerxontai apo geitonika oximata



private: 
	int rescued;
};

#endif
