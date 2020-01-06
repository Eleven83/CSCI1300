#include <iostream>
#include <string>
using namespace std;
//Program to print elements of an array. This program shows three  ways to declare and initialize an array.
int main(){

	//Method 1 to declare an array
	int array1[3];
	array1[0] = 1; //Initializing first element

	array1[1] = 2; //Second element

	array1[2] = 3; //Third element

	array1[3] = 4; //Fourth element???

	//Printing elements of an array
	for (int i=0;i<array1.length();i++){//cannot use .length or .size. Must use sizeof(arrayName)/ sizeof(type).
		cout << i << " " << array1[i]<<endl;

	}



	//Method 2 to declare an array
	int array2[5] = {1, 2, 3, 4};
	//Will this print all elements of an array?
	cout << array2;
	//Printing elements of second array
	for (int i=0;i<array2.size();i++){
		cout << i << " " << array2[i]<<endl;

	}
	//Method 3 to declare an array
	int array3[25];
	//What happens here?
	for(int i=0; i < sizeof(array3)/sizeof(int); i++){

		array3[i] = i;
		cout << i << " " << array3[i]<<endl;

	}


	return 0;
}
