/*
 * Program Title: Rectangle Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a rectangle 
 *              given its length and width.
 * Logic: 
 *        1. Declare variables for length, width, area, and perimeter.
 *        2. Prompt the user to enter the length and width of the rectangle.
 *        3. Read the length and width input from the user.
 *        4. Calculate the area using the formula: Area = length * width.
 *        5. Calculate the perimeter using the formula: Perimeter = 2 * (length + width).
 *        6. Print the calculated area and perimeter.
 *
 * Preconditions: The user must input valid integer values for the length and width.
 * Postconditions: The program outputs the calculated area and perimeter to the console.
 * Edge Cases: Input values less than or equal to zero may not represent a valid rectangle.
 *
 * Program Flow:
 * 1. Declare integer variables for length, width, area, and perimeter.
 * 2. Display a message prompting the user to enter the length of the rectangle.
 * 3. Read the length input from the user.
 * 4. Display a message prompting the user to enter the width of the rectangle.
 * 5. Read the width input from the user.
 * 6. Calculate the area of the rectangle using the formula: Area = length * width.
 * 7. Calculate the perimeter of the rectangle using the formula: Perimeter = 2 * (length + width).
 * 8. Display the calculated area and perimeter to the console.
 */

#include <stdio.h>

int main() {
    int length;  // Variable to store length
    int width;   // Variable to store width
    int Area;    // Variable to store area
    int Perimeter; // Variable to store perimeter

    // Input length and width
    printf("\nEnter the length of the rectangle: ");
    scanf("%d", &length);
    printf("\nEnter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area and perimeter
    Area = length * width;
    Perimeter = 2 * (length + width);

    // Print results
    printf("\nThe area of this rectangle is: %d cm²", Area);
    printf("\nThe perimeter of this rectangle is: %d cm", Perimeter);
  
    return 0;
}
