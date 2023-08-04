/*
 * Program Title: Using typedef for Structs in C
 * Author: Achly
 * Date: August 2023
 * Description: This program demonstrates the use of `typedef` with a structure
 *              in C to create a new data type for managing person-related data.
 *
 * Logic:
 *        1. Define a structure `Person` that contains two members: a character array 
 *           `name` for storing the person's name, and an integer `age` for storing 
 *           the person's age.
 *        2. Use `typedef` to allow the creation of variables of type `Person` 
 *           without needing to use the keyword `struct` each time.
 *        3. Declare a variable `p1` of type `Person` to hold the data for a person.
 *
 * Preconditions:
 *        - The structure must be defined before any variables of that type can be declared.
 *
 * Postconditions:
 *        - The program defines a new type `Person`, and a variable `p1` is created 
 *          that can hold data related to a person, specifically their name and age.
 *
 * Edge Cases:
 *        - Ensure that the `name` field in the `Person` structure does not exceed 49 characters 
 *          (plus the null terminator) to avoid buffer overflow.
 *
 * Program Flow:
 * 1. The structure `Person` is defined with a character array for the name and an integer for the age.
 * 2. The `typedef` keyword is used to allow the `Person` structure to be referenced 
 *    without the `struct` prefix.
 * 3. A variable `p1` of type `Person` is declared, allowing for future assignments 
 *    of values for a person's name and age.
 */

#include <stdio.h>

typedef struct {
    char name[50];  // Array to hold the person's name (maximum 49 characters + null terminator)
    int age;       // Integer to hold the person's age
} Person;

int main() {
    Person p1;  // Now we can declare a variable of type 'Person' without the 'struct' keyword.

    // Assign values to p1
    snprintf(p1.name, sizeof(p1.name), "Achly"); // Safely copy the name into the structure
    p1.age = 19;  // Assign age

    // Print out the information stored in the struct
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return 0;
}
