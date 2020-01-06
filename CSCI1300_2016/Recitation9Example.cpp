//Carter Tillquist
//Example of multidimensional arrays

#include <iostream>
using namespace std;

void print_table(int table[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << table[i][j] << " | ";
        }
        cout << endl;
    }
}

void mult_table(int (&table)[10][10], int x)
{
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            table[i][j] = i*j;
        }
    }
}

int main()
{
    cout << "Fill in a multiplication table up to 9 \n";
    int c = 0;
    cout << "Pick the maximum number (1-9): ";
    cin >> c;
    while (c>9 || c<1)
    {
        cout << "Please pick a valid maximum number (1-9): ";
        cin >> c;
    }
    int x[10][10];
    //fill with -1's to start
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            x[i][j] = -1;
        }
    }

    //fill table with correct values
    mult_table(x, c);

    //print table
    print_table(x);

    return 0;
}
