/*
 * Program Title: Boolean Data Types
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the boolean data type and its
 *              representation in C (0 for false, 1 for true).
 * Logic: The program prints boolean values for false and true.
 * Preconditions: The stdbool.h library must be included to use boolean types.
 * Postconditions: The boolean values are printed to the console.
 * Edge Cases: Boolean representation may vary in other programming languages.
 *
 * Program Flow:
 * 1. The program starts execution from the `main` function.
 * 2. It prints the boolean representation of `false` (which is 0) 
 *    using the `printf` function.
 * 3. It prints the boolean representation of `true` (which is 1) 
 *    using the `printf` function.
 * 4. The program returns `0`, indicating successful execution.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    // Print boolean values for false and true
    printf("\nfalse == %d (Boolean false is represented as 0)", false);
    printf("\ntrue == %d (Boolean true is represented as 1)", true);

    return 0;
}
