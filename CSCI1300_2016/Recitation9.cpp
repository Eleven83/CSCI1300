#include <iostream>
#include <fstream>
using namespace std;
void bubbleSort(int a[],int n) ;
int main()
{
int num[100];
ifstream inputFile;
int n;
inputFile.open("Recitation9_Input.txt");
int count = 0;
if (inputFile.is_open()) {
while (!inputFile.eof()) {
inputFile >> n;
num[count] = n;
count++;
}
}
cout<<endl;
bubbleSort(num,count);
cout<<"Sorted numbers are : "<<endl;
for(int i=0; i<count; i++){
cout<<num[i]<<" ";
}
cout<<endl;
inputFile.close();
return 0;
}
void bubbleSort(int a[],int n) {

int temp = 0;

for(int i=0; i < n; i++){
for(int j=1; j < (n-i); j++){

if(a[j-1] > a[j]){
temp = a[j-1];
a[j-1] = a[j];
a[j] = temp;
}

}
}

}
