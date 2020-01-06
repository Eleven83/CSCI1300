#ifndef WORDCOUNTS_H
#define WORDCOUNTS_H

#include <iostream>
#include <string>

using namespace std;

class WordCounts{
    public:
        //constructor
        WordCounts();
        //destructor
        ~WordCounts();

        //public methods
        void tallyWords(string);
        int getTally(string);
        void resetTally();
        int mostTimes(string[], int[], int);


    private:
        //private data members
        string words[10000];
        int counts[10000];
        string punc="!@#$%^&*()_-+={}[]:;'?/<>,.";

        //helper method
        string lowerNoPunc(string);
};


#endif // WORDCOUNTS_H
