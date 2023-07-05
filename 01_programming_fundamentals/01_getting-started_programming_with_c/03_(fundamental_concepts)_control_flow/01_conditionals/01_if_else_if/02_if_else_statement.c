/*
 * Program Title: If-Else Statement
 * Author: Achly
 * Date: July 2023
 * Description: This program checks if it is raining. If it is, 
 *              it advises the user to bring an umbrella; otherwise, 
 *              it tells the user that there is no need for an umbrella.
 *
 * Logic:
 *        1. Declare a boolean variable to represent the rain condition.
 *        2. Use an if-else statement to evaluate the condition of rain.
 *        3. If it is raining, print a message advising to bring an umbrella.
 *        4. If it is not raining, print a message indicating no need for an umbrella.
 *
 * Preconditions: The rain variable should be set to either true or false.
 * Postconditions: The program will output a message based on the rain condition.
 * Edge Cases: The rain variable must hold a valid boolean value (true or false).
 *
 * Program Flow:
 * 1. Declare an integer variable to represent whether it is raining.
 * 2. Initialize the variable to false (indicating no rain).
 * 3. Use an if-else statement to check the value of the rain variable.
 * 4. Based on the value of rain, output the corresponding message.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    bool rain = false; // Set rain to false (indicating no rain)

    if (rain) { // Check if it is raining
        printf("It is raining, bring an umbrella.\n");
    } else { // If not raining
        printf("It is not raining, no need to bring an umbrella.\n");
    }

    return 0; // Indicate successful completion
}
