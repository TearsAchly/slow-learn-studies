/*
 * Program Title: Do-While Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of a do-while loop 
 *              to print numbers from 0 to 10. The loop is guaranteed 
 *              to execute at least once.
 *
 * Logic:
 * 1. Initialize an integer variable `i` to 0 as a counter.
 * 2. Use a do-while loop to execute the block of code at least once.
 * 3. Inside the loop, print the current value of `i`.
 * 4. Increment `i` by 1 after printing to ensure the loop condition is updated.
 * 5. Continue looping while the condition `i <= 10` remains true.
 *
 * Preconditions: The variable `i` should be initialized to 0.
 * Postconditions: The program will print integers from 0 to 10, inclusive.
 * Edge Cases: If the initial value of `i` is greater than 10, the loop will still execute once.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `do` block executes and prints the current value of `i`.
 * 3. The program increments `i` by 1.
 * 4. The loop condition (`i <= 10`) is checked, and if true, the loop continues.
 * 5. When `i` reaches 11, the loop terminates.
 * 6. The program reaches the `return 0;` statement, indicating successful execution.
 * 7. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 * | Initial Value | Termination Condition  | Result             | Action             | Increment/Decrement |
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 * | i = 0        | 0 <= 10               | TRUE               | Print: i = 0       | i = 1               |
 * | i = 1        | 1 <= 10               | TRUE               | Print: i = 1       | i = 2               |
 * | i = 2        | 2 <= 10               | TRUE               | Print: i = 2       | i = 3               |
 * | i = 3        | 3 <= 10               | TRUE               | Print: i = 3       | i = 4               |
 * | i = 4        | 4 <= 10               | TRUE               | Print: i = 4       | i = 5               |
 * | i = 5        | 5 <= 10               | TRUE               | Print: i = 5       | i = 6               |
 * | i = 6        | 6 <= 10               | TRUE               | Print: i = 6       | i = 7               |
 * | i = 7        | 7 <= 10               | TRUE               | Print: i = 7       | i = 8               |
 * | i = 8        | 8 <= 10               | TRUE               | Print: i = 8       | i = 9               |
 * | i = 9        | 9 <= 10               | TRUE               | Print: i = 9       | i = 10              |
 * | i = 10       | 10 <= 10              | TRUE               | Print: i = 10      | i = 11              |
 * | i = 11       | 11 <= 10              | FALSE              | Not executed       | Exit the loop       |
 * +---------------+-----------------------+--------------------+--------------------+---------------------+
 * 
 * Output:
 * The output of the program will be:
 * 0
 * 1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 10
 */

#include <stdio.h>

int main() {
    int i = 0; // Initialize counter

    do {
        printf("%d\n", i); // Print the current value
        i++; // Increment counter
    } while (i <= 10); // Loop condition

    return 0; // Indicate successful completion
}
