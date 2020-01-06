/*
Assignment 4
Author: Ryan Hoffman
TA: Stephen Hutt
*/
#include <iostream>
#include<string>
using namespace std;

/*
The similarityScore function takes two strings as parameters
calculates their hamming distance then returns a score that
represents how similar the two strings are.
*/
float similarityScore(string sequence1, string sequence2)//declare and define the function
{
    int s1_length = sequence1.length();//assigning the length of each string to a variable
    int s2_length = sequence2.length();

    if (s1_length!= s2_length)//If the lengths are different we can't continue the test
    {
      return 0.0;
    }
    float h_dist = 0.0;//h_dist is the hamming distance initialized to 0 so we can increment as needed
    int i = 0;//initialize the counter variable
    while (i<s1_length)//loop through the length of the first sequence(both sequences are the same length)
    {
      if (sequence1[i]!=sequence2[i])//compare the characters of each string and, if they differ, increase h_dist by one
      {
        h_dist++;//increase hamming distance
      }
    i++;//increase the counter to get to the next character in each string until the end
    }
    float sim_score = (s1_length - h_dist)/s1_length;//sim_score is the overall similarity measure
    return sim_score;//return this so we can access it in main
}
/*
The countMatches function takes two strings and a float as parameters and
looks through the first string to find instances of the second string that
have a similarityScore greater than or equal to the float value. That's a match.
*/
int countMatches(string genome, string sequence, float min_score)//declare and define the function
{
    int n_matches = 0;//assign and initialize the counter for the number of matches
    int s_length = sequence.length();//assign a variable to the length of the second string for ease of use
    int i = 0;//assign and initialize a counter for the while loop
    while(i < genome.length() - s_length + 1)//loop through the length of the first string but only until a certain distance from the end
    {
        float score = similarityScore(genome.substr(i, s_length), sequence);//use similarityScore function to compare the sequence to the genome piece by piece
        if (score >= min_score)//the score >= to the given minimum score parameter will increase our number of matches
        {
            n_matches++;//incrementing our number of matches
        }
        i++;//increment the counter to the next set of characters
    }
    return n_matches;//return the number of matches to use in main
}
/*
The findBestMatch function takes two strings as parameters then compares similarity scores
to find the best score which is then returned as a floating point value.
*/
float findBestMatch(string genome, string seq)//declare and define the function
{
    float best_match = 0.0;//assigning and initializing a variable
    int i = 0;//initialize the counter variable
    while(i< genome.length())//loop through the genome
    {
        float score = similarityScore(genome.substr(i, seq.length()), seq);//use similarityScore function to compare the genome to the sequence piece by piece
        if (score > best_match)//the score will replace best_match each time a better score is obtained
        {
            best_match = score;//score is assigned to best_match
        }
        i++;//increment the counter
    }
    return best_match;//return the best match to use in main
}
/*
The findBestGenome function takes four strings as parameters which are three genomes and a sequence.
All three genomes are compared to the sequence to find which has the best similarity score.
The return value is the number of the genome with the best match. If there is no best then 0 is returned.
*/
int findBestGenome(string genome1, string genome2, string genome3, string seq)//declare and define the function
{
    float genome1_score = findBestMatch(genome1, seq);//using findBestMatch function
    float genome2_score = findBestMatch(genome2, seq);//using findBestMatch function
    float genome3_score = findBestMatch(genome3, seq);//using findBestMatch function

    if (genome1_score > genome2_score && genome1_score > genome3_score)//returns 1 if genome1 has the best similarity score
        {
            return 1;
        }
    else if (genome2_score > genome1_score && genome2_score > genome3_score)//returns 2 if genome2 has the best similarity score
    {
        return 2;
    }
    else if (genome3_score > genome1_score && genome3_score > genome2_score)//returns 3 if genome3 has the best similarity score
    {
        return 3;
    }
    else//returns 0 if the best score is shared or does not exist
    {
        return 0;
    }
}
