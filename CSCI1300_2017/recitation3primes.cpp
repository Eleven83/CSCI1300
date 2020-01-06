#include <iostream>
#include<bits/stdc++.h>

using namespace std;





void isPalindrome(string str)
{

    string originalStr = str;
    reverse(str.begin(),str.end());

    if (originalStr == str)
    {
        cout<<"Yes!";
    }
    else
    {
        cout << "No.";
    }
}


int main()
{
    string str = "";

    cout << "Palindrome or not?" << endl;
    cout << "Enter text: ";
    cin >> str;

    isPalindrome(str);
}
