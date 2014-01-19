// Project_cpp_2013-2014.cpp : Defines the entry point for the console application.

#include <iostream>
#include <time.h>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include "rescue.h"
#include "explorer.h"
#include "analyzer.h"
#include "vehicle.h"
#include "ground.h"
//#include "creating.h"
#include "base.h"

using namespace std;

int main(int argc, char** argv) 
{
	srand(time(NULL));
	int a,i;
	string comp;

	Base* base_1 = new Base();
	cout << base_1->getcapacity() << "\n";


	map<int, ground> xartisedafous;
	ground ground_1;

	vector<vehicle*> oximata_analyzer;
        vector<vehicle*> oximata_explorer;
        vector<vehicle*> oximata_rescue;

        for(i=1;i<=5;i++)
        {
            analyzer* oxima_analyzer = new analyzer();
            oximata_analyzer.push_back(oxima_analyzer);
        }
        
        for(i=1;i<=5;i++)
        {
            rescue* oxima_rescue = new rescue();
            oximata_rescue.push_back(oxima_rescue);
        }
        
        for(i=1;i<=5;i++)
        {
            explorer* oxima_explorer = new explorer();
            oximata_explorer.push_back(oxima_explorer);
        }
        
	//Dimiourgia kai arxikopoiisi twn simeiwn tou xarti 
//	for (int i = 1; i <= 100; i++)
//	{
//			
//		ground_1.danger = float(rand() % 90) / 100;
//		ground_1.iridium = (rand() % 150) + 1;
//		ground_1.palladium = (rand() % 150) + 1;
//		ground_1.platinum = (rand() % 150) + 1;
//
//		cout << "vasiko set up:" << i << "\n";
//		cout << "Iridium: \t" << ground_1.iridium << "\n";
//		cout << "Palladium: \t" << ground_1.palladium << "\n";
//		cout << "Platinum: \t" << ground_1.platinum << "\n";
//		cout << "Danger: \t" << ground_1.danger << "\n\n";
//
//		cout << ground_1.getcomposition() << "\n";
//		cout << ground_1.getdanger() << "\n";
//
//		xartisedafous[i] = ground_1;
//
//
//		/*cout << xartisedafous[i].getiridium() << "\n";
//		cout << xartisedafous[i].getpalladium() << "\n";
//		cout << xartisedafous[i].getplatinum() << "\n";
//		cout << xartisedafous[i].getdanger() << "\n";*/
//
//	}
//
//	Dimiourgia kai arxikopoiisi twn analysers
//	for (int j = 1; j <= 5; j++)
//	{
//
//	}
//
//	Dimiourgia kai arxikopoiisi twn explorers
//	for (int j = 1; j <= 5; j++)
//	{
//
//	}
//
//	Dimiourgia kai arxikopoiisi twn rescuers
//	for (int j = 1; j <= 5; j++)
//	{
//
//	}
//
//	/*for (int j = 0; j < 10; j++)
//	{
//		cout << "xartis edafous:" << j << "\n";
//		cout << xartisedafous[j].getiridium() << "\n";
//		cout << xartisedafous[j].getpalladium() << "\n";
//		cout << xartisedafous[j].getplatinum() << "\n";
//		cout << xartisedafous[j].getdanger() << "\n";
//	}*/
//	
//	
//	
//
//	xartisedafous.insert(std::pair<int, ground>(1, ground_1));
//	xartisedafous[1] = ground_1;
//	cout << xartisedafous[1].getiridium() << "\n";
//	cout << xartisedafous[1].getdanger() << "\n";	
//	cout << xartisedafous[pair(0, 0)]->getdanger();


	cout<<  "################################################\n";
	cout<<  "# *                                            #\n";
	cout<<  "#_|_ ________                                  #\n";
	cout<<  "#|=|/     /  \\                                 #\n";
	cout<<  "#| |_____|____|                                #\n";
	cout<<  "#|_|_____|[--]|                                #\n";
	cout<<  "#----------------------------------------------#\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "#                                              #\n";
	cout<<  "################################################\n";


	//system("PAUSE");
	return 0;
}




