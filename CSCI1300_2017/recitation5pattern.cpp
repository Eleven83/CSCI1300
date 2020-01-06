/*
//Recitation 5
//TA: Stephen Hutt
//Author: Ryan Hoffman
*/

#include <iostream>
using namespace std;

/*
Example 1
-----------
rows = 6
*
* *
* * *
* * * *
* * * * *
* * * * * *

Example 2
-----------
rows = 4
*
* *
* * *
* * * *

Notice how many asterisks are on each line:
1 first row, 3 second row, 5 third row, ...
*/

int main ()
{
    int n_rows;
    cout << "Enter number of rows: ";
    cin >> n_rows;

    int row = 0;
    while (row<n_rows)    //condition needed to print correct # of rows
    {
        // output the asterisks
        int n_asterisk = 0;
        while (n_asterisk<=row)  //condition to print correct # of asterisks
	    {
            cout << "* ";
            n_asterisk++; //modification to n_askerisk
	    }

        cout << endl;
        ++row;
    }

     //Mirror image
    while ((row<=n_rows)&&(row>=0))    //condition needed to print correct # of rows
    {
        // output the asterisks
        int n_asterisk = 0;
        while (n_asterisk<row)  //condition to print correct # of asterisks
	    {
            cout << "* ";
            n_asterisk++; //modification to n_askerisk
	    }
        cout << endl;
        --row;
    }
    return 0;
}
