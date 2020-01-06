#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    int numbers;
    int size=0;
    int number;
    string filename;
    ifstream infile;
//open file for reading

     infile.open("Recitation9_Input.txt");

     //if file not exists display error message

     if(infile.fail())

     {

          cout<<"File not existed"<<endl;

          system("pause");

          return 0;

     }

     //reading file until it has some data

     while(infile>>number)

     {

          //incrementing number of records
 size++;

     }

     //closing file

     infile.close();
         //allocating memory

     if(size!=0)

         numbers = new int[size];

     else

     {

          cout<<"No numbers are stored "<<endl;

          system("pause");

          return 0;

     }

     //open file again

     infile.open(filename,ios::in);

     //read file data into array

     for(int i=0;i<size;i++)
{

          infile>>numbers[i];

     }

     //displaying output

     cout<<"The "<<size<<" recorded scores are: "<<endl;

     for(int i=0;i<size;i++)

          cout<<numbers[i]<<endl;

     //to pause the output screen

     system("pause");

     return 0;

}
