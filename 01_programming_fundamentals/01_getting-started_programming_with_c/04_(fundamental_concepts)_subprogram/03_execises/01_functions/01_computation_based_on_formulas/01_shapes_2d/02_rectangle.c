/*
 * Program Title: Rectangle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a rectangle 
 *              given its width and length.
 *
 * Logic:
 *        1. Create a function `calculate_rectangle` that takes the width and length as parameters.
 *        2. Inside the function, calculate the area using the formula: area = length * width.
 *        3. Calculate the perimeter using the formula: perimeter = 2 * (length + width).
 *        4. Print the calculated area and perimeter.
 *
 * Preconditions: The input `width` and `length` should be positive integers.
 * Postconditions: The program outputs the area and perimeter of the rectangle.
 * Edge Cases: If either width or length is less than or equal to zero, the area and perimeter cannot be calculated meaningfully.
 */

#include <stdio.h>

/*
 * Function Name: calculate_rectangle
 * Parameters: 
 *   - int width: The width of the rectangle.
 *   - int length: The length of the rectangle.
 * Returns: 
 *   - int: Returns 0 after calculating the area and perimeter.
 * Description: This function computes the area and perimeter of a rectangle 
 *              based on the provided dimensions and prints the results.
 */
int calculate_rectangle(int width, int length) {
    int area;      // Variable to store the area
    int perimeter; // Variable to store the perimeter

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Print the calculated area and perimeter
    printf("\nThe area of this rectangle is: %d cm²", area);
    printf("\nThe perimeter of this rectangle is: %d cm", perimeter);

    return 0; // Indicate the function's completion
}

int main() {
    int width;   // Declare a variable to store the user-input width
    int length;  // Declare a variable to store the user-input length

    // Prompt the user to enter the dimensions of the rectangle
    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &length);
    printf("\nEnter the width of the rectangle: ");
    scanf("%d", &width);

    // Call the function to calculate and print the area and perimeter of the rectangle
    calculate_rectangle(width, length);

    return 0; // Exit the program
}
