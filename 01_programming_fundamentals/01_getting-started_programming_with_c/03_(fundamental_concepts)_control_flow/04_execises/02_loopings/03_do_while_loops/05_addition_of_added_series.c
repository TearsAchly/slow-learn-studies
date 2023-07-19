/*
 * Program Title: Addition of Added Series (do-while loop)
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the sum of integers 
 *              from 0 to a specified upper limit N using a do-while loop. 
 *              The output displays the series and the total sum.
 *
 * Logic:
 *        1. Declare three integer variables: `i` for the counter, `N` for the upper limit, and `sum` to hold the total sum.
 *        2. Initialize `i` to 0, `N` to the desired upper limit (5 in this case), and `sum` to 0.
 *        3. Use a do-while loop that continues as long as `i` is less than `N`.
 *        4. Inside the loop:
 *            - Print the current value of `i`.
 *            - Add the current value of `i` to the total `sum`.
 *            - Increment `i` to move to the next integer.
 *            - Print a plus sign ("+") if `i` is still less than `N` to format the output correctly.
 *        5. After the loop, print the total sum of the series.
 *
 * Preconditions:
 *        - The variable `N` should be a non-negative integer representing the upper limit of the series.
 *
 * Postconditions:
 *        - The program outputs the series of integers from 0 to \( N-1 \) and their total sum.
 *
 * Edge Cases:
 *        - If `N` is less than or equal to 0, no output will be generated since the loop condition won't be met.
 *
 * Program Flow:
 * 1. The program initializes the variable `i` to 0, `N` to 5, and `sum` to 0.
 * 2. The do-while loop executes, printing the current number and updating the sum.
 * 3. The loop continues until `i` reaches the value of `N`, at which point it terminates.
 * 4. Finally, the program prints the total sum of the series, formatted to display the full calculation.
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize the counter to 0
    int N = 5; // Upper limit for the integer series
    int sum = 0; // Initialize sum to 0

    do {
        printf(" %d ", i); // Print the current number
        sum += i; // Add current number to sum
        i++; // Increment i

        if (i < N) {
            printf(" + "); // Print plus sign if not the last number
        }
    } while (i < N); // Loop until i is less than N

    printf(" = %d", sum); // Print the total sum
    return 0;
}
