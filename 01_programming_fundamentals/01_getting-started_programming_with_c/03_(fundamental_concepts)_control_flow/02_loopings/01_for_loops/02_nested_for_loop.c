/*
 * Program Title: Nested For Loop Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of nested for loops. 
 *              The outer loop iterates from 1 to N, and the inner loop 
 *              prints numbers from 1 to the current value of the outer loop.
 *
 * Logic:
 *        1. Declare an integer variable `N` to define the maximum value for the outer loop.
 *        2. Use a for loop (outer) to iterate from 1 to `N`.
 *        3. Inside the outer loop, print the current value of the outer loop variable.
 *        4. Use another for loop (inner) to iterate from 1 to the current value of the outer loop.
 *        5. Inside the inner loop, print the current value of the inner loop variable.
 *        6. After the inner loop, indicate the end of that iteration.
 *
 * Preconditions: The variable `N` should be a positive integer.
 * Postconditions: The program outputs the current value of both the outer and inner loop variables.
 * Edge Cases: If N is less than 1, the program will not output any numbers.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The variable `N` is initialized to 4.
 * 3. The outer loop iterates from 1 to `N`.
 * 4. For each iteration of the outer loop, the current value is printed.
 * 5. The inner loop iterates from 1 to the current value of the outer loop, printing its values.
 * 6. The program reaches the `return 0;` statement, indicating successful execution.
 * 7. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Initial Value | Termination Condition | Result   | Action             | Increment/Decrement |
 * |---------------|-----------------------|----------|--------------------|---------------------|
 * | 1             | 1 <= 4                | TRUE     | Outer: 1           | 1 + 1 = 2           |
 * | 1             | 1 <= 1                | TRUE     | Inner: 1           | 1 + 1 = 2           |
 * | 2             | 2 <= 4                | TRUE     | Outer: 2           | 2 + 1 = 3           |
 * | 2             | 1 <= 2                | TRUE     | Inner: 1           | 1 + 1 = 2           |
 * | 2             | 2 <= 2                | TRUE     | Inner: 2           | 2 + 1 = 3           |
 * | 3             | 3 <= 4                | TRUE     | Outer: 3           | 3 + 1 = 4           |
 * | 3             | 1 <= 3                | TRUE     | Inner: 1           | 1 + 1 = 2           |
 * | 3             | 2 <= 3                | TRUE     | Inner: 2           | 2 + 1 = 3           |
 * | 3             | 3 <= 3                | TRUE     | Inner: 3           | 3 + 1 = 4           |
 * | 4             | 4 <= 4                | TRUE     | Outer: 4           | 4 + 1 = 5           |
 * | 4             | 1 <= 4                | TRUE     | Inner: 1           | 1 + 1 = 2           |
 * | 4             | 2 <= 4                | TRUE     | Inner: 2           | 2 + 1 = 3           |
 * | 4             | 3 <= 4                | TRUE     | Inner: 3           | 3 + 1 = 4           |
 * | 4             | 4 <= 4                | TRUE     | Inner: 4           | 4 + 1 = 5           |
 * | 5             | 5 <= 4                | FALSE    | Not executed       | Exit the loop       |
 */

#include <stdio.h>

int main() {
    int N = 4; // Maximum value for the outer loop
    
    // Outer loop
    int outer;
    for (outer = 1; outer <= N; outer++) {
        printf("\nOuter : %d", outer);
        
        // Inner loop
        for (int inner = 1; inner <= outer; inner++) {
            printf("\n  Inner : %d", inner);
        }
        
        printf(" <== last loop inner");
    }

    return 0; // Indicate successful completion
}
