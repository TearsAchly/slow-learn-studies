/*
 * Program Title: Greeting Program
 * Author: Achly
 * Date: July 2023
 * Description: This program greets a user by name and age, demonstrating 
 *              the use of functions in C. It utilizes an array of characters 
 *              to hold the name and an integer for age.
 *
 * Logic:
 *        1. The program defines a function `say_hello` that takes a string 
 *           (name) and an integer (age) as parameters.
 *        2. Inside `main`, a name and age are initialized.
 *        3. The `say_hello` function is called with the initialized values.
 *        4. The function prints a greeting message using the name and age.
 *
 * Preconditions: The name should be a valid string and the age should be a 
 *                non-negative integer.
 * Postconditions: The program will output a greeting message that includes 
 *                 the user's name and age.
 * Edge Cases: The program does not handle cases for empty names or negative 
 *             ages.
 *
 * Program Flow:
 * 1. The program starts in the `main` function.
 * 2. The `name` array is initialized with "achly".
 * 3. The `age` variable is initialized with 20.
 * 4. The `say_hello` function is called with the name and age.
 * 5. The `say_hello` function prints the greeting message.
 * 6. The program terminates successfully.
 */

#include <stdio.h>

// Function prototype for say_hello
void say_hello(char[], int);

/*
 * Function Name: say_hello
 * Parameters: 
 *   - char name[]: An array of characters representing the user's name.
 *   - int age: An integer representing the user's age.
 * Returns: 
 *   - void: This function does not return a value. It prints a greeting message.
 * Description: This function takes a user's name and age as input, and
 *              prints a greeting message that includes both.
 */
void say_hello(char name[], int age) {
    printf("\nHello %s", name);       // Print greeting with name
    printf("\nYou are %d years old", age); // Print age
}

int main() {
    char name[] = "achly"; // Initialize name
    int age = 20;          // Initialize age

    say_hello(name, age);  // Call function to greet the user
    return 0;              // Exit the program
}
