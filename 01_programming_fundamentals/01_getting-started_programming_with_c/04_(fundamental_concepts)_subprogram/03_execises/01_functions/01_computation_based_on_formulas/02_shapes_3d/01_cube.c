/*
 * Program Title: Cube Calculation
 * Author: Achly
 * Date: July 2023
 * Description: This program calculates the surface area and volume of a cube 
 *              given the length of its side.
 *
 * Logic:
 *        1. The function `calculate_cube` takes the side length as a parameter.
 *        2. It calculates the surface area using the formula: 
 *           surface area = 6 * (side²).
 *        3. It calculates the volume using the formula: 
 *           volume = side³.
 *        4. The function then prints the calculated surface area and volume.
 *
 * Preconditions: The input side length should be a positive integer.
 * Postconditions: The program outputs the surface area and volume of the cube.
 * Edge Cases: The result is meaningless if the side length is less than or equal to zero.
 */

#include <stdio.h>

/*
 * Function Name: calculate_cube
 * Parameters: 
 *   - int side: The length of the side of the cube.
 * Returns: 
 *   - int: Always returns 0.
 * Description: This function calculates the surface area and volume of a cube 
 *              using the given side length.
 */
int calculate_cube(int side) {
    int area;   // Variable to store surface area
    int volume; // Variable to store volume

    // Calculate surface area and volume
    area = 6 * (side * side);      // Surface area formula for a cube
    volume = side * side * side;    // Volume formula for a cube

    // Print results
    printf("The surface area of the cube is: %d square cm\n", area);
    printf("The volume of the cube is: %d cubic cm\n", volume);

    return 0; // Indicate successful completion of function
}

int main() {
    int side; // Variable to store side length

    // Input side length from user
    printf("Enter the length of the side of the cube (in cm): ");
    scanf("%d", &side);

    // Calculate and display cube properties
    calculate_cube(side);

    return 0; // Program termination
}
