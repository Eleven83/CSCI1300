/*
Author: Ryan Hoffman
TA: Stephen Hutt
Recitation 9
*/
#include <iostream>
#include <string>

using namespace std;

#ifndef SOLAR_SYSTEM_H
#define SOLAR_SYSTEM_H

class solarSystem{
	public:
		solarSystem(string);
		~solarSystem();

		bool addPlanet(string, float, float);
        string getName();		// return the name of the solar system
		int getNumPlanets();	// return the number of planets in the system
        string findLargest();	// return the name of the largest planet
		float getDiameter();	// return the diameter of the largest orbit

	private:
		int maxNumPlanets = 10;
		string systemName;
		int numPlanets;
		string planetNames[10];
		float planetDiameters[10];
		float planetOrbitDist[10];
};
#endif // SOLAR_SYSTEM_H
