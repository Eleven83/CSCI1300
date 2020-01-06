#include <iostream>
using namespace std;
//Ryan Hoffman CSCI 1300 ATTN: VARSHA
int loopsOfNumbers(int n){
    while (n >= 0){
        cout << n * n << endl;
        n = n - 1;
    }
    return 0;
}
int addNumbers(int firstnum, int secondnum)
{
    int x,a,b;
    a = firstnum;
    b = secondnum;
    x = a + b;
    return x;
}
int swapTwoNumbers(){
    int a = 5, b = 10, temp;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main(){
    //~~~~~~~~~~~ Loops and Numbers ~~~~~~~~~~~~~~~~~~~~~
    cout << "Enter a number: " << endl;
    int numbers;
    cin >> numbers;
    cout <<loopsOfNumbers(numbers)<<endl;

    //~~~~~~~~~~~~ Swapping Numbers ~~~~~~~~~~~~~~~~~~~~~
    int swap = swapTwoNumbers();

    //~~~~~~~~~~~~ Adding Numbers ~~~~~~~~~~~~~~~~~~~~~~~
    int firstnum, secondnum, addNumbers(int, int), res;
    cout<< "Let’s perform some addition." << endl;
    cout << "Please enter the First number:" <<endl;
    cin >> firstnum;
    cout << "Please enter the Second number:" << endl;
    cin>> secondnum;
    res = addNumbers(firstnum,secondnum);
    cout  << "The Sum of Two numbers is " << res << endl;
    return 0;
}


