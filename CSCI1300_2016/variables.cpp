#include <iostream>
using namespace std;

int main () {
    int numberCats = 0;
    int numberDogs = 0;
    int numberAnimals = 0;
    while (numberCats < 100) {
            cout << "Number of cats: " << numberCats << endl;
            numberCats += 1;
    }
    while (numberDogs < 100) {
            cout << "Number of dogs: " << numberDogs << endl;
            numberDogs += 1;
    }
    numberAnimals = numberCats + (numberDogs -3);
    cout << "Total number of animals: " << numberAnimals << endl;

    return 0;
}
