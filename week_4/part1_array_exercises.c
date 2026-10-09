// Array Exercises
//
// Written by Max Davison, z5492092
// on March 2024

#include <stdio.h>

#define DOUBLE_ARRAY_SMALL 3
#define DOUBLE_ARRAY_LARGE 10
#define CHAR_ARRAY_SIZE 8

int main(void) {

    // ============ Problem #1 ============
    
    // Make two arrays
    double array_one[DOUBLE_ARRAY_SMALL] = {1.1, 2.2, 3.3};
    double array_two[DOUBLE_ARRAY_LARGE] = {0.0};

    // Loop thorugh the first array
    // Makes the first three elements in the second array equal to the first
    int index = 0;
    while (index < DOUBLE_ARRAY_SMALL) {
        array_two[index] = array_one[index];
        index++;
    }

    // Loops through and prints each element in the second array
    for (index = 0; index < DOUBLE_ARRAY_LARGE; index++) {
        printf("%0.1lf ", array_two[index]);
    }

    printf("\n");

    // ============ Problem #2 ============

    // Initialise char array and largest_character
    char char_array[CHAR_ARRAY_SIZE] = {'a', 'b', 'c', 'd', 'z', 'e', 'f', 'g'};
    char largest_character = char_array[0];

    // Loop through the char array
    index = 0;
    while (index < CHAR_ARRAY_SIZE) {

        // Check if the element at the current index is larger than the current largest character
        if (char_array[index] > largest_character) {
            largest_character = char_array[index];
        }

        index++;
    }

    // Print out the largest character
    printf("The largest character in char_array is: '%c'\n", largest_character);
}