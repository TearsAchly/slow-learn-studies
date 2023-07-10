/*
 * Program Title: Grade Rating
 * Author: Achly
 * Date: July 2023
 * Description: This program accepts a grade input from the user and 
 *              assigns a letter grade based on the specified grading scale.
 *
 * Logic:
 * 1. Declare a double variable `grade` to store the user's grade.
 * 2. Prompt the user to enter their grade.
 * 3. Read the user's input and store it in the variable `grade`.
 * 4. Check the value of `grade`:
 *    - If grade >= 80.00, print "A".
 *    - Else if grade >= 77.5 and grade < 80.00, print "A-".
 *    - Else if grade >= 75.00 and grade < 77.5, print "A/B".
 *    - Else if grade >= 72.50 and grade < 75.00, print "B+".
 *    - Else if grade >= 70.00 and grade < 72.50, print "B".
 *    - Else if grade >= 67.50 and grade < 70.00, print "B-".
 *    - Else if grade >= 65.00 and grade < 67.50, print "B/C".
 *    - Else if grade >= 62.50 and grade < 65.00, print "C+".
 *    - Else if grade >= 60.00 and grade < 62.50, print "C".
 *    - Else if grade >= 57.00 and grade < 60.00, print "C-".
 *    - Else if grade >= 55.00 and grade < 57.00, print "D".
 *    - Else, print "E".
 * 5. End the program.
 *
 * Preconditions: The program assumes the user will enter a valid double value for grade.
 * Postconditions: The program will output a message indicating the letter grade based on 
 *                 the input provided by the user.
 * Edge Cases: 
 * - If the user inputs a grade that does not match any condition, it will output "E".
 * - The program does not handle invalid inputs (e.g., non-numeric entries).
 *
 * Output:
 * The program will print a letter grade based on the numeric input:
 * - For example, if the user inputs `85`, the output will be `A`.
 * - If the user inputs `78`, the output will be `A-`.
 * - If the user inputs `72`, the output will be `B+`.
 * - If the user inputs `50`, the output will be `E`.
 *
 * Program Flow:
 * 1. Initialize `grade` to store the user's grade.
 * 2. Prompt for user input.
 * 3. Read input from the user.
 * 4. Evaluate the grade:
 *    - If `grade` >= 80.00, print "A".
 *    - If `grade` >= 77.5 and < 80.00, print "A-".
 *    - If `grade` >= 75.00 and < 77.5, print "A/B".
 *    - If `grade` >= 72.50 and < 75.00, print "B+".
 *    - If `grade` >= 70.00 and < 72.50, print "B".
 *    - If `grade` >= 67.50 and < 70.00, print "B-".
 *    - If `grade` >= 65.00 and < 67.50, print "B/C".
 *    - If `grade` >= 62.50 and < 65.00, print "C+".
 *    - If `grade` >= 60.00 and < 62.50, print "C".
 *    - If `grade` >= 57.00 and < 60.00, print "C-".
 *    - If `grade` >= 55.00 and < 57.00, print "D".
 *    - If none of the conditions are met, print "E".
 * 5. End the program.
 */

#include <stdio.h>

int main() {
    double grade; // Variable to store the grade

    printf("Enter the grade given by your math teacher: "); // Prompt the user to enter their grade
    scanf("%lf", &grade); // Read the grade input

    // Determine the letter grade based on the numeric grade
    if (grade >= 80.00) {
        printf("A");
    } else if (grade >= 77.5 && grade < 80.00) {
        printf("A-");
    } else if (grade >= 75.00 && grade < 77.5) {
        printf("A/B");
    } else if (grade >= 72.50 && grade < 75.00) {
        printf("B+");
    } else if (grade >= 70.00 && grade < 72.50) {
        printf("B");
    } else if (grade >= 67.50 && grade < 70.00) {
        printf("B-");
    } else if (grade >= 65.00 && grade < 67.50) {
        printf("B/C");
    } else if (grade >= 62.50 && grade < 65.00) {
        printf("C+");
    } else if (grade >= 60.00 && grade < 62.50) {
        printf("C");
    } else if (grade >= 57.00 && grade < 60.00) {
        printf("C-");
    } else if (grade >= 55.00 && grade < 57.00) {
        printf("D");
    } else {
        printf("E");
    }

    return 0; // Indicate successful completion
}
