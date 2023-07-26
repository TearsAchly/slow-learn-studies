/*
 * Program Title: Water Temperature
 * Author: Achly
 * Date: July 2023
 * Description: This program determines the state of water (solid, liquid, vapor) 
 *              based on the input temperature.
 *
 * Logic:
 *        1. The function `water_temp` takes a temperature as input.
 *        2. Based on the value of the temperature, the function determines the state of water:
 *           - Frozen if the temperature is <= 0°C.
 *           - Liquid if the temperature is between 0°C and 100°C.
 *           - Vapor if the temperature is > 100°C.
 *        3. The result is printed accordingly.
 *
 * Preconditions: The input must be a valid floating-point number representing the temperature.
 * Postconditions: The program will output the state of water (frozen, liquid, or vapor).
 * Edge Cases: Negative temperatures are handled correctly.
 *
 * Program Flow:
 * 1. Declare a float variable `temp` to store the user input for water temperature.
 * 2. Prompt the user to input a temperature:
 *    - Display the message "Enter the water temperature: ".
 * 3. Read the temperature entered by the user and store it in the `temp` variable.
 * 4. Call the `water_temp` function with the input `temp` as its argument.
 * 5. Inside the `water_temp` function:
 *    - If the temperature is less than or equal to 0°C, print that the water is frozen.
 *    - If the temperature is between 0°C and 100°C, print that the water is in a liquid state.
 *    - If the temperature is greater than 100°C, print that the water is in a vapor state.
 *    - If the input is invalid (e.g., non-numeric input), print an error message.
 * 6. End the program after displaying the result.
 */

#include <stdio.h>

/*
 * Function Name: water_temp
 * Parameters: 
 *   - float temp: The temperature of the water.
 * Returns: 
 *   - void: The function prints the state of water.
 * Description: This function determines and prints the state of water based on 
 *              the provided temperature.
 */
void water_temp(float temp) {
  if (temp <= 0) {
    printf("%.1f°C the water is frozen", temp);
  } else if (temp > 0 && temp <= 100) {  // Corrected range for liquid state
    printf("%.1f°C water is in liquid state", temp);
  } else if (temp > 100) {
    printf("%.1f°C water in vapor state", temp);
  } else {
    printf("invalid input");
  }
}

int main() {
  float temp; // Variable to store the user's input temperature

  // Input temperature from user
  printf("Enter the water temperature: ");
  scanf("%f", &temp);

  // Call function to determine water state
  water_temp(temp);

  return 0;
}
