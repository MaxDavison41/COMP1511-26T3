// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>

// Function protoype
int add(int number_one, int number_two);

int main() {
    int result;
    int num1 = 5;
    int num2 = 3;

    // Function call
    result = add(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int add(int number_one, int number_two) {
    int sum = number_one + number_two;
    return sum;
}

