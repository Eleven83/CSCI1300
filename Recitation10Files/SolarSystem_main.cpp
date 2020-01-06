//GIVEN FILE
/*  CSCI 1300
    Recitation 10
    TA: Stephen Hutt
    Author: Ryan Hoffman
*/
#include <iostream>
#include "planet.h"
#include "solarSystem.h"
#include <math.h>

using namespace std;


/*
    This function implements the logic to find the difference between the radius
    of all the planets in the system.

    Notes:
        * having more or less outputs means that your logic is not quite correct.
        * do not hard code the cout statements; use a smart logic instead.
        * use fabs() to compute the absolute value of the difference (do it either in your implementation of
          radiusDifference(planet,planet) or use it after you return the function call to radiusDifference(planet,planet)
        * your output should have the following structure:
            cout<<"Radius difference between planet " <<   <<" and planet "<<   <<" is => "<<   <<endl;
        * for 5 planets you should have 10 outputs.

*/

void compareRadii(solarSystem mySolarSystem, int num_of_planets){
    for(int i=0; i<num_of_planets; i++){
        for(int j=i+1; j<num_of_planets; j++){
            cout<<"Radius difference between planet "<<p1.getName()<<" and planet"
            <<p2.getName()<<" is => "<<planet.radiusDifference(p1, p2)<<endl;
        }
    }
}

int main(){

    /* 1) Ask the user to create a solar system by prompting him for 5 instances
     of type Planet. You will ask the user for name and radius of each
     Planet. Each object will have to have a unique name.

     Notes and hints:
        * you can use getline() to make the process faster
        * if you use getline use a smart delimiter to process name and radius in one user input
        * make sure to check if name already exists. If it does, ask the user to enter another name.
     */

    int i;
    int j=5;
    bool unique;
    string name;
    string radius;

    solarSystem mySystem ("my solar system");
    for(i=0; i<j; i++){
        cout<<"Create a new planet with the format: name, radius" << endl;
        getline(cin, name, ',');
        getline(cin, radius);
        unique=mySystem.addPlanet(name, stof(radius));
        if(!unique){
            cout<<"That name is already taken, try again"<<endl;
            i++;
        }else{
            cout<<"Added planet named: "<<name<<", with a radius of: "<<radius<<endl;
        }
    }

    // Use the following snippet of code to test that you filled your system correctly
    // !!NOTE: here "<obj_of_type_solarSystem>" is a placeholder you should use the name
    //  of your solarSystem instance created (hopefully) above.

    i=0;
    int num_of_planets=mySystem.getNumPlanets();

    if(num_of_planets<5){
        cout<<"Your system has less than 5 planets!"<<endl;
    }
    while(i<num_of_planets){
        cout << "This is planet " <<i<< " with name: " <<mySystem.getPlanet(i).getName()<<
        " and radius: "<<mySystem.getPlanet(i).getRadius()<<endl;
        i++;
    }

    /* 2) Add the method radiusDifference(...) to the SolarSystem class. This method
     takes two objects of type Planet and returns the difference of their
     radius. Develop a logic to return the difference among all the planets in a
     function called compareRadii(...) that takes two parameters, a solarSystem and the
     number of planets in the system. You can find the function definition above
     the main. Once you are done implementing it call it.

     */


    // !!NOTE: here "<obj_of_type_solarSystem>" and "<num_of_planets> are placeholders
    // you should use the name of your solarSystem instance created (hopefully) above
    // and the number of planets currently in the solarSystem

    compareRadii(mySystem, 5)

    return 0;
}
