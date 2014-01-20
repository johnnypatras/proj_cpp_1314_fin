#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <string>

#include "ground.h"

using namespace std;

Ground::Ground(void)
{
    
}

Ground::~Ground(void)
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


float Ground::getiridium()
{
	return iridium;
}

float Ground::getpalladium()
{
	return palladium;
}

float Ground::getplatinum()
{
	return platinum;
}

float Ground::getdanger()
{
    return danger;
}

