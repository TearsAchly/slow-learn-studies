/*
 * Program Title: Nested Do-While Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of nested do-while loops. 
 *              The outer loop iterates from 0 to N, and the inner loop 
 *              prints numbers from 1 to N for each iteration of the outer loop.
 *
 * Logic:
 * 1. Initialize an integer variable `outer` to 0 as the counter for the outer loop.
 * 2. Define a maximum integer variable `N` to determine the limit for both loops.
 * 3. Use a do-while loop for the outer loop that executes while `outer` is less than or equal to `N`.
 * 4. Inside the outer loop, print the current value of `outer`.
 * 5. Initialize an integer variable `inner` to 1 for the inner loop counter.
 * 6. Use a nested do-while loop for the inner loop that executes while `inner` is less than or equal to `N`.
 * 7. Inside the inner loop, print the current value of `inner`.
 * 8. Increment `inner` after each iteration of the inner loop.
 * 9. After the inner loop completes, increment the `outer` counter.
 *
 * Preconditions: The variable `N` should be a positive integer.
 * Postconditions: The program will print structured output showing the current values of both outer and inner loop variables.
 * Edge Cases: If `N` is less than 0, the program will not produce any output.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The outer loop iterates from 0 to `N` (0 to 4).
 * 3. For each value of `outer`, the inner loop iterates from 1 to `N`.
 * 4. The program prints the values of `outer` and `inner` during each iteration.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * +-------+-------------+---------------------------+--------------------+--------------------+
 * | Outer | Inner Value | Termination Condition      | Result             | Action             |
 * +-------+-------------+---------------------------+--------------------+--------------------+
 * | 0     | 1           | inner <= N (1 <= 4)       | Print Inner: 1     | Increment inner     |
 * | 0     | 2           | inner <= N (2 <= 4)       | Print Inner: 2     | Increment inner     |
 * | 0     | 3           | inner <= N (3 <= 4)       | Print Inner: 3     | Increment inner     |
 * | 0     | 4           | inner <= N (4 <= 4)       | Print Inner: 4     | Increment inner     |
 * | 0     | 5           | inner <= N (5 <= 4)       | Not executed       | Exit inner loop     |
 * | 0     | -           | outer <= N (0 <= 4)       | Print Outer: 0     | Increment outer     |
 * | 1     | 1           | inner <= N (1 <= 4)       | Print Inner: 1     | Increment inner     |
 * | 1     | 2           | inner <= N (2 <= 4)       | Print Inner: 2     | Increment inner     |
 * | 1     | 3           | inner <= N (3 <= 4)       | Print Inner: 3     | Increment inner     |
 * | 1     | 4           | inner <= N (4 <= 4)       | Print Inner: 4     | Increment inner     |
 * | 1     | 5           | inner <= N (5 <= 4)       | Not executed       | Exit inner loop     |
 * | 1     | -           | outer <= N (1 <= 4)       | Print Outer: 1     | Increment outer     |
 * | 2     | 1           | inner <= N (1 <= 4)       | Print Inner: 1     | Increment inner     |
 * | 2     | 2           | inner <= N (2 <= 4)       | Print Inner: 2     | Increment inner     |
 * | 2     | 3           | inner <= N (3 <= 4)       | Print Inner: 3     | Increment inner     |
 * | 2     | 4           | inner <= N (4 <= 4)       | Print Inner: 4     | Increment inner     |
 * | 2     | 5           | inner <= N (5 <= 4)       | Not executed       | Exit inner loop     |
 * | 2     | -           | outer <= N (2 <= 4)       | Print Outer: 2     | Increment outer     |
 * | 3     | 1           | inner <= N (1 <= 4)       | Print Inner: 1     | Increment inner     |
 * | 3     | 2           | inner <= N (2 <= 4)       | Print Inner: 2     | Increment inner     |
 * | 3     | 3           | inner <= N (3 <= 4)       | Print Inner: 3     | Increment inner     |
 * | 3     | 4           | inner <= N (4 <= 4)       | Print Inner: 4     | Increment inner     |
 * | 3     | 5           | inner <= N (5 <= 4)       | Not executed       | Exit inner loop     |
 * | 3     | -           | outer <= N (3 <= 4)       | Print Outer: 3     | Increment outer     |
 * | 4     | 1           | inner <= N (1 <= 4)       | Print Inner: 1     | Increment inner     |
 * | 4     | 2           | inner <= N (2 <= 4)       | Print Inner: 2     | Increment inner     |
 * | 4     | 3           | inner <= N (3 <= 4)       | Print Inner: 3     | Increment inner     |
 * | 4     | 4           | inner <= N (4 <= 4)       | Print Inner: 4     | Increment inner     |
 * | 4     | 5           | inner <= N (5 <= 4)       | Not executed       | Exit inner loop     |
 * | 4     | -           | outer <= N (4 <= 4)       | Print Outer: 4     | Increment outer     |
 * | 5     | -           | outer <= N (5 <= 4)       | Not executed       | Exit outer loop     |
 * +-------+-------------+---------------------------+--------------------+--------------------+
 * 
 * Output:
 * The output of the program will be:
 * Outer: 0
 *  Inner: 1
 *  Inner: 2
 *  Inner: 3
 *  Inner: 4
 * Outer: 1
 *  Inner: 1
 *  Inner: 2
 *  Inner: 3
 *  Inner: 4
 * Outer: 2
 *  Inner: 1
 *  Inner: 2
 *  Inner: 3
 *  Inner: 4
 * Outer: 3
 *  Inner: 1
 *  Inner: 2
 *  Inner: 3
 *  Inner: 4
 * Outer: 4
 *  Inner: 1
 *  Inner: 2
 *  Inner: 3
 *  Inner: 4
 */

#include <stdio.h>

int main() {
    int outer = 0; // Initialize outer loop counter
    int N = 4; // Maximum value for the outer loop

    // Outer loop
    do {
        printf("Outer: %d\n", outer); // Print outer value

        int inner = 1; // Reset inner loop counter for each outer iteration

        // Inner loop
        do {
            printf(" Inner: %d\n", inner); // Print inner value
            inner++; // Increment inner counter
        } while (inner <= N); // Inner loop condition

        outer++; // Increment outer counter
    } while (outer <= N); // Outer loop condition

    return 0; // Indicate successful completion
}
