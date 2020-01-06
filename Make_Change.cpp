#include<iostream>
using namespace std;

int countCoins(int changeAmount, int denomination){

        int coins;
        coins = 0;
        coins = changeAmount/denomination;

        return coins;
}
int makeChange(int changeAmount){

    int result;
    int quarters, dimes, nickels, pennies;
    int amount;
    amount = changeAmount;
    //calculate # of coins of each denomination
    quarters = countCoins(amount, 25);
    amount = amount - (quarters * 25);

    dimes = countCoins(amount, 10);
    amount = amount - (dimes * 10);

    nickels = countCoins(amount, 5);
    amount = amount - (nickels * 5);

    pennies = countCoins(amount, 1);
    amount = amount - (pennies * 1);

    cout << "Change of " << changeAmount << " is ";
    cout << quarters << " Quarters, ";
    cout << dimes << " Dimes, ";
    cout << nickels << " Nickels, ";
    cout << pennies << " Pennies";

    return result;

}

int main() {
    int changeAmount;
    cout << "Enter amount of change: ";
    cin >> changeAmount;
    makeChange(changeAmount);
    return 0;

}


