/*
 * Program Title: Struct Data Type Example
 * Author: Achly
 * Date: July 2023
 * Description: This program demonstrates the usage of the `struct` data type in C
 *              by creating a structure to store a person's name and age, and modifying
 *              the age at runtime.
 *
 * Logic:
 *        1. Define a `struct` named `mystr` that contains two fields: 
 *            - `name` (an array of characters to store a string up to 98 characters plus null terminator).
 *            - `age` (an integer to store the age).
 *        2. Declare a variable `biodata` of type `struct mystr`.
 *        3. Use the `strcpy` function to copy the string "achly" into the `name` field of the structure.
 *        4. Assign the initial value `19` to the `age` field.
 *        5. Print the name and age using `printf`.
 *        6. Update the `age` field to `21` and print the updated value.
 *
 * Preconditions:
 *        - The `biodata` struct must be declared before it can be used.
 *        - The `name` field must be initialized using `strcpy` or other string functions before printing.
 *
 * Postconditions:
 *        - The program will output the person's name and initial age, and then print the updated age after modification.
 *
 * Edge Cases:
 *        - The program assumes the `name` string will not exceed 98 characters, otherwise it could lead to buffer overflow.
 *        - No complex edge cases are expected with basic integer and string handling.
 *
 * Program Flow:
 * 1. A structure `biodata` is declared with fields for `name` and `age`.
 * 2. The string "achly" is copied into the `name` field using `strcpy`.
 * 3. The `age` field is initialized with the value 19 and printed alongside the name.
 * 4. The `age` field is updated to 21 and printed again to reflect the new value.
 * 5. The program terminates after the final output.
 */

#include <stdio.h>
#include <string.h>

struct mystr {
  char name[99];  // String to store the name, max 98 characters + null terminator
  int age;        // Integer to store age
};

int main() {

  // Declare a struct variable
  struct mystr biodata;

  // Initialize the 'name' field using strcpy to assign a string
  strcpy(biodata.name, "achly");

  // Assign a value to the 'age' field
  biodata.age = 19;
  
  // Print the name and age
  printf("Halo %s, your age is %d", biodata.name, biodata.age);  // Output: Halo achly, your age is 19

  // Modify the 'age' field
  biodata.age = 21;

  // Print the updated age
  printf("\nHalo %s, your age is now %d", biodata.name, biodata.age);  // Output: Halo achly, your age is now 21

  return 0;
}

