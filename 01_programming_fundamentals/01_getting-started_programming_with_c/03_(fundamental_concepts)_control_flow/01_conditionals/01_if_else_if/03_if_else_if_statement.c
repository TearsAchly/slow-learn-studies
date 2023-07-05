/*
 * Program Title: Else If Statement
 * Author: Achly
 * Date: July 2023
 * Description: This program checks the rain conditions. If it's not raining, 
 *              it tells the user there’s no need for an umbrella. If it's 
 *              raining heavily, it advises wearing a raincoat; otherwise, 
 *              it suggests bringing an umbrella.
 *
 * Logic:
 *        1. Declare and initialize boolean variables to represent rain conditions.
 *        2. Use an if-else statement to evaluate the conditions.
 *        3. If it is not raining, print a message indicating no need for an umbrella.
 *        4. If it is raining heavily, print a message advising to wear a raincoat.
 *        5. If it is raining lightly, print a message suggesting to bring an umbrella.
 *
 * Preconditions: The variables indicating rain must be set to either true or false.
 * Postconditions: The program will output a message based on the rain conditions.
 * Edge Cases: The variables must hold valid boolean values (true or false).
 *
 * Program Flow:
 * 1. Declare two integer variables to represent whether it is raining and whether it is heavy rain.
 * 2. Use an if-else statement to check the value of the rain variable.
 * 3. Based on the value of rain and heavy_rain, output the corresponding message.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    bool rain = true;       // Set rain to true (indicating it is raining)
    bool heavy_rain = false; // Set heavy rain to false (indicating it's not heavy rain)

    if (!rain) { // Check if it is not raining
        printf("\nIt is not raining, no need to bring an umbrella.\n");
    } else if (heavy_rain) { // Check if it is raining heavily
        printf("\nIt is raining heavily, wear a raincoat for better protection.\n");
    } else { // If it is just light rain
        printf("\nIt is just light rain, bring an umbrella.\n");
    }

    return 0; // Indicate successful completion
}
