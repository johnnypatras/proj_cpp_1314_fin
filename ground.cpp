#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <string>

#include "ground.h"

using namespace std;

ground::ground(void)
{
    
}

ground::~ground(void)
{
    
}


//void ground::setcomposition()
//{
	//int a;
	//srand(time(NULL));
	//a = rand()%3+1;
	//switch (a) 
	//{
	//	case 1:
		//this->ground_comp = "palladium";
		//break;
		//case 2:
		/*this->ground_comp = "iridium";
		break;
		case 3:
		this->ground_comp = "platinum";
		break;		
	}
	cout << a << "\n" << ground_comp << "\n";
}

void ground::setdanger()
{
	srand(time(NULL));
	this->danger = float (rand()%90)/100;
	cout << danger << "\n";*/
//}


float ground::getiridium()
{
	return iridium;
}

float ground::getpalladium()
{
	return palladium;
}

float ground::getplatinum()
{
	return platinum;
}

float ground::getdanger()
{
    return danger;
}

