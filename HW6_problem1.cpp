#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

/*Program to read and write to a file
    *open a file
    *read or write or both
    *close the file*/

//function counts lines in file and stores that number
int howManyLines()
{
    ifstream myFile1;
    myFile1.open("/home/user/Dropbox/StudentScores1.txt", ios::app);
    string line_of_file;
    int lineCount;
    if (!myFile1.is_open())
    {
        cout << "Error: File Is Not Open" <<endl;
    }
    while (getline(myFile1,line_of_file))
    {
        lineCount++;
    }
    myFile1.close();
    cout << "Number of lines: "<<setw(7)<<lineCount<< endl;
    return lineCount;
}
int countMatchingRecords(int lowScore, int highScore)
{
    string line_of_file;
    int score = 0;
    int recordMatches = 0;
    int lineCount = 0;
    ifstream myFile1;
    myFile1.open("/home/user/Dropbox/StudentScores1.txt", ios::app);
    if (!myFile1.is_open())
    {
        cout << "Error: File Is Not Open" <<endl;
    }

    while (getline(myFile1,line_of_file))
    {
        lineCount++;
        if (lineCount%3 == 0)
            score = stoi(line_of_file);
        if ((score >= lowScore) && (score <= highScore))
            recordMatches++;
    }
    cout << "Number of records: " << setw(7) << recordMatches << endl;
    return recordMatches;
}

string gradeFromScore()
{
    int score = 0;
    string lettergrade;
    if((score <= 100) && (score >= 90))
    {
        lettergrade = "A";
    }
    if ((score < 90) && (score >= 80))
    {
        lettergrade = "B";
    }
    if ((score < 80) && (score >= 70))
    {
        lettergrade = "C";
    }
    if ((score < 70) && (score >= 60))
    {
        lettergrade = "D";
    }
    if ((score < 60) && (score <= 0))
    {
        lettergrade = "F";
    }
  return lettergrade;
}
int convertToLetterGrade()
{
    string line, inputFile, outputFile;
    ifstream myFile2;
    myFile2.open("/home/user/Dropbox/StudentScores2.txt", ios::app);
    if (!myFile2.is_open())
    {
        cout << "Error: File Not Open!" <<endl;
    }
    int lineNumber = 0;
    string firstname, lastname;
    string lettergrade;
    int linesprocessed = 0;
    while (getline(myFile2, line))
    {
        lineNumber++;
        if (lineNumber%1 == 0)
        {
            firstname = line;
        }
        else if (lineNumber%2 == 0)
        {
            lastname = line;
        }
        else if (lineNumber%3 == 0)
        {
            lettergrade = line;
        }
        linesprocessed++;
    }
    int gradesprocessed = linesprocessed/3;
    cout << "Number of grades: " << setw(7) << gradesprocessed << endl;
    return gradesprocessed;
}
int main ()
{
  int lowScore, highScore;
  //Part One
  string myFile1;
  cout << "Enter a File name: " <<endl;
  cin >> myFile1;
  howManyLines();
  //Part Two
  cout << "Please enter the low score: " << endl;
  cin >> lowScore;
  cout << "Please enter the High score: " << endl;
  cin >> highScore;
  countMatchingRecords(lowScore, highScore);
  //Part 3
  string myFile2;
  cout << "Please enter a file name." <<endl;
  cin >> myFile2;
  string outputFile;
  cout << "Please enter the name of the file you want to create." << endl;
  cin >> outputFile;
  convertToLetterGrade ();
  return 0;
}
