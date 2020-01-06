#include <stdio.h>
#include <windows.h>


/* Input: a string & the amount of mm seconds to wait between every
letter */
void SlowPrint(char* string, int sleeptime)
{
     int i = 0;
     while(string[i] != '\0')
     {
             printf("%c", string[i]);
             Sleep(sleeptime);
             i++;
     }
}

int main() // just a little example
{
    SlowPrint("Hi! You're looking at an example of the slowprint function!", 50);
    Sleep(2000);

    return 0;
}
