////////////////////////////////
//  UNIVERSITY OF COLORADO    //
//  CSCI 1300                 //
//  INSTRUCTOR: DR. KNOX      //
//  TA: STEPHEN HUTT          //
//  ASSIGNMENT 8/C++ PROJECT  //
//  AUTHOR: Ryan A. Hoffman   //
////////////////////////////////
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>

using namespace std;

class Restaurant
{
    public:
        Restaurant();
        int mainMenu();
        int getUser();
        void setUser(int);
        int hostess();
        int server();
        int chef();
        int manager();
        void customerOrder();
        void showReceipt();
        ~Restaurant();
        int choice;
    private:
        int tableNum;
        int partySize;
        unsigned seed;
        string order[10];
        int drinkOrder;
        int foodOrder;
        int mgrOpt;
        int srvrOpt;
        int userChoice;
        char endPrg;

};

#endif // RESTAURANT_H
