/*
 * Program Title: Increment Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of increment operators 
 *              (pre-increment and post-increment) in C. The program shows 
 *              how these operators affect the value of a variable in different 
 *              ways.
 *
 * Logic: The program initializes an integer variable and applies both 
 *        pre-increment and post-increment operators on it. The final 
 *        value of the variable is printed to the console.
 * 
 * Preconditions: The integer variable must be initialized before using 
 *                increment operators.
 * 
 * Postconditions: The final value of the variable after applying 
 *                 increment operators is printed to the console.
 * 
 * Edge Cases: Ensure that incrementing does not lead to overflow 
 *             if the variable is of an unsigned type.
 */

#include <stdio.h>

int main() {
    int i = 1; // Initialize i with a value of 1

    // Pre-increment
    ++i; // i = 1 + 1; now i = 2

    // Post-increment
    i++; // i = 2 + 1; now i = 3

    printf("%d\n", i); // Print the final value of i
    return 0;
}
