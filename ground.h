#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <string>


using namespace std;

class Ground
{
	//friend ostream &operator<<(ostream &, const ground &);

public:
	Ground(void);
	~Ground(void);

	//ground &operator=(const ground &rhs);	
	//void setcomposition(void);
	//void setdanger(void);

	float getiridium(void);
	float getpalladium(void);
	float getplatinum(void);
	float getdanger(void);
//      float setiridium(void);
//	float setpalladium(void);
//	float setplatinum(void);
//	float setdanger(void);

//private:
    	float iridium;
	float palladium;
	float platinum;
	float danger;
};

//ground& ground::operator=(const ground &rhs)
//{
			//this->x = rhs.x;
			//this->y = rhs.y;
			//this->z = rhs.z;
			//return *this;
	//}


