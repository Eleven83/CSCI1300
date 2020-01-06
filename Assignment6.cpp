/*
Author: Ryan Hoffman
TA: Stephen Hutt
Assignment 6
*/

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>

using namespace std;

float avgCharsPerLine(string filename)
{
ifstream myFile.open(filename);
if (myFile.fail())
{
return 0;
}
float num_line = 0;
float num_char = 0;
string line;
while(!myFile.eof())
{
getline(myFile, line);
num_line++;
num_char=num_char + line.length();
}
myFile.close();
return num_char/num_line;
}
int fillArray(string filename, float array[][5])
{
ifstream myFile.open(filename);
if (myFile.fail())
{
return 0;
}
int count=0;
string line;
getline(myFile,line);
while(!inStream.eof())
{
getline(myFile, line);
string temp_num ="";
int j =0;
for(int i=0; i<line.length(); i++)
{
if(line[i] !=',' && line[i] != ' ')
{
temp_num=temp_num + line[i];
}
if(line[i] == ',' || i==line.length()-1)
{
array[count][j]=stof(temp_num);
j++;
temp_num ="";
}
}
count++;
}
myFile.close();
return count;
}
float arrayStats(string filename, float numbers[][5])
{
int num_row=fillArray(filename, numbers);
float arr_mean[num_row];
int i=0;
float temp_sum=0;
for(int column=1; column<5; column=column+2)
{
for (int row=0; row<num_row; row++)
{
temp_sum = temp_sum+numbers[row][column];
}
arr_mean[i] = temp_sum / num_row;
temp_sum = 0;
i++;
}
for(int row = 1; row<num_row; row=row+2)
{
for(int column=0; column<5; column++)
{
temp_sum=temp_sum+numbers[row][column];
}
arr_mean[i]=temp_sum/5;
temp_sum = 0;
i++;
}
float sum=0;
for(int j=0; j<i; j++)
{
sum=sum+arr_mean[j];
}
return sum;
}
void addBookRatings(string filename, string users[], int ratings[][50])
{
int max_row=100;
for (int row = 0; row < max_row; row++)
{
for (int column=0; column<50; column++)
{
ratings[row][column]=0;
}
}
ifstream myFile.open(filename);
if(myFile.fail())
{
return void;
}
string line;
getline(myFile,line);
int count=0;
while(!inStream.eof())
{
getline(myFile,line);
if(line.length()>0)
{
count++;
string temp_arr[3];
string temp="";
int j=0;
for(int i=0; i<line.length(); i++)
{
if(line[i] != ',')
{
temp=temp+line[i];
}
if(line[i]==',' || i==line.length()-1)
{
temp_arr[j]=temp;
j++;
temp="";
}
}
int book_index=stoi(temp_arr[1]);
int score=stoi(temp_arr[2]);
int x = -1;
for(int k=0; k<count; k++)
{
if(users[k]==temp_arr[0])
{
if(ratings[k][book_index]==0)
{
ratings[k][book_index]=score;
}
x=k;
}
}
if(x==-1)
{
for(int k=0; k<count; k++)
{
if(users[k].length()==0)
{
users[k]=temp_arr[0];
int book_index=stoi(temp_arr[1]);
int score=stoi(temp_arr[2]);
ratings[k][book_index]=score;
break;
}
}
}
}
}
myFile.close();
return void;
}
