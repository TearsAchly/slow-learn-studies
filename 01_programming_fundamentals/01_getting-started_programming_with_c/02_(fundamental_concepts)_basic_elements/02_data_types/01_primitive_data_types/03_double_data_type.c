/*
 * Program Title: Double Data Types
 * Author: Achly
 * Date: June 2023
 * Description: This program demonstrates the double data type and various formats for displaying double values.
 *
 * Logic: The program defines a double variable and displays it in different formats.
 * Preconditions: The double variable must be defined before it can be used.
 * Postconditions: The double value is printed in various formats to the console.
 * Edge Cases: Precision issues may occur when using floating-point arithmetic.
 *
 * Program Flow:
 * 1. The program begins execution in the `main` function.
 * 2. A double variable `π` is declared and initialized with the value 3.14.
 * 3. The value of `π` is displayed in four different formats:
 *    - Default double format using `%lf`.
 *    - General format using `%lg`, which switches between fixed-point and scientific notation.
 *    - Hexadecimal format using `%la` to show the double value in hexadecimal notation.
 *    - Scientific format using `%le` for scientific notation.
 * 4. The program ends by returning 0, signaling successful execution.
 * 5. The operating system receives the return value `0`, and the program terminates.
 */

#include <stdio.h>

int main() {
    double π = 3.14;  // Define a double variable 'π'

    // Print the value of π in different formats
    printf("Double value in default format (%%lf): %lf\n", π);
    printf("Double value in general format (%%lg): %lg\n", π);
    printf("Double value in hexadecimal format (%%la): %la\n", π);
    printf("Double value in scientific format (%%le): %le\n", π);

    return 0;
}
