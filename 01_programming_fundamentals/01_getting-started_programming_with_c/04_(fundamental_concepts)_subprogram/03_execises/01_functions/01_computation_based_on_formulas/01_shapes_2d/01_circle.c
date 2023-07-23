/*
 * Program Title: Circle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and circumference of a circle 
 *              given its radius.
 *
 * Logic:
 *        1. Define a constant for Pi (π).
 *        2. Create a function `calculate_circle` that takes the radius as a parameter.
 *        3. Inside the function, calculate the area using the formula: area = π * radius².
 *        4. Calculate the circumference using the formula: circumference = 2 * π * radius.
 *        5. Print the calculated area and circumference.
 *
 * Preconditions: The input `radius` should be a positive number.
 * Postconditions: The program outputs the area and circumference of the circle.
 * Edge Cases: If the radius is less than or equal to zero, the area and circumference cannot be calculated meaningfully.
 */

#include <stdio.h>

const float π = 3.14; // Define the constant for Pi

/*
 * Function Name: calculate_circle
 * Parameters: 
 *   - float radius: The radius of the circle.
 * Returns: 
 *   - float: Returns 0 after calculating the area and circumference.
 * Description: This function computes the area and circumference of a circle 
 *              based on the provided radius. It prints the calculated area and 
 *              circumference, formatted to two decimal places.
 */
float calculate_circle(float radius) {
    // Declare variables to store the area and circumference
    float area;
    float circumference;

    // Calculate area using the formula π * radius²
    area = π * radius * radius;

    // Calculate circumference using the formula 2 * π * radius
    circumference = 2 * π * radius;

    // Print the calculated area and circumference
    printf("\nThe area of this circle is: %.2f cm²", area);
    printf("\nThe circumference of this circle is: %.2f cm", circumference);

    return 0; // Indicate the function's completion
}

int main() {
    float radius; // Declare a variable to store the radius input from the user

    // Prompt the user to enter the radius of the circle
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius); // Read the user's input

    // Call the function to calculate and print the circle's area and circumference
    calculate_circle(radius);

    return 0; // Exit the program
}
