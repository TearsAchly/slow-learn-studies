/*
 * Program Title: Break Statement Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of the break statement 
 *              to exit a loop prematurely when a specific condition is met.
 *
 * Logic:
 * 1. Initialize a variable `N` to 10, representing the maximum value for 
 *    the loop.
 * 2. Iterate over values from 0 to `N` using a `for` loop.
 * 3. Inside the loop, check if the current loop variable `outer` equals 4.
 * 4. If `outer` equals 4, use the `break` statement to exit the loop 
 *    immediately.
 * 5. If `outer` is not 4, print its value to the console.
 * 
 * Preconditions: None
 * Postconditions: The numbers from 0 to 3 are printed, and the loop is 
 *                 exited before 4 is printed.
 * 
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `for` loop iterates from 0 to `N` (0 to 10).
 * 3. If `outer` is 4, the program exits the loop and does not print that value.
 * 4. The program prints the values of `outer` until it reaches 4.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 * 
 * Traversal Table:
 * +-------+----------------------+---------------------+------------------+----------------+
 * | Iter  | Current Value of `outer` | Termination Condition | Action Taken| New Value of `outer` |
 * +-------+----------------------+---------------------+------------------+----------------+
 * | 1     | 0                    | 0 <= 10             | Print 0          | 1              |
 * | 2     | 1                    | 1 <= 10             | Print 1          | 2              |
 * | 3     | 2                    | 2 <= 10             | Print 2          | 3              |
 * | 4     | 3                    | 3 <= 10             | Print 3          | 4              |
 * | 5     | 4                    | 4 <= 10             | Skip (break)     | N/A            |
 * +-------+----------------------+---------------------+------------------+----------------+
 * 
 * Output:
 * The output of the program will be:
 * 0 1 2 3
 */

#include <stdio.h>

int main() {
    int N = 10; // Maximum value for outer loop
    int outer;

    // For loop iterating from 0 to N
    for (outer = 0; outer <= N; outer++) {
        if (outer == 4) {
            break; // Exit the loop if outer is equal to 4
        }
        printf("%d ", outer); // Print the current value of outer
    }
    
    return 0; // Indicate successful completion
}
