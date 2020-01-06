#include<iostream>
using namespace std;

//Function to print  modulo table for a specified range
void modTable(int start, int end){

    for(int i=start; i<=end;i=i+1){
        for(int j=start;j<=end;j=j+1){
            //int result = j%i;
            //cout << result<<endl;
            cout << i<<" %"<< j<<" = "<<( i % j)<<endl;
        }
    }
}

//Function to reverse a string
string reverse(string input){
    int length = input.length();
    string reversed = "";
    for(int i=length;i>=0;i=i-1){
        reversed = reversed + input[i];
    }
    return reversed;
}

int main(){
    int n;
    int start = 1, end=n;
    string input = "";
    cout << "Enter the lower limit"<<endl;
    cin >> start;
    cout << "Enter the upper limit"<<endl;
    cin >> end;
    modTable(start, end);
    cout << "Enter input string to reverse"<<endl;
    cin >> input;
    string returnedValue = reverse(input);
    cout << returnedValue<<endl;
    return 0;

}
