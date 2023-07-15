/*
 * Program Title: Forward Dynamic Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a forward 
 *              dynamic star pattern using nested while loops.
 *
 * Logic:
 *        1. Initialize an integer variable `outer` to 0, which 
 *           acts as the counter for the outer loop.
 *        2. Set an integer variable `N` to 4, representing the 
 *           maximum number of rows for the star pattern.
 *        3. Use a `while` loop that continues as long as `outer` 
 *           is less than `N` (to print N rows).
 *        4. Inside the outer loop, initialize another integer 
 *           variable `inner` to 0 for the inner loop counter.
 *        5. Use another `while` loop that iterates while `inner` 
 *           is less than `outer`.
 *        6. Print a star (*) for each iteration of the inner loop.
 *        7. After printing stars for the current row, move to the 
 *           next line.
 *        8. Increment the `outer` variable to move to the next row.
 *
 * Preconditions:
 *        - The variable `N` must be a non-negative integer indicating 
 *          the number of rows to print.
 *
 * Postconditions:
 *        - The program outputs a right-angled triangle of stars 
 *          that increases in size with each row.
 *
 * Edge Cases:
 *        - If `N` is 0 or negative, no stars will be printed.
 *
 * Program Flow:
 * 1. Initialize the outer loop counter.
 * 2. Enter the outer `while` loop to start generating the star pattern.
 * 3. For each iteration of the outer loop, initialize the inner loop counter.
 * 4. Enter the inner `while` loop to print stars for the current row.
 * 5. Print the appropriate number of stars based on the current value of `outer`.
 * 6. Move to the next line after printing stars for the row.
 * 7. Increment the outer counter and repeat until all rows are printed.
 */

#include <stdio.h>

int main() {
    int outer = 0; // Initialize the outer loop counter
    int N = 4; // Maximum number of rows for the star pattern

    while (outer < N) { // Loop until outer is less than N
        int inner = 0; // Initialize the inner loop counter
        while (inner <= outer) { // Loop for stars in each row
            printf("* "); // Print star
            inner++; // Increment inner
        }

        printf("\n"); // Move to the next line after each row
        outer++; // Increment outer
    }

    return 0;
}
