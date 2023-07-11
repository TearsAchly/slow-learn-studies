/*
 * Program Title: Water Temperature State
 * Author: Achly
 * Date: July 2023
 * Description: This program determines the state of water (frozen, 
 *              liquid, or vapor) based on the given temperature in Celsius.
 *
 * Logic:
 * 1. Declare a float variable `input_user` to store the water temperature input.
 * 2. Prompt the user to enter the water temperature.
 * 3. Read the user's input and store it in `input_user`.
 * 4. Determine the state of water based on the temperature:
 *    - If `input_user` is less than or equal to 0, print "frozen".
 *    - If `input_user` is greater than 0 and less than or equal to 100, print "liquid".
 *    - If `input_user` is greater than 100, print "vapor".
 * 5. Print the corresponding message indicating the state of water.
 * 6. End the program.
 *
 * Preconditions: The program assumes the user will enter a valid floating-point number for temperature.
 * Postconditions: The program will output the state of water based on the given temperature.
 * Edge Cases:
 * - Temperature exactly at 0°C and 100°C are correctly handled as frozen and liquid, respectively.
 * - Any non-numeric input is treated as an invalid input.
 *
 * Output:
 * The program will print the state of water along with the input temperature, e.g.,
 * - For an input of `-5`, the output will be `-5.0°C the water is frozen`.
 * - For an input of `25`, the output will be `25.0°C water is in liquid state`.
 * - For an input of `110`, the output will be `110.0°C water in vapor state`.
 *
 * Program Flow:
 * 1. Initialize `input_user` to store the water temperature.
 * 2. Prompt the user for input.
 * 3. Read the temperature from the user.
 * 4. Evaluate the temperature:
 *    - If temperature is ≤ 0, print "frozen".
 *    - If temperature is > 0 and ≤ 100, print "liquid".
 *    - If temperature is > 100, print "vapor".
 * 5. End the program.
 */

#include <stdio.h>

int main() {
    float input_user; // Variable to store the water temperature input

    printf("Enter the water temperature: "); // Prompt the user for temperature
    scanf("%f", &input_user); // Read the temperature input

    // Determine the state of water based on the temperature
    if (input_user <= 0) {
        printf("%.1f°C the water is frozen", input_user); // Print if water is frozen
    } else if (input_user > 0 && input_user <= 100) {
        printf("%.1f°C water is in liquid state", input_user); // Print if water is liquid
    } else if (input_user > 100) {
        printf("%.1f°C water in vapor state", input_user); // Print if water is vapor
    } else {
        printf("invalid input"); // Handle invalid inputs
    }

    return 0; // Indicate successful completion
}
