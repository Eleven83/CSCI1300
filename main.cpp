/*
Assignment 4
Author: Ryan Hoffman
TA: Stephen Hutt
*/
#include "Assignment4.cpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{

    cout<<similarityScore(string sequence1, string sequence2)<<endl;
    cout<<countMatches(string genome, string sequence, float min_score)<<endl;
    cout<<findBestMatch(string genome, string seq)<<endl;
    cout<<findBestGenome(string genome1, string genome2, string genome3, string seq)<<endl;
}

