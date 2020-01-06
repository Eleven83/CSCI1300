/*  CSCI 1300
    Recitation 10
    TA: Stephen Hutt
    Author: Ryan Hoffman
*/
#ifndef PLANET_H
#define PLANET_H

#include <string>
#include <iostream>

using namespace std;

class planet{
	public:
		planet();
		planet(string, float);
		string getName();
		void setName(string);
        float getRadius();
        void setRadius(float);
        ~planet();

	private:
	    string name;
	    float radius;
};
#endif // PLANET_H

