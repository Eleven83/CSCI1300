#include "planet.h"
#include <math.h>

planet::planet(){
}

planet::planet(string planetName, float planetRadius, float planetDist){
	name = planetName;
	radius = planetRadius;
	distance = planetDist;
}

planet::~planet(){
	//letting compiler handle deconstruction of the class
}

void planet::setName(string planetName){
	name = planetName;
}

string planet::getName(){
	return name;
}

void planet::setRadius(float planetRadius){
	radius = planetRadius;
}

float planet::getDiameter(){
	return 2*radius;
}

void planet::setDist(float planetDist){
	distance = planetDist;
}

float planet::getDist(){
	return distance;
}

float planet::getOrbitPeriod(){
	// Kepler's 3rd Law:
	// The square of the orbital period of a planet is proportional to the cube of its orbital distance.

	// P*P = A*A*A: [P] = years, [A] = Astronomical Units,
	// With these units, the constant of proportionality is 1. (only true for our Solar System)
	// see also: http://spiff.rit.edu/classes/phys440/lectures/kepler3/kepler3.html

	return sqrt(distance*distance*distance);
}
