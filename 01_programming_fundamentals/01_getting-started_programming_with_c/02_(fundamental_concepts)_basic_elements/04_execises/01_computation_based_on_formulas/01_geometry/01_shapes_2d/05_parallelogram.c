/*
 * Program Title: Parallelogram Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the area and perimeter of a parallelogram 
 *              given the lengths of its sides and its base and height.
 * Logic:
 *        1. Declare variables for the lengths of the sides, base, height, area, and perimeter.
 *        2. Prompt the user to enter the lengths of the sides, base, and height of the parallelogram.
 *        3. Read the input values from the user.
 *        4. Calculate the area using the formula: Area = base * height.
 *        5. Calculate the perimeter using the formula: Perimeter = 2 * (a + b).
 *        6. Print the calculated area and perimeter.
 *
 * Preconditions: The user must input valid integer values for the lengths of the sides, base, and height.
 * Postconditions: The program outputs the calculated area and perimeter to the console.
 * Edge Cases: Input values that do not define a valid parallelogram may lead to misleading results.
 *
 * Program Flow:
 * 1. Declare integer variables for the lengths of sides A and B, base, height, area, and perimeter.
 * 2. Display messages prompting the user to enter the lengths of sides A and B, the base, and the height.
 * 3. Read the side lengths, base, and height input from the user.
 * 4. Calculate the area of the parallelogram using the formula: Area = base * height.
 * 5. Calculate the perimeter of the parallelogram using the formula: Perimeter = 2 * (a + b).
 * 6. Display the calculated area and perimeter to the console.
 */

#include <stdio.h>

int main() {
    int a, b;        // Lengths of the sides
    int height;      // Height of the parallelogram
    int base;        // Base of the parallelogram
    int Area;        // Variable to store area
    int Perimeter;   // Variable to store perimeter

    // Input lengths of sides, base, and height
    printf("\nEnter the length A of the parallelogram: ");
    scanf("%d", &a);
    printf("\nEnter the length B of the parallelogram: ");
    scanf("%d", &b);
    printf("\nEnter the base of the parallelogram: ");
    scanf("%d", &base);
    printf("\nEnter the height of the parallelogram: ");
    scanf("%d", &height);

    // Calculate area and perimeter
    Area = base * height;
    Perimeter = 2 * (a + b);

    // Print results
    printf("\nThe area of this parallelogram is: %d cm²", Area);
    printf("\nThe perimeter of this parallelogram is: %d cm", Perimeter);

    return 0;
}
