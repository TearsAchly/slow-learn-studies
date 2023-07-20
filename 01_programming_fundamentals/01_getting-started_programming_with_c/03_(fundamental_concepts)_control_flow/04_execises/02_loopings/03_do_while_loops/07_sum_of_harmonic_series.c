/*
 * Program Title: Sum of Harmonic Series (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of a 
 *              harmonic series up to a specified number N, 
 *              using a do-while loop.
 *
 * Logic:
 *        1. Declare three variables: `i` for the counter, `N` for the upper limit of the series, and `sum` to hold the total sum.
 *        2. Initialize `i` to 2 (since the first term is always 1) and `sum` to 1.0 to account for the first term of the series.
 *        3. Print the first term of the harmonic series (1).
 *        4. Use a do-while loop that continues as long as `i` is less than or equal to `N`.
 *        5. Inside the loop:
 *            - Add the current term \( \frac{1}{i} \) to the total `sum`.
 *            - Print the current term in the format `+ 1/i`.
 *            - Increment `i` to move to the next integer.
 *        6. After the loop, print the total sum of the harmonic series.
 *
 * Preconditions:
 *        - The variable `N` should be a positive integer representing the upper limit of the harmonic series.
 *
 * Postconditions:
 *        - The program outputs the series of harmonic numbers from 1 to \( \frac{1}{N} \) and their total sum.
 *
 * Edge Cases:
 *        - If `N` is less than 1, the program will only print the first term (1) and the sum will remain 1.0.
 *
 * Program Flow:
 * 1. The program initializes the variable `i` to 2 and `N` to 4, with `sum` initialized to 1.0.
 * 2. The first term (1) is printed to the console.
 * 3. The do-while loop executes, adding each term of the harmonic series to the sum and printing it.
 * 4. The loop continues until `i` exceeds the value of `N`.
 * 5. Finally, the program prints the total sum of the harmonic series, formatted to display the full calculation.
 */

#include <stdio.h>

int main() {
    int i = 2; // Initialize counter to start from 2
    int N = 4; // Upper limit for the harmonic series
    double sum = 1.0; // Initialize sum to 1.0

    printf("1"); // Print the first term

    do {
        sum += 1.0 / i; // Add the term to sum
        printf(" + 1/%d", i); // Print current term
        i++; // Increment i
    } while (i <= N); // Loop until i is less than or equal to N

    printf(" = %f", sum); // Print the total sum
    return 0;
}
