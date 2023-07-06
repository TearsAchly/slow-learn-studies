/*
 * Program Title: Switch Case Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of switch-case to 
 *              display the day of the week based on an integer input 
 *              (1-7). If the input is invalid, it prompts the user 
 *              to enter a valid number.
 *
 * Logic:
 *        1. Declare an integer variable to represent the day of the week.
 *        2. Use a switch statement to evaluate the value of the day variable.
 *        3. Depending on the value, print the corresponding day of the week.
 *        4. Include a default case to handle invalid input (numbers not in the range 1-7).
 *
 * Preconditions: The days variable should hold a valid integer value (1-7).
 * Postconditions: The program outputs the corresponding day of the week or an error message.
 * Edge Cases: The program handles input values outside the range of 1 to 7.
 *
 * Program Flow:
 * 1. Declare an integer variable named `days` and initialize it to a value representing a day (e.g., 2).
 * 2. Use a switch-case statement to evaluate the value of `days`.
 * 3. For each case (1-7), print the corresponding day of the week.
 * 4. If the value does not match any case, execute the default case and print an error message.
 */

#include <stdio.h>

int main() {
    int day = 2; // Day of the week (1-7)

    switch (day) {
        case 1:
            printf("Day 1 of the week: Monday\n");
            break;
        case 2:
            printf("Day 2 of the week: Tuesday\n");
            break;
        case 3:
            printf("Day 3 of the week: Wednesday\n");
            break;
        case 4:
            printf("Day 4 of the week: Thursday\n");
            break;
        case 5:
            printf("Day 5 of the week: Friday\n");
            break;
        case 6:
            printf("Day 6 of the week: Saturday\n");
            break;
        case 7:
            printf("Day 7 of the week: Sunday\n");
            break;
        default:
            printf("Invalid input: Please enter a number between 1 and 7.\n");
    }

    return 0; // Indicate successful completion
}
