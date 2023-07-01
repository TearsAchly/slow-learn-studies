/*
 * Program Title: Mathematical Operators
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of various mathematical 
 *              operators in C, including addition, subtraction, 
 *              multiplication, division, and modulus for different data types.
 *
 * Logic: The program performs mathematical operations on integers, floats, and doubles, storing the results in respective variables.
 * Preconditions: The operands must be defined before performing operations.
 * Postconditions: The results of the operations are printed to the console.
 * Edge Cases: Integer division truncates the decimal part, and overflow can occur 
 *              if results exceed the range of data types.
 */

#include <stdio.h>

int main() {
    // Integer operations
    int sum = 10 + 10;                      // Addition of two integers
    int sub = 30 - 20;                      // Subtraction of two integers
    int mul = 10 * 10;                      // Multiplication of two integers
    int div = 10 / 3;                       // Integer division (result truncated)
    int mod = 10 % 3;                       // Modulus operation

    // Float operations
    float fsum = 1.5f + 1.5f;               // Addition of two floats
    float fsub = 2.5f - 1.3f;               // Subtraction of two floats
    float fmul = 2.5f * 2.0f;               // Multiplication of two floats
    float fdiv = 5.0f / 1.5f;               // Division of two floats

    // Double operations
    double dsum = 3.5 + 4.5;                // Addition of two doubles
    double dsub = 6.5 - 3.3;                // Subtraction of two doubles
    double dmul = 7.5 * 5.0;                // Multiplication of two doubles
    double ddiv = 8.0 / 8.5;                // Division of two doubles

    // Print integer results
    printf("INT\n");
    printf("The sum of 10 + 10 is: %d\n", sum);
    printf("The subtraction of 30 - 20 is: %d\n", sub);
    printf("The multiplication of 10 * 10 is: %d\n", mul);
    printf("The division of 10 / 3 (integer division) is: %d\n", div);
    printf("The modulus of 10 %% 3 (modulus) is: %d\n", mod);

    // Print float results
    printf("\nFLOAT\n");
    printf("The sum of 1.5 + 1.5 is: %f\n", fsum);
    printf("The subtraction of 2.5 - 1.3 is: %f\n", fsub);
    printf("The multiplication of 2.5 * 2.0 is: %f\n", fmul);
    printf("The division of 5.0 / 1.5 is: %f\n", fdiv);

    // Print double results
    printf("\nDOUBLE\n");
    printf("The sum of 3.5 + 4.5 is: %lf\n", dsum);
    printf("The subtraction of 6.5 - 3.3 is: %lf\n", dsub);
    printf("The multiplication of 7.5 * 5.0 is: %lf\n", dmul);
    printf("The division of 8.0 / 8.5 is: %lf\n", ddiv);

    return 0;
}
