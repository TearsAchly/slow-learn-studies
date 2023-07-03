/*
 * Program Title: Circle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and circumference of a circle 
 *              given its radius.
 * Logic: 
 *        1. Define a constant for π (Pi).
 *        2. Declare variables for the radius, area, and circumference.
 *        3. Prompt the user to enter the radius of the circle.
 *        4. Read the radius input from the user.
 *        5. Calculate the area using the formula: Area = π * radius².
 *        6. Calculate the circumference using the formula: Circumference = 2 * π * radius.
 *        7. Print the calculated area and circumference.
 *
 * Preconditions: The user must input a valid float value for the radius.
 * Postconditions: The program outputs the calculated area and circumference to the console.
 * Edge Cases: Input values less than or equal to zero may not represent a valid circle.
 *
 * Program Flow:
 * 1. Initialize the constant π (Pi) with the value of 3.14.
 * 2. Declare variables to store the radius, area, and circumference.
 * 3. Display a message prompting the user to enter the radius of the circle.
 * 4. Read the radius input from the user.
 * 5. Calculate the area of the circle using the formula: Area = π * radius².
 * 6. Calculate the circumference of the circle using the formula: Circumference = 2 * π * radius.
 * 7. Display the calculated area and circumference to the console.
 */

#include <stdio.h>

int main() {
    const float π = 3.14; // Pi constant
    float radius;         // Variable to store radius
    float Area;          // Variable to store area
    float Circumference;  // Variable to store circumference

    // Input radius
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    Area = π * radius * radius;
    Circumference = 2 * π * radius;

    // Print results
    printf("\nThe area of this circle is: %.2f cm²", Area);
    printf("\nThe circumference of this circle is: %.2f cm", Circumference);
  
    return 0;
}
