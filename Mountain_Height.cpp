#include <iostream>

using namespace std;

int printNameAndRank(int height){
    int mt_height = height;
    if (mt_height == 29029){
            cout<< "This is the height of Mt. Whatever";
    }
    else if(mt_height == 28144){
            cout<<"This is the height of K2";
    }
    else if(mt_height == 28008) {
            cout<< "THis is the height of Mt. Blah";
    }
    else {
            return -1;
    }
    return 0;
}

int main() {
    //Get from user
    int height;
    cout << "Enter height in feet ";
    cin >> height;

    while(printNameAndRank(height) == -1){
        cout << "Please try again ";
        cin >> height;
    }
    return 0;
}
