/*
 * Program Title: Age Grouping
 * Author: Achly
 * Date: July 2023
 * Description: This program accepts the user's age as input and categorizes 
 *              the user into different age groups: babies and toddlers, 
 *              children, teenagers, mature adults, and elderly.
 *
 * Logic:
 * 1. Declare an integer variable `age` to store the user's age.
 * 2. Prompt the user to enter their age.
 * 3. Read the user's input and store it in the variable `age`.
 * 4. Check the value of `age`:
 *    - If age <= 5, print "babies and toddlers".
 *    - Else if age > 5 and age <= 9, print "children".
 *    - Else if age > 9 and age <= 18, print "teenager".
 *    - Else if age > 18 and age <= 59, print "mature".
 *    - Else if age >= 60, print "elderly".
 * 5. End the program.
 *
 * Preconditions: The program assumes the user will enter a valid integer value for age.
 * Postconditions: The program will output a message indicating the age group based on 
 *                 the input provided by the user.
 * Edge Cases: 
 * - If the user inputs a negative number or a non-integer, it may not be handled 
 *   properly; thus, an "Invalid age input." message will be displayed if the input 
 *   does not meet any conditions.
 * - Inputs of exactly 5, 9, 18, 59, or 60 will correctly identify the respective 
 *   age groups.
 *
 * Output:
 * The program will print messages indicating the age group based on the input age:
 * - For example, if the user inputs `4`, the output will be `babies and toddlers`.
 * - If the user inputs `7`, the output will be `children`.
 * - If the user inputs `15`, the output will be `teenager`.
 * - If the user inputs `30`, the output will be `mature`.
 * - If the user inputs `65`, the output will be `elderly`.
 *
 * Program Flow:
 * 1. Initialize `age` to store the user's age.
 * 2. Prompt for user input.
 * 3. Read input from the user.
 * 4. Evaluate the age:
 *    - If `age` <= 5, print "babies and toddlers".
 *    - If `age` > 5 and <= 9, print "children".
 *    - If `age` > 9 and <= 18, print "teenager".
 *    - If `age` > 18 and <= 59, print "mature".
 *    - If `age` >= 60, print "elderly".
 *    - If none of the conditions are met, print "Invalid age input".
 * 5. End the program.
 */

#include <stdio.h>

int main() {
    int age; // Variable to store the user's age

    printf("Enter your current age: "); // Prompt the user to enter their age
    scanf("%d", &age); // Read the age input

    // Determine the age group based on the user's age
    if (age <= 5) {
        printf("babies and toddlers"); // Age group for 5 and below
    } else if (age >= 6 && age <= 9) {
        printf("children"); // Age group for 6 to 9
    } else if (age >= 10 && age <= 18) {
        printf("teenager"); // Age group for 10 to 18
    } else if (age >= 19 && age <= 59) {
        printf("mature"); // Age group for 19 to 59
    } else if (age >= 60) {
        printf("elderly"); // Age group for 60 and above
    } else {
        printf("Invalid age input."); // Handle invalid inputs
    }

    return 0; // Indicate successful completion
}
