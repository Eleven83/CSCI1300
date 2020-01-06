#include <iostream>
using namespace std;

int main(){
    int current_population, future_population;
    cout<<"The Current Population is 307,357,870."<<endl;
    int populationRate, birthRate, deathRate, immigrationRate, day;
    day = 86400;
    birthRate = (1/7) * day;
    deathRate = (1/13) * day;
    immigrationRate = (1/35) * day;
    current_population = 307357870;
    populationRate = (birthRate + immigrationRate)-deathRate;
    future_population = current_population+(populationRate * 365);
    cout<< "The population in one year will be "<<future_population<<endl;

    int hours, minutes, seconds;
    cout << "Enter a number between 0 and 86400: ";
    cin >> seconds;
    //Take in amount of seconds and output time in 24 hour format
    //The makeChange example we did in class helped a little.
    hours = seconds/3600;
    minutes = seconds/60;
    seconds = seconds;
    //This took so much trial and error...
    cout<<"The time is "<<hours<<" hours "<<minutes%60<<" minutes and "<<seconds%60<<"seconds"<<endl;


    int fahrenheit, celsius, result;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    //Take in the F temp and output the Celsius
    celsius = (fahrenheit -32) / 1.8;
    result = celsius;
    cout << "The temperature in Celsius is "<<celsius<<" degrees."<<endl;
    return 0;
}
