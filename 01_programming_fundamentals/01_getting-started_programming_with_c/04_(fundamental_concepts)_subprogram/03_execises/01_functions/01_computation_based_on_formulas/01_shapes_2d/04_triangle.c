/*
 * Program Title: Triangle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a triangle 
 *              given the lengths of its sides and its base and height.
 *
 * Logic:
 *        1. Create a function `calculate_triangle` that takes lengths of sides,
 *           base, and height as parameters.
 *        2. Inside the function, calculate the area using the formula:
 *           area = 0.5 * base * height.
 *        3. Calculate the perimeter using the formula: perimeter = a + b + c.
 *        4. Print the calculated area and perimeter.
 *
 * Preconditions: The input side lengths, base, and height should be positive integers.
 * Postconditions: The program outputs the area and perimeter of the triangle.
 * Edge Cases: If any side length or height is less than or equal to zero, 
 *              the area and perimeter cannot be calculated meaningfully.
 */

#include <stdio.h>

/*
 * Function Name: calculate_triangle
 * Parameters: 
 *   - int a: Length of side A.
 *   - int b: Length of side B.
 *   - int c: Length of side C.
 *   - int base: The base length of the triangle.
 *   - int height: The height of the triangle.
 * Returns: 
 *   - int: Always returns 0.
 * Description: Calculates the area and perimeter of a triangle 
 *              using the given side lengths, base, and height.
 */
int calculate_triangle(int a, int b, int c, int base, int height) {
    float area;      // Variable to store area
    int perimeter;   // Variable to store perimeter

    // Calculate area and perimeter
    area = 0.5 * base * height; // Area formula for triangle
    perimeter = a + b + c;      // Perimeter formula for triangle

    // Print results
    printf("\nThe area of this triangle is: %.2f cm²", area);
    printf("\nThe perimeter of this triangle is: %d cm", perimeter);

    return 0; // Indicate completion of the function
}

int main() {
    int a, b, c; // Variables to store the lengths of the sides
    int base;    // Variable to store base length
    int height;  // Variable to store height

    // Input lengths of sides, base, and height
    printf("\nEnter the length A of the triangle: ");
    scanf("%d", &a);
    printf("\nEnter the length B of the triangle: ");
    scanf("%d", &b);
    printf("\nEnter the length C of the triangle: ");
    scanf("%d", &c);
    printf("\nEnter the base of the triangle: ");
    scanf("%d", &base);
    printf("\nEnter the height of the triangle: ");
    scanf("%d", &height);

    // Calculate and display triangle properties
    calculate_triangle(a, b, c, base, height);

    return 0; // Exit the program
}
