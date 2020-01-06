#include <iostream>
using namespace std;

/*int askTheUser(int n){
    cout << "Please enter a Positive Number "<<endl;
    cin >> n;
    if (n > 0)
        cout<< n;
    else
        return askTheUser(n);
    }
*/
int askTheUser(){
    int n;
    cout << "Please enter a Positive Number:";
    cin >> n;
    while (n > 0)
        return n;
    if (n<0)
        return askTheUser();
    }
int main(){
    int n;
    n = askTheUser();
    cout<<n;
    return 0;

    }

