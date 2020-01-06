#ifndef SPELLCHECKER_H
#define SPELLCHECKER_H

#include <iostream>
#include <string>

using namespace std;

class SpellChecker{
    public:
        //constructor and destructor
        SpellChecker();
        SpellChecker(string);
        SpellChecker(string, string, string);
        ~SpellChecker();

        //public methods
        bool readValidWords(string);
        bool readCorrectedWords(string);
        bool setStartMarker(char);
        bool setEndMarker(char);
        char getStartMarker();
        char getEndMarker();
        string repair(string);

        //public data members
        string language;

    private:
        //private data members
        char start_marker;
        char end_marker;
        string validWords[10000];
        string incorrectWords[10000];
        string correctWords[10000];
        string punc="!@#$%^&*()_-+={}[]:;'?/<>,.";

        //helper method
        string lowerNoPunc(string);
};

#endif // SPELLCHECKER_H
