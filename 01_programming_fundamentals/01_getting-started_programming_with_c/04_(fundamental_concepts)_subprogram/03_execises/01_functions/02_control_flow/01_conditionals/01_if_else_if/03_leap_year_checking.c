/*
 * Program Title: Leap Year Checking
 * Author: Achly
 * Date: July 2023
 * Description: This program checks whether a given year is a leap year or not.
 *
 * Logic:
 *        1. The function `leap_year_check` takes a year as input.
 *        2. It checks whether the year is divisible by 4 but not by 100, or divisible by 400:
 *           - If the year meets either of these conditions, it is a leap year.
 *           - If not, it is not a leap year.
 *        3. The result is printed accordingly.
 *
 * Preconditions: The input must be a valid year (integer).
 * Postconditions: The program will output either "leap year" or "no leap year".
 * Edge Cases: Leap years occur every 4 years, except for years divisible by 100 that are not divisible by 400.
 *
 * Program Flow:
 * 1. Declare an integer variable `year` to store the user input.
 * 2. Prompt the user to enter a year.
 * 3. Read the user's input and store it in the variable `year`.
 * 4. Call the function `leap_year_check` with the value of `year` as an argument.
 * 5. Inside the function `leap_year_check`:
 *    - Check if the year is divisible by 4 and not divisible by 100, or divisible by 400.
 *    - If true, print "leap year".
 *    - Otherwise, print "no leap year".
 * 6. End the program.
 */

#include <stdio.h>

/*
 * Function Name: leap_year_check
 * Parameters: 
 *   - int year: The year to check.
 * Returns: 
 *   - void: The function prints whether the year is a leap year or not.
 * Description: This function checks and prints whether the provided year 
 *              is a leap year or not.
 */
void leap_year_check(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("leap year");
    } else {
        printf("no leap year");
    }
}

int main() {
    int year; // Variable to store the user's input year

    // Input year from user
    printf("Enter the year to check whether it is a leap year or not: ");
    scanf("%d", &year);

    // Call function to check if it is a leap year
    leap_year_check(year);

    return 0; // Program termination
}
