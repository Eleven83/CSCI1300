/*
Author: Ryan Hoffman
TA: Stephen Hutt
Recitation 9
*/
#include "battleShip.h"

using namespace std;

battleShip::battleShip(string name){
    shipName=name;
    hits=0;
}
battleShip::~battleShip(){
    //dtor
}
void battleShip::setShipName(string name){
    shipName=name;
}
string battleShip::getShipName(){
    return shipName;
}
void battleShip::setSize(int size){
    new_size=size;
}
int battleShip::getSize(){
    return new_size;
}
void battleShip::recordHit(){
    hits++;
    cout<<shipName<<" has been hit!"<<endl;
}
bool battleShip::isSunk(){
    if(hits==new_size){
        return true;
    }
    return false;
}


