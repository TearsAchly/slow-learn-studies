/*
 * Program Title: Dynamic O Star Pattern (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program generates a dynamic star pattern with 'o' at the borders using a do-while loop.
 *
 * Logic:
 *        1. Declare two integer variables: `outer` for the outer loop and `N` for the number of rows.
 *        2. Use a do-while loop for the outer loop, which runs while `outer` is less than or equal to `N`.
 *        3. Inside the outer loop, check if the current row is the first or last row:
 *            - If `outer` is 1 or equal to `N`, print `o` for the entire row.
 *        4. For middle rows (when `outer` is greater than 1 and less than `N`):
 *            - Print an `o` at the left border.
 *            - Use another do-while loop to print stars (`*`) for the middle part of the row, counting from 0 to `N - 2`.
 *            - Print an `o` at the right border.
 *        5. After each row, move to the next line.
 *        6. Increment the `outer` variable after each iteration.
 *
 * Preconditions:
 *        - The variable `N` should be a positive integer representing the number of rows.
 *
 * Postconditions:
 *        - The program will output a dynamic star pattern with 'o' at the borders and '*' in the middle.
 *
 * Edge Cases:
 *        - If `N` is less than 2, the program will only print a single row of 'o's.
 *
 * Program Flow:
 * 1. The program initializes the outer loop variable `outer` to 0 and sets `N` to the desired number of rows (4 in this case).
 * 2. The outer loop runs, checking whether the current row is the first, last, or a middle row.
 * 3. For the first and last rows, the program prints `o` characters across the entire row.
 * 4. For the middle rows, it prints an `o` at both ends, with stars in between.
 * 5. The program continues this until all rows are printed, creating a pattern of 'o' and '*' characters.
 */

#include <stdio.h>

int main() {
    int outer = 0; // Initialize the outer loop counter
    int N = 4; // Number of rows

    do {
        if (outer == 1 || outer == N) { // Check for the first and last row
            int o = 0; // Initialize counter for 'o'
            do {
                printf("o"); // Print 'o'
                o++; // Increment inner counter
            } while (o < N);
        } else if (outer > 1 && outer < N) { // Middle rows
            printf("o"); // Print 'o' for the left border
            int b = 0; // Initialize counter for '*'
            do {
                printf("*"); // Print star for the middle part
                b++; // Increment inner counter
            } while (b < N - 2);
            printf("o"); // Print 'o' for the right border
        }
        printf("\n"); // Move to the next line after each row
        outer++; // Increment outer
    } while (outer <= N); // Loop until outer is less than or equal to N

    return 0;
}
