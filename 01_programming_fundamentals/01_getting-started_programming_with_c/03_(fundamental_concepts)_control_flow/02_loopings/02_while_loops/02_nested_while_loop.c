/*
 * Program Title: Nested While Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of nested while loops.
 *              The outer loop iterates from 1 to N, and the inner loop 
 *              prints numbers from 1 to the current value of the outer loop.
 * 
 * Logic:
 * 1. Initialize the outer loop counter `outer` to 1 and define a maximum value `N`.
 * 2. Use a while loop for the outer loop, which runs as long as `outer` is less than or equal to `N`.
 * 3. Inside the outer loop, print the current value of `outer`.
 * 4. Initialize the inner loop counter `inner` to 1.
 * 5. Use a while loop for the inner loop, which runs as long as `inner` is less than or equal to `outer`.
 * 6. Inside the inner loop, print the current value of `inner`.
 * 7. Increment both `inner` and `outer` counters after their respective loops.
 * 
 * Preconditions: The variable `outer` should start from 1, and `N` should be set to a positive integer.
 * Postconditions: The program will print a structured output showing the current values of `outer` and `inner`.
 * 
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The outer while loop iterates while `outer` is less than or equal to `N`.
 * 3. For each iteration of the outer loop, it initializes `inner` and runs the inner while loop.
 * 4. The inner loop prints values from 1 up to the current value of `outer`.
 * 5. The program increments `outer` after each complete execution of the inner loop.
 * 6. The program reaches the `return 0;` statement, indicating successful execution.
 * 7. The program terminates and returns the value `0` to the operating system.
 * 
 * Traversal Table:
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 * | Iteration     | Current Value of `outer` | Termination Condition | Action Taken       | New Value of `outer` |
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 * | 1             | 1                     | 1 <= 4              | Print outer = 1    | inner = 1           |
 * | inner = 1     | 1                     | 1 <= 1              | Print inner = 1    | inner = 2           |
 * | 2             | 2                     | 2 <= 4              | Print outer = 2    | inner = 1           |
 * | inner = 1     | 2                     | 1 <= 2              | Print inner = 1    | inner = 2           |
 * | inner = 2     | 2                     | 2 <= 2              | Print inner = 2    | inner = 3           |
 * | 3             | 3                     | 3 <= 4              | Print outer = 3    | inner = 1           |
 * | inner = 1     | 3                     | 1 <= 3              | Print inner = 1    | inner = 2           |
 * | inner = 2     | 3                     | 2 <= 3              | Print inner = 2    | inner = 3           |
 * | inner = 3     | 3                     | 3 <= 3              | Print inner = 3    | inner = 4           |
 * | 4             | 4                     | 4 <= 4              | Print outer = 4    | inner = 1           |
 * | inner = 1     | 4                     | 1 <= 4              | Print inner = 1    | inner = 2           |
 * | inner = 2     | 4                     | 2 <= 4              | Print inner = 2    | inner = 3           |
 * | inner = 3     | 4                     | 3 <= 4              | Print inner = 3    | inner = 4           |
 * | inner = 4     | 4                     | 4 <= 4              | Print inner = 4    | inner = 5           |
 * | 5             | 5                     | 5 <= 4              | Not executed       | Exit the loop       |
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 */

#include <stdio.h>

int main() {
    int outer = 1; // Initialize outer loop counter
    int N = 4; // Maximum value for the outer loop

    while (outer <= N) { // Outer loop condition
        printf("outer : %d\n", outer); // Print outer value

        int inner = 1; // Initialize inner loop counter
        while (inner <= outer) { // Inner loop condition
            printf("  inner : %d\n", inner); // Print inner value
            inner++; // Increment inner counter
        }
        outer++; // Increment outer counter
    }

    return 0; // Indicate successful completion
}
