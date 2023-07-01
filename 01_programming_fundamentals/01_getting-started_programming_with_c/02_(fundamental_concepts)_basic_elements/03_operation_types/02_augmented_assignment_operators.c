/*
 * Program Title: Augmented Assignment Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of augmented assignment operators 
 *              in C, including +=, -=, *=, /=, %=, &=, |=, ^=, >>=, and <<=. These 
 *              operators are shorthand for performing an operation and assigning 
 *              the result to a variable.
 *
 * Logic: The program initializes an integer variable and performs various 
 *        augmented assignment operations, storing the results in variables 
 *        and printing the outcomes.
 *
 * Preconditions: The variable must be initialized before performing the operations.
 * Postconditions: The results of the operations are printed to the console.
 * Edge Cases: Ensure that operations are performed with compatible types to avoid 
 *             unexpected results.
 */

#include <stdio.h>

int main() {
    int x = 5; // Initialize x
    printf("Initial value of x: %d\n", x);

    x += 3; // Equivalent to x = x + 3
    printf("After x += 3: %d\n", x);

    x -= 2; // Equivalent to x = x - 2
    printf("After x -= 2: %d\n", x);

    x *= 2; // Equivalent to x = x * 2
    printf("After x *= 2: %d\n", x);

    x /= 4; // Equivalent to x = x / 4
    printf("After x /= 4: %d\n", x);

    x %= 3; // Equivalent to x = x % 3
    printf("After x %%= 3: %d\n", x); // Use %% to print %

    // Bitwise operations
    x |= 2; // Equivalent to x = x | 2
    printf("After x |= 2: %d\n", x);

    x &= 1; // Equivalent to x = x & 1
    printf("After x &= 1: %d\n", x);

    x ^= 1; // Equivalent to x = x ^ 1
    printf("After x ^= 1: %d\n", x);

    x <<= 1; // Equivalent to x = x << 1
    printf("After x <<= 1: %d\n", x);

    x >>= 1; // Equivalent to x = x >> 1
    printf("After x >>= 1: %d\n", x);

    return 0;
}
