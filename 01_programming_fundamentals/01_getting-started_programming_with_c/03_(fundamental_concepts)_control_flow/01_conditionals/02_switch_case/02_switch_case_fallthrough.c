/*
 * Program Title: Switch Case with Fallthrough
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the use of switch-case with 
 *              fallthrough behavior. It indicates which days are 
 *              considered workdays and which are not, based on the 
 *              integer input.
 *
 * Logic:
 *        1. Declare an integer variable `work` to represent a work-related flag.
 *        2. Use the `work` variable as the input for the switch-case statement.
 *        3. Depending on the value of `days`, print the corresponding day of the week.
 *        4. If `days` matches a workday, print the workday message and fall through 
 *           to the next case to indicate that subsequent days are also workdays.
 *        5. Use the break statement to exit the switch case appropriately.
 *        6. Handle the case for non-workdays (Saturday and Sunday).
 *        7. Include a default case to handle invalid inputs.
 *
 * Preconditions: The `days` variable should hold a valid integer value (0-6).
 * Postconditions: The program outputs whether the day is a workday or not, or an error message.
 * Edge Cases: The program handles input values outside the range of 0 to 6.
 *
 * Program Flow:
 * 1. Declare an integer variable named `work` and initialize it to represent a workday (e.g., `true`).
 * 2. Assign the value of `work` to another variable named `days`.
 * 3. Use a switch-case statement to evaluate the value of `days`.
 * 4. For each case (0-6), print the corresponding message indicating whether the day is a workday or not.
 * 5. If the input does not match any case, execute the default case and print an error message.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    int work = true; // Represents a work-related flag
    int days = work; // Using work as the switch case variable

    switch (days) {
        case 1:
            printf("\nDay 1 work of the week: Monday");
        case 2:
            printf("\nDay 2 work of the week: Tuesday");
        case 3:
            printf("\nDay 3 work of the week: Wednesday");
        case 4:
            printf("\nDay 4 work of the week: Thursday");
        case 5:
            break; // Exiting the switch statement
            printf("\nDay 5 not work of the week: Friday");
        case 0:
            printf("\nDay 6 not work of the week: Saturday");
        case 6:
            printf("\nDay 7 not work of the week: Sunday");
            break;
        default:
            printf("\nInvalid input: Please enter a number between 0 and 6");
    }

    return 0;
}
