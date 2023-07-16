/*
 * Program Title: Chicken Countdown Song
 * Author: Achly
 * Date: July 2023
 * Description: This program prints the lyrics of a 
 *              countdown song for chicks, starting from 
 *              10 and going down to 1 using a while loop.
 *
 * Logic:
 *        1. Initialize an integer variable `N` to 10, representing the number of chicks.
 *        2. Use a `while` loop that continues as long as `N` is greater than 1:
 *           - For each iteration, print a line that states how many chicks went down, 
 *             1 died, and how many are left.
 *           - When only 1 chick remains (N == 2), print a special line stating that 
 *             the last chick died, and only the mother is left.
 *        3. Decrement the value of `N` after each iteration to move closer to the end.
 *
 * Preconditions:
 *        - The value of `N` must be a positive integer (number of chicks).
 *
 * Postconditions:
 *        - The program prints the countdown lyrics until only the mother is left.
 *
 * Edge Cases:
 *        - If the initial value of `N` is 1, no countdown will happen, and the program will terminate immediately.
 *        - If `N` is negative or zero, the loop will not execute.
 *
 * Program Flow:
 * 1. Initialize the number of chicks (`N`) to 10.
 * 2. Enter a `while` loop that iterates as long as `N` is greater than 1.
 * 3. Print the appropriate countdown lyrics for each iteration.
 * 4. When `N == 2`, print the special line for the last chick.
 * 5. Decrement `N` in each iteration to continue the countdown.
 * 6. The program terminates once the loop completes.
 */

#include <stdio.h>

int main() {
    int N = 10; // Initialize the number of chicks

    while (N > 1) { // Loop until N is greater than 1
        printf("\n%d little chicks went down, 1 died, %d are left.", N, N - 1);
        if (N == 2) {
            printf("\n1 little chick went down, 1 died, only the mother is left.");
        }
        N--; // Decrement N
    }

    return 0;
}
