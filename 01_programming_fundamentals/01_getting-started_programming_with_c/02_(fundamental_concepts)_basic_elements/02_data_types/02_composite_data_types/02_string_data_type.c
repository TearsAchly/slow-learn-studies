/*
 * Program Title: String Data Type Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates how to declare and print a string in C
 *              using the character array method.
 *
 * Logic:
 *        1. Declare a character array `name` and initialize it with the string "achly".
 *        2. Use the `printf` function with the format specifier `%s` to print the string.
 *
 * Preconditions:
 *        - The character array `name` must be null-terminated, which is automatically handled when using
 *          double quotes to initialize the string.
 *
 * Postconditions:
 *        - The program will output the string "achly" to the console.
 *
 * Edge Cases:
 *        - The program assumes the string is properly null-terminated. If the array is not null-terminated,
 *          printing may result in undefined behavior.
 *
 * Program Flow:
 * 1. The character array `name` is declared and initialized with the value "achly".
 * 2. The `printf` function is used to print the value of `name` using the `%s` format specifier.
 * 3. The program terminates after printing the string.
 */

#include <stdio.h>

int main() {

  // Declare and initialize a string using a character array
  char name[] = "achly";

  // Print the string using %s format specifier
  printf("%s", name);

  return 0;
}
