/*
 * Program Title: Character Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates the char data type and how characters can be represented as integers.
 *
 * Logic: The program defines various char types and prints their decimal values.
 * Preconditions: The char variable must be defined before it can be used.
 * Postconditions: The decimal values of the declared char types are printed to the console.
 * Edge Cases: Invalid characters may lead to unexpected behavior.
 *
 * Program Flow:
 * 1. The program starts execution from the `main` function.
 * 2. Various char data types are declared and initialized:
 *    - `char_value`: A regular character initialized to 'A'.
 *    - `signed_char_value`: A signed char initialized to -120.
 *    - `unsigned_char_value`: An unsigned char initialized to 120.
 * 3. The program prints the decimal value of each char variable using `printf`, 
 *    where the decimal value of a character can be obtained by using the `%d` format specifier.
 * 4. The program returns `0`, indicating successful execution.
 */

#include <stdio.h>

int main() {
    char char_value = 'A';                       // Regular char
    signed char signed_char_value = -120;        // Signed char
    unsigned char unsigned_char_value = 120;     // Unsigned char

    // Print the decimal value of each char
    printf("The decimal of this char %c is %d\n", char_value, char_value);
    printf("The decimal of this char %c is %d\n", signed_char_value, signed_char_value);
    printf("The decimal of this char %c is %d\n", unsigned_char_value, unsigned_char_value);

    return 0;
}
