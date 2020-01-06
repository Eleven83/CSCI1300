#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*open the file
function to read a file
function to write to a file
close the file*/
int readingText()
{
    ifstream myFile1("/home/user/Dropbox/InputFile_Recitation6.txt");
    if (!myFile1.is_open())
    {
        cout << "Error: File Is Not Open" <<endl;
    }
    string line;
    while (!myFile1.eof())
        {
            getline(myFile1, line);
            //cout<<line<<endl;
        }
    int value = stoi(line);
    int sum = 0;
    while(!myFile1.eof())
            {
                if((value%2 == 0) || (value%5 == 0))
                    sum++;
            }

    myFile1.close();
    return 0;
}
int writingText(){

}



int main(){
    readingText();
    return 0;
    writingText();
    return 0;
}
