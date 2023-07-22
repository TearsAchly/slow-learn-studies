/*
 * Program Title: Variable Scope
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates variable scope in C. 
 *              It uses a global variable and a local variable 
 *              to print the name and age of a person.
 *
 * Logic:
 *        1. The global variable `name` is declared outside of the function.
 *        2. The function `age` takes an integer argument `a` representing a person's age.
 *        3. Inside the function, a local variable `age` is assigned the value of `a`.
 *        4. The function prints the person's name and age using the global and local variables.
 *        5. The main function calls `age` with an argument.
 * 
 * Preconditions: None
 * Postconditions: The function prints the name and age of the person.
 * Edge Cases: Changing the value of the global variable `name` outside of the function will affect all uses of it.
 *
 * Program Flow:
 * 1. The global variable `name` is initialized with "achly".
 * 2. The function `age` is called with an argument of 20.
 * 3. Inside the function, the value is printed.
 */

#include <stdio.h>

char name[] = {"achly"}; // Global variable

/*
 * Function Name: age
 * Parameters: 
 *   - int a: The age to print.
 * Returns: 
 *   - int: The age that was passed to the function.
 * Description: This function prints the person's name using a global variable 
 *              and the age passed as an argument.
 */
int age(int a) {
    int age = a; // Local variable
    printf("%s %d", name, age); // Print name and age
    return age; // Return age
}

int main() {
    age(20); // Call age function with argument 20
    return 0; // Exit the program
}
