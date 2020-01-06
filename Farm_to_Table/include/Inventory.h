////////////////////////////////
//  UNIVERSITY OF COLORADO    //
//  CSCI 1300                 //
//  INSTRUCTOR: DR. KNOX      //
//  TA: STEPHEN HUTT          //
//  ASSIGNMENT 8/C++ PROJECT  //
//  AUTHOR: Ryan A. Hoffman   //
////////////////////////////////
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <iomanip>

using namespace std;

class Inventory
{
    public:
        Inventory();
        ~Inventory();
        void getItems();
        void setItems();
        int units;
    private:
        int id;
        string name;
        double cost;
};

#endif // INVENTORY_H
