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
	int a,i,j,x,y;
        int g = 0;
        int z = 0;
        char c;
        bool flag;
        
	string comp;
        char array[10][46];
        typedef pair <int , int> position;

	Base* main_base = new Base();

        //Dimiourgia tou hashmap
	map< position  , Ground> xartisedafous;
	Ground ground_1;

        //Dimiourgia ton zitoumenon vectors
	vector<Analyzer*> oximata_analyzer;
        vector<Explorer*> oximata_explorer;
        vector<Rescue*> oximata_rescue;
        
        Analyzer* oxima_analyzer = new Analyzer();
        Rescue* oxima_rescue = new Rescue();
        Explorer* oxima_explorer = new Explorer();
        
        //Gemisma ton vectors me antikeimena
        for(int i=1; i<=5; i++)
        {
            cout << i ;            
            oximata_analyzer.push_back(oxima_analyzer);
            oxima_analyzer[i].setXY((rand()%10 +1), (rand()%46 +1));                   
            //elegxos an h tuxaia 8esh tautizetai me 8esh allou oxhmatos
            if (i>1)
            {
                for (int j = i-1; j >= 1; j--)
                {
                    
                        while((oxima_analyzer[i].getX() == oxima_analyzer[j].getX()) && (oxima_analyzer[i].getY() == oxima_analyzer[j].getY()))
                        {
                            //cout << i ;
                            //cout << "************analyzer position: **************" << oxima_analyzer[i].getX() << " , " << oxima_analyzer[i].getY()<< endl;
                        oxima_analyzer[i].setXY((rand()%10 +1), (rand()%46 +1));
                        g++;
                        }
                 }            
            }
            //cout << "************analyzer position: **************" << oxima_analyzer[i].getX() << " , " << oxima_analyzer[i].getY()<< endl;
            
        }
        
        //cout << "Conflicts analyzers: " << g << endl;
        
        for(i=1;i<=5;i++)
        {
            
            oximata_rescue.push_back(oxima_rescue);
            oxima_rescue->setXY(rand()%10 +1, rand()%46 +1);
            //elegxos an h tuxaia 8esh tautizetai me 8esh allou oxhmatos
            if (i>1)
            {
                for (int j = i-1; j >= 1; j--)
                {                    
                    while((oxima_rescue[i].getX() == oxima_rescue[j].getX()) && (oxima_rescue[i].getY() == oxima_rescue[j].getY()))
                    {
                             //cout << i ;
                             //cout << "rescue position conflict with rescue:\t" << oxima_rescue[i].getX() << " , " << oxima_rescue[i].getY()<< endl;
                             oxima_rescue[i].setXY((rand()%10 +1), (rand()%46 +1));
                             z++;
                     }
                }
              }
                                for (int k = 1; k <=5; k++)
                                        {
                                      int tempx_1=oxima_rescue[i].X, tempx_2=oxima_analyzer[k].X, tempy_1=oxima_rescue[i].Y, tempy_2=oxima_analyzer[k].Y;
                                        //while((oxima_rescue[i].X == oxima_analyzer[k].X) && (oxima_rescue[i].Y == oxima_analyzer[k].Y))
                                      cout << endl;
                                      cout << tempx_1 << "\n" << tempx_2 << endl;
                                      cin >> c ;
                                      if((tempx_1 == tempx_2) && (tempy_1 == tempy_2)){flag =  true;}
                                      while(flag == true)
                                                {
                                                //cout << i ;
                                                cout << "CONFLICT: rescue position with rescuers:\t" << oxima_rescue[i].getX() << " , " << oxima_rescue[i].getY()<< endl;
                                                cout << "CONFLICT: rescue position with analyzers:\t" << oxima_analyzer[i].getX() << " , " << oxima_analyzer[i].getY()<< endl;
                                                cin >> c ;
                                                oxima_rescue[i].setXY((rand()%10 +1), (rand()%46 +1));
                                                z++;
                                                }    
                                        }                      
                        
                       
            cout << "rescue position:\t" << oxima_rescue[i].getX() << " , " << oxima_rescue[i].getY()<< " "<< i<< endl;
            }
            
  
        cout << "Conflicts rescuers: " << z << endl;
       
        
        
        
        for(i=0;i<=4;i++)
        {
            
            oximata_explorer.push_back(oxima_explorer);
            oxima_explorer->setXY(rand()%10 +1, rand()%46 +1);
            //cout << "************explorer position: **************" << oxima_explorer->getX() << " , " << oxima_explorer->getY()<< endl;
        }
        
        
        
        
        
	//Dimiourgia kai arxikopoiisi twn simeiwn tou xarti 
	for (i = 1; i <= 10; i++)
	{
		for(j = 1;j<=46;j++)	{
                        ground_1.danger = float(rand() % 90) / 100;
                        ground_1.iridium = (rand() % 150) + 1;
                        ground_1.palladium = (rand() % 150) + 1;
                        ground_1.platinum = (rand() % 150) + 1;

//                        cout << "vasiko set up:" << i << "\n";
//                        cout << "Iridium: \t" << ground_1.iridium << "\n";
//                        cout << "Palladium: \t" << ground_1.palladium << "\n";
//                        cout << "Platinum: \t" << ground_1.platinum << "\n";
//                        cout << "Danger: \t" << ground_1.danger << "\n\n";

                        //cout << ground_1.getcomposition() << "\n";
                        //cout << ground_1.getdanger() << "\n";
                      
                        xartisedafous[position(i,j)] = ground_1;


//                        cout << xartisedafous[position(i,j)].getiridium() << "\n";
//                        cout << xartisedafous[position(i,j)].getpalladium() << "\n";
//                        cout << xartisedafous[position(i,j)].getplatinum() << "\n";
//                        cout << xartisedafous[position(i,j)].getdanger() << "\n";
                }
	}
        
        //array[2][12] = e;
//        for(int i=0;i<5;i++)
//        {
//                oxima_analyzer[i].setXY(); 
//        }
                

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

      //  do{
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
	cout<<  "################################################\n";
        
        
       // }while(main_base->gettotal()<1200);
    //11x46
	//system("PAUSE");
	return 0;
}




