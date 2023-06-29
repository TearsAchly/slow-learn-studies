/*
 * Program Title: Float Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates the float data type and various formats for displaying float values.
 *
 * Logic: The program defines a float variable and displays it in different formats.
 * Preconditions: The float variable must be defined before it can be used.
 * Postconditions: The float value is printed in various formats to the console.
 * Edge Cases: Precision issues may occur when using floating-point arithmetic.
 *
 * Program Flow:
 * 1. The program starts with the `main` function.
 * 2. A float variable `π` is defined and initialized with the value 3.14.
 * 3. The value of `π` is displayed in four different formats:
 *    - Default float format using `%f`.
 *    - General format using `%g` which switches between fixed-point and scientific format.
 *    - Hexadecimal representation using `%a` to show the float in hexadecimal format.
 *    - Scientific format using `%e` for scientific notation.
 * 4. The program ends with `return 0;` to indicate successful execution.
 * 5. The program terminates and returns `0` to the operating system.
 */

#include <stdio.h>

int main() {

  float π = 3.14;
  printf("\nFloat value in default format (%%f): %f", π);
  printf("\nFloat value in general format (%%g): %g", π);
  printf("\nFloat value in hexadecimal format (%%a): %a", π);
  printf("\nFloat value in scientific format (%%e): %e", π);

  return 0;
}
