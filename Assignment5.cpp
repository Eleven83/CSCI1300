/*
Assignment 5
TA:Stephen Hutt
Author: Ryan Hoffman
*/

#include <iostream>
#include <string>

using namespace std;

/*
Function that sums all the values in an array and returns that value as a float
*/

float sumArray(float array[], int size)
{
    float sum_values = 0;
    for(int i=0; i<size; i++)
        {
            sum_values += array[i];
        }
    return sum_values;
}

/*
Function to search an array for a target value and return the
index of that value, or -1 if not found.
*/

int search(int array[], int size, int target)
{
    int target_value = -1;
    for(int i=0; i<size; i++)
        {
            if(array[i] == target)
                {
                    target_value = i;
                    break;
                }
        }
    return target_value;
}

/*
Function to calculate the sum of squared differences between each value of the two passed arrays
and return it as a float
*/

float calculateDifference(int a[], int b[], int size)
{
    float ds_value[size];//create array
    for(int i=0; i<size; i++)//loop through
        {
            ds_value[i] = ((a[i] - b[i])*(a[i]-b[i]));//subtract a[i] from b[i], square that and set it to ds_value[i]
        }
    return sumArray(ds_value, size);//call to sumArray function passing in the ds_value array which returns the sum
}

/*
Function using bubble sort method to arrange the array in ascending order. Note, it does not return anything
so I need to figure out how to test it in main
*/

void sortArray(float unsortedArray[], int size)
{
    for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)//nested loop to compare the values and sort in ascending order. "size-1" is the number of indexed positions
                {
                    if(unsortedArray[j] > unsortedArray[j+1])//j+1 is the next element of the array. If this is true we want to swap
                        {
                            int x = unsortedArray[j];
                            unsortedArray[j] = unsortedArray[j+1];
                            unsortedArray[j+1] = x;
                        }
                }
        }
}

/*
Function to copy values of one array to another array
*/

void copyArray(float source[], int size, float dest[])
{
    for(int i = 0; i < size; i++)
        {
            dest[i] = source[i];//set them equal to each other
        }
}

/*
Function to convert values of one array and use them to fill another array or INVALID if
no valid rating is matched
*/

void convert(int rating[], string text[], int size)
{
    for(int i = 0; i < size; i++)
        {
            if(rating[i] == 0) //given responses
                {
                    text[i] = "Not-read";
                }
            else if(rating[i] == -5)
                {
                    text[i] = "Terrible";
                }
            else if(rating[i] == -3)
                {
                    text[i] = "Disliked";
                }
            else if(rating[i] == 1)
                {
                    text[i] = "Average";
                }
            else if(rating[i] == 3)
                {
                    text[i] = "Good";
                }
            else if(rating[i] == 5)
                {
                    text[i] = "Excellent";
                }
            else
                {
                    text[i] = "INVALID";
                }
        }
}

/*
Function to find and return the median item in an array
*/

float findMedian(float array[], int size)
{
    float my_array[size];
    float median_value = 0;
    copyArray(array, size, my_array);//call to copyArray function
    sortArray(my_array, size);//call to sortArray function
    if(size % 2)
        {
            median_value = my_array[(size / 2)];
        }
    else
        {
            median_value = (my_array[size / 2] + my_array[(size / 2) - 1]) / 2.0;
        }
return median_value;
}
