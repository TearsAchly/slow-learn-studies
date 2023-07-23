/*
 * Program Title: Square Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a square 
 *              given the length of its side.
 *
 * Logic:
 *        1. Create a function `calculate_square` that takes the side length as a parameter.
 *        2. Inside the function, calculate the area using the formula: area = side * side.
 *        3. Calculate the perimeter using the formula: perimeter = 4 * side.
 *        4. Print the calculated area and perimeter.
 *
 * Preconditions: The input `side` should be a positive integer.
 * Postconditions: The program outputs the area and perimeter of the square.
 * Edge Cases: If the side length is less than or equal to zero, the area and perimeter cannot be calculated meaningfully.
 */

#include <stdio.h>

/*
 * Function Name: calculate_square
 * Parameters: 
 *   - int side: The length of the side of the square
 * Returns: 
 *   - int: Returns 0 after calculating the area and perimeter
 * Description: This function computes the area and perimeter of a square 
 *              based on the provided side length and prints the results.
 */
int calculate_square(int side) {
    int area;      // Variable to store the area
    int perimeter; // Variable to store the perimeter

    // Calculate area and perimeter
    area = side * side;
    perimeter = 4 * side;

    // Print the calculated area and perimeter
    printf("\nThe area of this square is: %d cm²", area);
    printf("\nThe perimeter of this square is: %d cm", perimeter);

    return 0; // Indicate the function's completion
}

int main() {
    int side; // Declare a variable to store the user-input side length

    // Prompt the user to enter the side length of the square
    printf("\nEnter the length of the side of the square: ");
    scanf("%d", &side);

    // Call the function to calculate and print the area and perimeter of the square
    calculate_square(side);

    return 0; // Exit the program
}
