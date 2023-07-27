/*
 * Program Title: Dynamic O Star Pattern
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a dynamic star pattern with 'o' at the borders using nested loops.
 *
 * Logic:
 *        1. Declare two integer variables, `outer` and `inner`, 
 *           to control the number of rows and the characters printed in each row.
 *        2. Define an integer variable `N` and set it to 4, representing 
 *           the total number of rows for the star pattern.
 *        3. Use a `for` loop to control the outer loop, iterating from 0 to `N`.
 *        4. Inside the outer loop, check the value of `outer`:
 *           - If `outer` is 1 or `N`, print `N` 'o' characters to create the top and bottom borders.
 *           - If `outer` is greater than 1 and less than `N`, print an 'o' for the left border, 
 *             followed by `N - 2` '*' characters for the middle, and then another 'o' for the right border.
 *        5. After each row is printed, move to the next line.
 *        6. The outer loop continues until all rows are printed.
 *
 * Preconditions:
 *        - The value of `N` should be a non-negative integer representing the number of rows.
 *
 * Postconditions:
 *        - The program will print a dynamic star pattern with 'o' at the borders to the console.
 *
 * Edge Cases:
 *        - If `N` is set to 1, the output will be a single 'o'.
 *        - If `N` is set to 2, the output will be two rows of 'o's.
 *
 * Program Flow:
 * 1. The program initializes the variable `N` for the number of rows.
 * 2. The outer loop starts from 0 and increments until it reaches `N`.
 * 3. For each row, it checks if it's a border row or a middle row.
 * 4. The appropriate characters ('o' or '*') are printed based on the row position.
 * 5. The program terminates after all rows have been printed.
 */

#include <stdio.h>

/*
 * Function Name: print_dynamic_o_star_pattern
 * Parameters:
 *   - int N: Number of rows for the star pattern
 * Returns: void
 * Description: This function generates a dynamic star pattern with 'o' at the borders for a given number of rows.
 */
void print_dynamic_o_star_pattern(int N) {
    int outer, inner;

    // Outer loop for each row
    for (outer = 0; outer <= N; outer++) {
        // Check if the row is a border row
        if (outer == 1 || outer == N) {
            // Print 'o' for the top and bottom borders
            for (inner = 0; inner < N; inner++) {
                printf("o"); 
            }
        } else if (outer > 1 && outer < N) {
            // Print 'o' for the left border
            printf("o");
            // Print '*' for the middle part
            for (inner = 0; inner < N - 2; inner++) {
                printf("*"); 
            }
            // Print 'o' for the right border
            printf("o");
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int N = 4; // Number of rows

    // Call the function to print the star pattern
    print_dynamic_o_star_pattern(N);

    return 0;
}
