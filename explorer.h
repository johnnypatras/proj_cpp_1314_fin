#ifndef explorer_H
#define explorer_H

#include "vehicle.h"

using namespace std;

class Explorer : public Vehicle
{
public:
	Explorer(int =10,bool  =true ,float =0.4, int =0, int =12);
	~Explorer(void);

	//set methods

	//get methods

	//Prepei na ftiaskoume methodo tetoia oste na pairnei apo ta diplana tetragona 
	//me xrisi tou hashtable tis times epikindinotitas, na tis siggrinei kai 
	//an vrei >0.6 tote na tou vazei simaia, ara xreiazomaste 3 methodous, 
	//mia methodo elegxou, mia methodo kai mia methodo pou na dinei stin vasi pooia
	//tiles einai epikindina

        
        void check(void);
};

#endif

