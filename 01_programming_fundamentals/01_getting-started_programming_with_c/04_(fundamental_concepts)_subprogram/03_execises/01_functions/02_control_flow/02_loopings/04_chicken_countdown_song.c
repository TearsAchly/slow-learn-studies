/*
 * Program Title: Chicken Countdown Song
 * Author: Achly
 * Date: July 2023
 * Description: This program prints the lyrics of a 
 *              countdown song for chicks, starting from 
 *              10 and going down to 1.
 *
 * Logic:
 *        1. Declare an integer variable `N` to represent the number of chicks.
 *        2. Use a `for` loop to iterate from 10 down to 2.
 *        3. Inside the loop, print the current number of chicks (`N`), 
 *           stating that one died and how many are left.
 *        4. When `N` reaches 2, print a special line indicating that 
 *           only the mother is left after the last chick dies.
 *        5. The loop continues until all chicks have been counted down.
 *
 * Preconditions:
 *        - The program starts with `N` initialized to 10.
 *
 * Postconditions:
 *        - The program will print a countdown song from 10 to 1 for chicks.
 *
 * Edge Cases:
 *        - The program handles the case when there are 2 chicks left 
 *          by displaying a special message.
 *
 * Program Flow:
 * 1. The variable `N` is initialized to 10.
 * 2. The `for` loop begins, decrementing `N` in each iteration.
 * 3. In each iteration, the current number of chicks and the remaining number 
 *    after one dies is printed.
 * 4. When `N` equals 2, a special message is printed.
 * 5. The program ends after all iterations are complete.
 */

#include <stdio.h>

/*
 * Function Name: print_chicken_countdown
 * Parameters: None
 * Returns: void
 * Description: This function prints the lyrics of a countdown song for chicks
 *              starting from 10 and going down to 1.
 */
void print_chicken_countdown() {
    int N;

    // Loop from 10 down to 2
    for (N = 10; N >= 2; N--) {
        printf("\n%d little chicks went down, 1 died, %d are left.", N, N - 1);
        if (N == 2) {
            printf("\n1 little chick went down, 1 died, only the mother is left.");
        }
    }
}

int main() {
    // Call the function to print the countdown song
    print_chicken_countdown();

    return 0;
}
