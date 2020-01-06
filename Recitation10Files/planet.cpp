//GIVEN FILE
/*  CSCI 1300
    Recitation 10
    TA: Stephen Hutt
    Author: Ryan Hoffman
*/
#include "planet.h"
#include "solarSystem.h"

    //default ctor
planet::planet(){
}

    //ctor
planet::planet(string planetName, float planetRadius){
	name = planetName;
	radius = planetRadius;
}

    //dtor
planet::~planet(){
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

float planet::getRadius(){
	return radius;
}
