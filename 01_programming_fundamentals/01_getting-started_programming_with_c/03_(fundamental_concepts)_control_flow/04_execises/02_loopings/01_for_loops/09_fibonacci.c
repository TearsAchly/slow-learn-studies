/*
 * Program Title: Fibonacci Sequence
 * Author: Achly
 * Date: July 2023
 * Description: This program generates and prints the 
 *              Fibonacci sequence up to N terms.
 *
 * Logic:
 *        1. Initialize three integer variables: `current_number` 
 *           to hold the current Fibonacci number (starting at 0), 
 *           `next_number` for the next Fibonacci number (starting at 1), 
 *           and `now_number` to calculate the sum of the current 
 *           and next numbers.
 *        2. Define an integer variable `N` and set it to 19, 
 *           representing the number of terms in the Fibonacci sequence 
 *           to be displayed.
 *        3. Print the first term of the Fibonacci sequence (0).
 *        4. Use a `for` loop that runs from 0 to `N`, generating 
 *           the next Fibonacci number in each iteration.
 *        5. Inside the loop:
 *           - Update `current_number` with the value of `next_number`.
 *           - Update `next_number` with the value of `now_number`.
 *           - Calculate `now_number` as the sum of `current_number` 
 *             and `next_number`.
 *           - Print the current Fibonacci number (`now_number`).
 *
 * Preconditions:
 *        - The variable `N` must be a non-negative integer representing 
 *          the number of terms to be displayed.
 *
 * Postconditions:
 *        - The program outputs the Fibonacci sequence up to the 
 *          specified number of terms, starting with 0.
 *
 * Edge Cases:
 *        - If `N` is set to 0, the output should only print the first term 
 *          of the Fibonacci sequence (0).
 *
 * Program Flow:
 * 1. Initialize the first two Fibonacci numbers.
 * 2. Print the first term (0).
 * 3. Enter a `for` loop to calculate and print the next terms up to N.
 * 4. Update the numbers and print each term of the sequence.
 */

#include <stdio.h>

int main() {
    int current_number = 0; // Current Fibonacci number
    int next_number = 1; // Next Fibonacci number
    int now_number = 0; // Sum of current and next numbers
    int N = 19; // Number of terms to display

    printf("0"); // Print the first term

    for (int i = 0; i < N; i++) {
        current_number = next_number; // Update current number
        next_number = now_number; // Update next number
        now_number = current_number + next_number; // Calculate new number

        printf(" %d ", now_number); // Print the current Fibonacci number
    }

    return 0;
}
