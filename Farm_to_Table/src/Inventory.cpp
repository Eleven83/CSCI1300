////////////////////////////////
//  UNIVERSITY OF COLORADO    //
//  CSCI 1300                 //
//  INSTRUCTOR: DR. KNOX      //
//  TA: STEPHEN HUTT          //
//  ASSIGNMENT 8/C++ PROJECT  //
//  AUTHOR: Ryan A. Hoffman   //
////////////////////////////////
#include "Inventory.h"

using namespace std;

Inventory::Inventory()
{
    id=0;
    name="";
    cost=0.00;
    units=0;
}

void Inventory::getItems()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Cost: $"<<setprecision(2)<<fixed<<cost<<" each"<<endl;
    cout<<"Units: "<<units<<endl;
}

void Inventory::setItems()
{
    cout<<"Enter the item id: ";
    cin>>id;
    cin.ignore();
    cout<<"Enter the item name: ";
    getline(cin, name);
    cout<<"Enter the cost (ex: 3.50): ";
    cin>>cost;
    cout<<"Enter the number of units: ";
    cin>>units;
    cout<<endl;
}
Inventory::~Inventory()
{
    //dtor
}
