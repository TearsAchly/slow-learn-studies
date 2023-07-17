/*
 * Program Title: Factorial Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the factorial of a specified 
 *              number N by multiplying all integers from 1 to N using a while loop.
 *
 * Logic:
 *        1. Initialize an integer variable `i` to 1, which acts as the counter for the loop.
 *        2. Set an integer variable `N` to 5, representing the upper limit for the factorial calculation.
 *        3. Initialize an integer variable `mul` to 1, which stores the intermediate results of the multiplication.
 *        4. Use a `while` loop that continues as long as `i` is less than or equal to `N`:
 *           - Multiply `mul` by `i` to accumulate the result.
 *           - Print the current value of `i` followed by a multiplication symbol if not the last number.
 *           - Increment `i` after each iteration.
 *        5. After the loop, print the total result of the factorial calculation.
 *
 * Preconditions:
 *        - The variable `N` must be a positive integer.
 *
 * Postconditions:
 *        - The program prints the factorial series and the total result of the factorial.
 *
 * Edge Cases:
 *        - If `N` is 0, the factorial should be 1 by definition (not handled in this program).
 *        - If `N` is negative, the factorial is undefined (not handled in this program).
 *
 * Program Flow:
 * 1. Initialize the loop counter `i` to 1 and the result variable `mul` to 1.
 * 2. Enter the `while` loop to compute the factorial by multiplying integers from 1 to `N`.
 * 3. For each iteration, print the current integer and the multiplication sign, if applicable.
 * 4. After the loop ends, print the total factorial result.
 */

#include <stdio.h>

int main() {
    int i = 1; // Initialize the counter to 1
    int N = 5; // Upper limit for the factorial calculation
    int mul = 1; // Initialize multiplication result to 1

    while (i <= N) { // Loop until i is less than or equal to N
        printf("%d", i); // Print the current number
        mul *= i; // Multiply current number to result
        if (i < N) { // Avoid printing '*' after the last number
            printf(" * "); // Print multiplication sign if not the last number
        }
        i++; // Increment i
    }

    printf(" = %d", mul); // Print the factorial result
    return 0;
}
