// Author: CS1300 Fall 2017
// Recitation: 103 Stephen Hutt
//
// Assignment 3

#include <iostream>
#include <string>
using namespace std;

string story1(string pnoun, string occupation, string animal, string place){

    string bam1 = "In the book War of the <PLURAL NOUN>";
    string bam2 = ", \nthe main character is an anonymous <OCCUPATION>";
    string bam3 = " \nwho records the arrival of <ANIMAL>s";
    string bam4 = " in <PLACE>.\n";

    cout<<"Enter a plural noun: "<<cout<<endl;
    cin>>pnoun;
    cout<<"Enter an occupation: "<<cout<<endl;
    cin>>occupation;
    cout<<"Enter an animal name: "<<cout<<endl;
    cin>>animal;
    cout<<"Enter a place: "<<cout<<endl;

    int i = 0;
    while(i<bam1.length()){
        if (bam1[i]=){
            bam1 = bam1.replace(i, pnoun);
        }
    }
    int j = 0;
    while(j<bam2.length()){
        if (bam2[j]=='<'){
            bam2 = bam2.replace(i, occupation);
        }
    }
    int k = 0;
    while(k<bam3.length()){
        if (bam3[k]=='<'){
            bam3 = bam3.replace(i, animal);
        }
    }
    int l = 0;
    while (l<bam4.length()){
        if (bam4[l]=='<'){
            bam4 = bam4.replace(i, place);
        }
    }
    return bam1+bam2+bam3+bam4;

}
string story2();
string story3();

string menu(char userChoice){

    char x = 1, y = 2, z = 3;
    cout<<"Which story would you like to play? Enter the number of the story (1, 2, or 3) or type q to quit: "<<endl;
    cin>>userChoice;
    if (userChoice = 1){
        story1();
    }
    if (userChoice = 2){
        story2();
    }
    if (userChoice = 3){
        story3();
    }
    if (userChoice == q){
        cout<<"good bye"<<endl;
    }
    else{
        cout<<"Valid choice not selected."<<endl;
    }

}


int main() {


menu();

}

