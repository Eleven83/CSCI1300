/*
Author: Ryan Hoffman
TA: Stephen Hutt
Recitation 9
*/
#include <iostream>
#include <string>
#include "battleShip.h"
#include "battleShip.cpp"

using namespace std;

int main(){
	//TODO: Declare 3 instances of the battleship class: Destroyer Carrier Cruiser
    battleShip shipOne("Destroyer");
    battleShip shipTwo("Carrier");
    battleShip shipThree("Cruiser");

	//TOD0: Give the ships a size: Destroyer-3 Carrier-5 Cruiser-2
	// you will need to call the appropriate methods
    shipOne.setSize(3);
    shipTwo.setSize(5);
    shipThree.setSize(2);

	// Once you have this running for one, expand this while loop to include the other
	// two instances. Have the while loop end when all three ships have been sunk
	while((shipOne.isSunk()==false)&&(shipTwo.isSunk()==false)&&(shipThree.isSunk()==false)){
            while(shipOne.isSunk()==false){
                shipOne.recordHit();
                if(shipOne.isSunk()==true){
                    cout<<shipOne.getShipName()<<" IS DEAD!\n"<<endl;
                }
            }
            while(shipTwo.isSunk()==false){
                shipTwo.recordHit();
                if(shipTwo.isSunk()==true){
                    cout<<shipTwo.getShipName()<<" IS DEAD!\n"<<endl;
                }
            }
            while(shipThree.isSunk()==false){
                shipThree.recordHit();
            if(shipThree.isSunk()==true){
                    cout<<shipThree.getShipName()<<" IS DEAD!\n"<<endl;
                }
            }
    }
    cout<<endl<<"*****************"<<endl<<
                "*               *\n"<<
                "*               *\n"<<
                "*   GAME OVER   *"<<endl<<
                "*               *\n"<<
                "*               *\n"<<
                "*****************";
}
