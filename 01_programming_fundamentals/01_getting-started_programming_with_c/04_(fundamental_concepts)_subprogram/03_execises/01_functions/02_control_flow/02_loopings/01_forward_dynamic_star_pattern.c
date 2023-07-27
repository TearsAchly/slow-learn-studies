/*
 * Program Title: Forward Dynamic Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a forward dynamic star pattern using nested loops.
 *
 * Logic:
 *        1. Declare two integer variables: `outer` for the outer loop and `inner` for the inner loop.
 *        2. Initialize an integer variable `N` to define the number of rows in the star pattern.
 *        3. Use a for loop for the outer loop, which iterates from 0 to `N`.
 *        4. Inside the outer loop, use another for loop for the inner loop, which iterates from 0 to `outer`.
 *        5. In each iteration of the inner loop, print a star (`*`).
 *        6. After each row, move to the next line to continue printing the pattern.
 *
 * Preconditions:
 *        - The variable `N` should be a non-negative integer representing the number of rows.
 *
 * Postconditions:
 *        - The program will output a forward star pattern with `N` rows.
 *
 * Edge Cases:
 *        - If `N` is less than 0, no output will be generated.
 *
 * Program Flow:
 * 1. The program initializes the outer loop variable `outer` and the inner loop variable `inner`.
 * 2. The outer loop runs from 0 to `N`, controlling the number of rows printed.
 * 3. For each iteration of the outer loop, the inner loop runs from 0 to `outer`, printing a star for each iteration.
 * 4. After completing the inner loop, the program prints a newline character to move to the next row.
 * 5. The program terminates after printing the desired pattern.
 */

#include <stdio.h>

/*
 * Function Name: print_forward_star_pattern
 * Parameters:
 *   - int N: Number of rows for the star pattern
 * Returns: void
 * Description: This function generates a forward dynamic star pattern for a given number of rows.
 */
void print_forward_star_pattern(int N) {
    int outer, inner;

    // Outer loop for each row
    for (outer = 0; outer <= N; outer++) {
        // Inner loop for printing stars
        for (inner = 0; inner <= outer; inner++) {
            printf(" * "); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int N = 4; // Number of rows

    // Call the function to print the star pattern
    print_forward_star_pattern(N);

    return 0;
}
