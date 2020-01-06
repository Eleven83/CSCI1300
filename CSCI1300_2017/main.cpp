// Author: CS1300 Fall 2017
// Recitation: 103 Stephen Hutt
//
// Assignment 2

#include <iostream>

using namespace std;

/**
 * Algorithm that takes the current US population as input and
 * calculates the US population in exactly one year(365 days).
 * Outputs AND returns the result.
 */
int howMany(int current_pop) {
    int sec_per_day = 86400;
/*    float bRate = (sec_per_day/8);
    float dRate = (sec_per_day/12);
    float iRate = (sec_per_day/33);
*/
    int births = 365 * sec_per_day * 1/8;
    int deaths = 365 * sec_per_day * 1/12;
    int immigrants = 365* sec_per_day * 1/33;
    if (current_pop>=0)
            current_pop = current_pop+births-deaths+immigrants;
        return current_pop;
}



/**
 * Algorithm that takes a given number of seconds in a range of 0 to 1,000,000
 * and outputs the time as days, hours, minutes, and seconds for a 24 hour clock
 */

void howLong(int sec){
    int days;
    int hours;
    int minutes;
    int seconds;

    if(sec<0){
        sec=0;
    }

    if ((sec>86399)&&(sec<=1000000)){
        days = (sec/86400);
        hours = (sec/3600)%24;
        minutes = (sec%3600)/60;
        seconds = (sec%3600)%60;
        cout <<"Time is "<< days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds." << endl;
    }
    if ((sec>=0)&&(sec<=86399)){
        days = 0;
        hours = (sec/3600);
        minutes = (sec%3600)/60;
        seconds = (sec%3600)%60;
        cout <<"Time is "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds." << endl;
    }


}

/**
 * Algorithm that converts a given Celsius temperature to Fahrenheit and returns it.
 *
 */

int howHot(int temperature) {
    float x = 1.8;
    temperature = x*temperature+32;
    return temperature;
}

int main() {
    //calling the function
    int current_pop = 0;
    cout << "Given the initial population of " << current_pop;
    cout << " your estimation finds a population of ";
    cout << howMany(current_pop) << "."<< endl;
    cout << "" <<endl;

    //calling the function
    int sec = 1000000;
    cout << "Given the seconds value of " << sec;
    cout <<""/* " your output is: " */<< endl;
    howLong(sec);
    cout << "" <<endl;

    //calling the function
    int temp = -1;
    cout << "Given temperature " << temp;
    cout << " degrees Celsius you calculate ";
    cout << howHot(temp) << " degrees Fahrenheit." << endl;
    return 0;

}
