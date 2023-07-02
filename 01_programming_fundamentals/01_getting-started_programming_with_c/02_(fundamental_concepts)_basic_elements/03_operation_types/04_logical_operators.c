/*
 * Program Title: Logical Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of logical operators 
 *              in C, including AND (&&), OR (||), and NOT (!). Logical 
 *              operators are used to combine or modify boolean values 
 *              for conditional expressions.
 * 
 * Logic: The program evaluates various combinations of boolean values 
 *        using logical operators and prints the results to the console.
 * 
 * Preconditions: The boolean values must be defined before using them 
 *                with logical operators.
 *
 * Postconditions: The results of the logical operations are printed to 
 *                 the console, showing the outcome of each operation.
 *
 * Edge Cases: Ensure that logical expressions are constructed properly 
 *             to avoid unexpected results.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    // Logical AND
    printf("true && true : %d (true)\n", true && true);        // Both true
    printf("false && false : %d (false)\n", false && false);  // Both false
    printf("true && false : %d (false)\n", true && false);    // One true, one false
    printf("false && true : %d (false)\n\n", false && true);  // One false, one true

    // Logical OR
    printf("true || true : %d (true)\n", true || true);        // Both true
    printf("false || false : %d (false)\n", false || false);   // Both false
    printf("true || false : %d (true)\n", true || false);      // One true, one false
    printf("false || true : %d (true)\n\n", false || true);    // One false, one true

    // Logical NOT
    printf("!true : %d (false)\n", !true);                     // Negation of true
    printf("!false : %d (true)\n\n", !false);                  // Negation of false

    return 0;
}
