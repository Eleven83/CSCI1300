//GIVEN FILE
/*  CSCI 1300
    Recitation 10
    TA: Stephen Hutt
    Author: Ryan Hoffman
*/
#ifndef SOLAR_SYSTEM_H
#define SOLAR_SYSTEM_H

#include <string>
#include <iostream>
#include "planet.h"

using namespace std;

class solarSystem{
	public:
		solarSystem(string);
		~solarSystem();
		void setName(string);
		string getName();			// returns the name of the solar system
		void setNumPlanets(int);
		int getNumPlanets();		// returns the number of planets in the system
		bool addPlanet(string, float);	//Adds a single planet to solar system
        planet getPlanet(int);  	// return an object of planet at provided index
        float radiusDifference(planet, planet); //calculates difference in radius between two planets

	private:
		int maxNumPlanets = 10;
		string systemName;
		int numPlanets;
		planet systemPlanets[10]; // array of object planet, each object is a planet
        string line[50];
};
#endif // SOLAR_SYSTEM_H
