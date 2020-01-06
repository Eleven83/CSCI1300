/*
Author: Ryan Hoffman
TA: Stephen Hutt
Recitation 9
*/
#include <iostream>
#include <string>

using namespace std;

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

class battleShip{
	public:
		battleShip(string);//ctor
		~battleShip();//dtor

		void setShipName(string);
		string getShipName();

		void setSize(int);
		int getSize();

		void recordHit();
		bool isSunk();

	private:
		string shipName;
		int new_size;
		int hits;
};
#endif // BATTLESHIP_H
