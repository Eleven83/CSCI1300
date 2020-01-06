////////////////////////////////
//  UNIVERSITY OF COLORADO    //
//  CSCI 1300                 //
//  INSTRUCTOR: DR. KNOX      //
//  TA: STEPHEN HUTT          //
//  ASSIGNMENT 8/C++ PROJECT  //
//  AUTHOR: Ryan A. Hoffman   //
////////////////////////////////
#include "Restaurant.h"
#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//Constructor that initializes some data members.
Restaurant::Restaurant()
{
    partySize=0;
    userChoice=0;
    endPrg=' ';
    seed=time(0);
    tableNum=0;
}
//Getter function for the usertype
int Restaurant::getUser()
{
    return choice;
}

//Setter function for the usertype
void Restaurant::setUser(int userNum)
{
    choice=userNum;
}
//Function that displays a main menu with specific choices for each user.
int Restaurant::mainMenu()
{
    char mainOut=' ';
    bool exOut=true;
    cout<<"\n    Welcome to Farm to Table Point of Sale System (P.O.S.)"<<endl;
    cout<<"    ______________________________________________________\n"<<endl;
    cout<<" Choose your user type: "<<endl;
    cout<<"1) Hostess"<<endl;
    cout<<"2) Server"<<endl;
    cout<<"3) Chef"<<endl;
    cout<<"4) Manager"<<endl;
    cout<<"5) Exit the program"<<endl;
    cin>>userChoice;
    while(exOut)
    {
        switch(userChoice)
        {
            case 1:
                hostess();
                exOut=false;
                break;
            case 2:
                server();
                exOut=false;
                return false;
                break;
            case 3:
                chef();
                exOut=false;
                break;
            case 4:
                manager();
                exOut=false;
                break;
            case 5://If the user enters anything other than 'y' return to the main menu.
                cout<<"Are you sure you want to exit?(Enter 'y' or 'n'): "<<endl;
                cin>>mainOut;
                mainOut=toupper(mainOut);
                if(mainOut!='Y')
                {
                    exOut=false;
                    system("CLS");
                    mainMenu();
                    break;
                }else
                {
                    return 0;
                    break;
                }
            default:
                cout<<"You entered an incorrect choice. Try again."<<endl;
        }
    }
    return 0;
}
//Function for the hostess to enter the party size.
int Restaurant::hostess()
{
    system("CLS");
    cout<<"\nHello, Hostess. Please follow instructions below."<<endl;
    cout<<"How many guests are in the party: "<<endl;
    cin>>partySize;
    cout<<"Got it! "<<partySize<<" guest(s)."<<endl;
    cout<<"Have them follow you to the table and wait for the server."<<endl;
    cout<<"__________________________________________________________\n"<<endl;
    cout<<"Type any key to return to the main menu: "<<endl;
    cin>>endPrg;
    endPrg=toupper(endPrg);
    switch(endPrg)
        {
            default:
                system("CLS");
                mainMenu();
        }
    return 0;
}
//Function that assigns a table to the new party and allows the server to enter a customer's order and print a receipt
int Restaurant::server()
{
    system("CLS");
    tableNum=1+rand()%10;
    cout<<"\nHello, Server. Please follow the instructions below."<<endl;
    if(partySize<1)
    {
        cout<<"Hostess has not entered any guests. Please return to the main menu."<<endl;
        cout<<"________________________________________________________________\n"<<endl;
    }else
    {
        cout<<"You have a party of "<<partySize<<" at table "<<tableNum<<endl;
        bool open=true;
        while(open)
        {
            cout<<"Choose from the following options: "<<endl;
            cout<<"1) Enter customer order"<<endl;
            cout<<"2) Print customer receipt"<<endl;
            cout<<"3) Return to the Main Menu"<<endl;
            cin>>srvrOpt;
            switch(srvrOpt)
            {
                case 1:
                    customerOrder();
                    break;
                case 2:
                    showReceipt();
                    break;
                default:
                    open=false;
            }
        }
    }
    cout<<"Type any key to return to the main menu: "<<endl;
    cin>>endPrg;
    system("CLS");
    endPrg=mainMenu();
    return 0;
}
//Function that takes the customer's order and writes it to a text file.
void Restaurant::customerOrder()
{
    fstream dataFile;
    dataFile.open("Receipt.txt", ios::out);
    for(int i=0; i<partySize; i++)
    {
        cout<<"Enter the DRINK order number for Customer "<<i+1<<""<<endl;
        cout<<"1) Water"<<endl;
        cout<<"2) Soda"<<endl;
        cout<<"3) Beer"<<endl;
        cin>>drinkOrder;
        switch(drinkOrder)
        {
            case 1:
                order[i]="Water..........$0.00";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            case 2:
                order[i]="Soda..........$1.50";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            case 3:
                order[i]="Beer..........$3.50";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            default:
                cout<<"Incorrect number. Please try again."<<endl;
        }
        cout<<endl;
        cout<<"Enter the FOOD order number for Customer "<<i+1<<endl;
        cout<<"4) Ugly Burger"<<endl;
        cout<<"5) Spaghetti for Two (but really just for one!)"<<endl;
        cout<<"6) Steak and Spud"<<endl;
        cin>>foodOrder;
        switch(foodOrder)
        {
            case 4:
                order[i]="Ugly_Burger..........$7.50";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            case 5:
                order[i]="Spaghetti..........$19.50";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            case 6:
                order[i]="Steak_Combo..........$23.50";
                dataFile<<order[i];
                dataFile<<endl;
                break;
            default:
                cout<<"Incorrect number. Please try again."<<endl;
        }
    }
    dataFile.close();
}
//Function that reads the customer's order from a text file and prints that info.
void Restaurant::showReceipt()
{
    fstream dataFile;
    dataFile.open("Receipt.txt", ios::in);
    cout<<"\nNow printing the receipt...\n"<<endl;
    cout<<"********************************"<<endl;
    cout<<"    Customer Receipt:"<<endl;
    cout<<"    _________________\n"<<endl;
    string line;
    while(dataFile>>line)
    {
        cout<<"    "<<line<<endl;
    }
    cout<<"\n********************************"<<endl;
    dataFile.close();
}
//Function that lets the chef add, change or delete inventory.
int Restaurant::chef()
{
    system("CLS");
    cout<<"Hello, Chef."<<endl;
    cout<<"\n Inventory set up: "<<endl;
    Inventory item[20]; //Object array for storing up to 20 inventory items
    int n, i;
    cout<<" Enter the number of inventory items you want to add(1-20):"<<endl;
    cin>>n;
    if(n<1||n>20)
    {
        cout<<" Number must be between 1-20."<<endl;
        return 0;
    }else
    {
        for(i=0; i<n; i++)
        {
            item[i].setItems();
        }
    }
    cout<<" There are currently "<<n<<" items in your inventory:"<<endl;
    for(i=0; i<n; i++)
    {
        item[i].getItems();
    }
    cout<<"________________________________________________________________\n"<<endl;
    cout<<"Type any key to return to the main menu: "<<endl;
    cin>>endPrg;
    endPrg=toupper(endPrg);
    switch(endPrg)
    {
        default:
            system("CLS");
            mainMenu();
            break;
    }
}
//Function that lets the manager add inventory, call staff meeting or close the restaurant.
int Restaurant::manager()
{
    system("CLS");
    mgrOpt=0;
    bool exOut=true;
    cout<<"Hello, Manager. Please choose from the following options: "<<endl;
    cout<<"1) Create inventory"<<endl;
    cout<<"2) Schedule a staff meeting"<<endl;
    cout<<"3) Close the Restaurant"<<endl;
    cin>>mgrOpt;
    while(exOut)
    {
        switch(mgrOpt)
        {
            case 1:
                {
                    cout<<"\n Inventory set up: "<<endl;
                    Inventory item[20]; //Object array for storing up to 20 inventory items
                    int n, i;
                    cout<<" Enter the number of inventory items you want to add(1-20):"<<endl;
                    cin>>n;
                    if(n<1||n>20)
                    {
                        cout<<" Number must be between 1-20."<<endl;
                        return 0;
                    }else
                    {
                    for(i=0; i<n; i++)
                    {
                        item[i].setItems();
                    }
                    }
                    cout<<" There are currently "<<n<<" items in your inventory:"<<endl;
                    for(i=0; i<n; i++)
                    {
                        item[i].getItems();
                    }
                }
                cout<<"________________________________________________________________\n"<<endl;
                cout<<"Type any key to return to the main menu: "<<endl;
                cin>>endPrg;
                endPrg=toupper(endPrg);
                switch(endPrg)
                {
                    default:
                        system("CLS");
                        mainMenu();
                        break;
                }
                exOut=false;
                break;
            case 2:
                cout<<"ATTENTION ALL STAFF: "<<endl;
                cout<<"____________________"<<endl;
                cout<<"\nPre-work staff meeting will be held at 10am on Friday morning."<<endl;
                cout<<"________________________________________________________________\n"<<endl;
                cout<<"Type any key to return to the main menu: "<<endl;
                cin>>endPrg;
                endPrg=toupper(endPrg);
                switch(endPrg)
                {
                    default:
                        system("CLS");
                        mainMenu();
                        break;
                }
                exOut=false;
                break;
            case 3:
                cout<<"The restaurant is now closed! Everyone go home!"<<endl;
                cout<<"________________________________________________________________\n"<<endl;
                cout<<"Type any key to return to the main menu: "<<endl;
                cin>>endPrg;
                endPrg=toupper(endPrg);
                switch(endPrg)
                {
                    default:
                        system("CLS");
                        mainMenu();
                        break;
                }
                exOut=false;
                break;
            default:
                cout<<"You have entered an invalid choice. Try again."<<endl;
                cin>>mgrOpt;
                system("CLS");
        }
    }
}
//Destructor
Restaurant::~Restaurant()
{
    //dtor
}
