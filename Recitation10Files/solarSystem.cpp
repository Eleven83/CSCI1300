/*  CSCI 1300
    Recitation 10
    TA: Stephen Hutt
    Author: Ryan Hoffman
*/
#include "planet.h"
#include "solarSystem.h"
#include <math.h>

solarSystem::solarSystem(string name){
    systemName=name;
}

    //dtor
solarSystem::~solarSystem(){
}

string solarSystem::getName(){
    return systemName;
}

int solarSystem::getNumPlanets(){
    return numPlanets;
}

bool solarSystem::addPlanet(string planetName, float planetRadius){
}

planet solarSystem::getPlanet(int planetNum){
    return systemPlanets[planetNum];
}

float solarSystem::radiusDifference(planet p1, planet p2){
    float difference=fabs(p1.getRadius()-p2.getRadius());
    return difference;
}
