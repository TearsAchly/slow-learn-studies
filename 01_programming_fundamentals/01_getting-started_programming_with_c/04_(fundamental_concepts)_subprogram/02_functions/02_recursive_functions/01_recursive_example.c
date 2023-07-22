/*
 * Program Title: Recursive Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates a recursive function. 
 *              It calculates the sum of integers from the input 
 *              number down to 1, printing each number along with 
 *              the result of the sum.
 *
 * Logic:
 *        1. Define a recursive function `recursive_example` that takes an integer `a` as input.
 *        2. If `a` is greater than 0:
 *           a. Print the current value of `a`.
 *           b. If `a` is greater than 1, print a '+' sign.
 *           c. Call `recursive_example` with the value `a - 1`, and add the result to `a`.
 *        3. If `a` is not greater than 0, return 0 as the base case.
 *
 * Preconditions: The input to the function should be a non-negative integer.
 * Postconditions: The program prints each integer from the input number down to 1,
 *                 followed by the total sum of these integers.
 * Edge Cases: If the input is 0 or negative, the function will not print any numbers.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The function `recursive_example` is called with the input value of 10.
 * 3. The recursive function prints each number and computes the sum.
 * 4. After the recursion completes, the program prints the total sum.
 * 5. The program reaches the `return 0;` statement, indicating successful execution.
 * 6. The program terminates and returns the value `0` to the operating system.
 *
 * Traversal Table:
 * | Current Value of `a` | Condition Check | Result           | Action                     |
 * |-----------------------|------------------|------------------|----------------------------|
 * | 10                    | 10 > 0           | Print: 10        | Recursive call with 9      |
 * | 9                     | 9 > 0            | Print: 9         | Recursive call with 8      |
 * | 8                     | 8 > 0            | Print: 8         | Recursive call with 7      |
 * | 7                     | 7 > 0            | Print: 7         | Recursive call with 6      |
 * | 6                     | 6 > 0            | Print: 6         | Recursive call with 5      |
 * | 5                     | 5 > 0            | Print: 5         | Recursive call with 4      |
 * | 4                     | 4 > 0            | Print: 4         | Recursive call with 3      |
 * | 3                     | 3 > 0            | Print: 3         | Recursive call with 2      |
 * | 2                     | 2 > 0            | Print: 2         | Recursive call with 1      |
 * | 1                     | 1 > 0            | Print: 1         | Recursive call with 0      |
 * | 0                     | 0 > 0            | FALSE            | Return 0                   |
 * |                       |                  |                  | Sum: 10 + 9 + ... + 1 = 55 |
 */

#include <stdio.h>

/*
 * Function Name: recursive_example
 * Parameters: 
 *   - int a: A non-negative integer from which to start summing down to 1.
 * Returns: 
 *   - int: The total sum of integers from `a` down to 1.
 * Description: This function takes a non-negative integer `a`, prints each integer 
 *              from `a` down to 1, and returns the sum of these integers. It utilizes 
 *              recursion to perform the calculation.
 */
int recursive_example(int a) {
    if (a > 0) {
        printf("%d", a); // Print current number
        if (a > 1) {
            printf(" + "); // Print '+' if more numbers follow
        }
        return a + recursive_example(a - 1); // Recursive call
    } else {
        return 0; // Base case
    }
}

int main() {
    int result = recursive_example(10); // Start recursion with 10
    printf(" = %d\n", result); // Print the total sum
    return 0; // Exit the program
}
